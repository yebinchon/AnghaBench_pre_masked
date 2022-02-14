
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_2__* runtime; TYPE_1__* pstr; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct hdspm {scalar_t__ playback_pid; scalar_t__ capture_pid; scalar_t__ system_sample_rate; int period_bytes; int* channel_map_out; unsigned char* playback_buffer; int* channel_map_in; unsigned char* capture_buffer; scalar_t__ io_type; int control_register; TYPE_3__* card; int lock; } ;
typedef scalar_t__ pid_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ dma_area; } ;
struct TYPE_4__ {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int ,char*,unsigned char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct hdspm*,struct snd_pcm_substream*,int ,int) ;
 int FUNC_4 (struct hdspm*,int) ;
 int FUNC_5 (struct hdspm*,scalar_t__,int ) ;
 int FUNC_6 (struct hdspm*,int ,int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct hdspm*,int,int) ;
 int FUNC_12 (struct hdspm*,int,int) ;
 int FUNC_13 (struct snd_pcm_substream*,int ) ;
 struct hdspm* FUNC_14 (struct snd_pcm_substream*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct snd_pcm_substream *VAR_12,
          struct snd_pcm_hw_params *VAR_13)
{
 struct hdspm *VAR_14 = FUNC_14(VAR_12);
 int VAR_15;
 int VAR_16;
 pid_t VAR_17;
 pid_t VAR_18;

 FUNC_15(&VAR_14->lock);

 if (VAR_12->pstr->stream == VAR_11) {
  VAR_17 = VAR_14->playback_pid;
  VAR_18 = VAR_14->capture_pid;
 } else {
  VAR_17 = VAR_14->capture_pid;
  VAR_18 = VAR_14->playback_pid;
 }

 if (VAR_18 > 0 && VAR_17 != VAR_18) {






  if (FUNC_10(VAR_13) != VAR_14->system_sample_rate) {
   FUNC_16(&VAR_14->lock);
   FUNC_0(VAR_13,
     VAR_10);
   return -VAR_1;
  }

  if (FUNC_9(VAR_13) != VAR_14->period_bytes / 4) {
   FUNC_16(&VAR_14->lock);
   FUNC_0(VAR_13,
     VAR_9);
   return -VAR_1;
  }

 }

 FUNC_16(&VAR_14->lock);



 FUNC_15(&VAR_14->lock);
 VAR_15 = FUNC_5(VAR_14, FUNC_10(VAR_13), 0);
 if (VAR_15 < 0) {
  FUNC_2(VAR_14->card->dev, "err on hdspm_set_rate: %d\n", VAR_15);
  FUNC_16(&VAR_14->lock);
  FUNC_0(VAR_13,
    VAR_10);
  return VAR_15;
 }
 FUNC_16(&VAR_14->lock);

 VAR_15 = FUNC_4(VAR_14,
   FUNC_9(VAR_13));
 if (VAR_15 < 0) {
  FUNC_2(VAR_14->card->dev,
    "err on hdspm_set_interrupt_interval: %d\n", VAR_15);
  FUNC_0(VAR_13,
    VAR_9);
  return VAR_15;
 }
 VAR_15 =
  FUNC_13(VAR_12, VAR_2);
 if (VAR_15 < 0) {
  FUNC_2(VAR_14->card->dev,
    "err on snd_pcm_lib_malloc_pages: %d\n", VAR_15);
  return VAR_15;
 }

 if (VAR_12->stream == VAR_11) {

  for (VAR_16 = 0; VAR_16 < FUNC_7(VAR_13); ++VAR_16) {
   int VAR_19 = VAR_14->channel_map_out[VAR_16];

   if (VAR_19 < 0)
    continue;
   FUNC_3(VAR_14, VAR_12,
         VAR_5,
         VAR_19);
   FUNC_12(VAR_14, VAR_19, 1);
  }

  VAR_14->playback_buffer =
   (unsigned char *) VAR_12->runtime->dma_area;
  FUNC_1(VAR_14->card->dev,
   "Allocated sample buffer for playback at %p\n",
    VAR_14->playback_buffer);
 } else {
  for (VAR_16 = 0; VAR_16 < FUNC_7(VAR_13); ++VAR_16) {
   int VAR_20 = VAR_14->channel_map_in[VAR_16];

   if (VAR_20 < 0)
    continue;
   FUNC_3(VAR_14, VAR_12,
         VAR_4,
         VAR_20);
   FUNC_11(VAR_14, VAR_20, 1);
  }

  VAR_14->capture_buffer =
   (unsigned char *) VAR_12->runtime->dma_area;
  FUNC_1(VAR_14->card->dev,
   "Allocated sample buffer for capture at %p\n",
    VAR_14->capture_buffer);
 }
 if (VAR_14->io_type == VAR_0) {
  return 0;
 }



 if (VAR_7 == FUNC_8(VAR_13)) {
  if (!(VAR_14->control_register & VAR_6))
   FUNC_2(VAR_14->card->dev,
     "Switching to native 32bit LE float format.\n");

  VAR_14->control_register |= VAR_6;
 } else if (VAR_8 == FUNC_8(VAR_13)) {
  if (VAR_14->control_register & VAR_6)
   FUNC_2(VAR_14->card->dev,
     "Switching to native 32bit LE integer format.\n");

  VAR_14->control_register &= ~VAR_6;
 }
 FUNC_6(VAR_14, VAR_3, VAR_14->control_register);

 return 0;
}
