
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcxhr {int chip_idx; TYPE_1__* card; struct pcxhr_stream* capture_stream; struct pcxhr_stream* playback_stream; struct pcxhr_mgr* mgr; } ;
struct snd_pcm_substream {scalar_t__ stream; size_t number; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int channels_max; int channels_min; int rate_min; int rate_max; int formats; } ;
struct snd_pcm_runtime {struct pcxhr_stream* private_data; TYPE_2__ hw; } ;
struct pcxhr_stream {scalar_t__ status; scalar_t__ channels; struct snd_pcm_substream* substream; } ;
struct pcxhr_mgr {int sample_rate; scalar_t__ use_clock_type; int setup_mutex; int ref_count_rate; scalar_t__ is_hr_stereo; scalar_t__ mono_capture; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,int ,size_t) ;
 int FUNC_1 (int ,char*,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_4 (struct pcxhr_mgr*,scalar_t__,int*) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 struct snd_pcxhr* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_10)
{
 struct snd_pcxhr *VAR_11 = FUNC_8(VAR_10);
 struct pcxhr_mgr *VAR_12 = VAR_11->mgr;
 struct snd_pcm_runtime *VAR_13 = VAR_10->runtime;
 struct pcxhr_stream *VAR_14;
 int VAR_15;

 FUNC_2(&VAR_12->setup_mutex);


 VAR_13->hw = VAR_9;

 if( VAR_10->stream == VAR_8 ) {
  FUNC_0(VAR_11->card->dev, "pcxhr_open playback chip%d subs%d\n",
       VAR_11->chip_idx, VAR_10->number);
  VAR_14 = &VAR_11->playback_stream[VAR_10->number];
 } else {
  FUNC_0(VAR_11->card->dev, "pcxhr_open capture chip%d subs%d\n",
       VAR_11->chip_idx, VAR_10->number);
  if (VAR_12->mono_capture)
   VAR_13->hw.channels_max = 1;
  else
   VAR_13->hw.channels_min = 2;
  VAR_14 = &VAR_11->capture_stream[VAR_10->number];
 }
 if (VAR_14->status != VAR_2){

  FUNC_1(VAR_11->card->dev, "pcxhr_open chip%d subs%d in use\n",
      VAR_11->chip_idx, VAR_10->number);
  FUNC_3(&VAR_12->setup_mutex);
  return -VAR_0;
 }


 if (VAR_12->is_hr_stereo)
  VAR_13->hw.formats &= ~VAR_4;


 VAR_15 = FUNC_5(VAR_13,
         VAR_6);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_12->setup_mutex);
  return VAR_15;
 }




 if (VAR_12->sample_rate)
  VAR_13->hw.rate_min = VAR_13->hw.rate_max = VAR_12->sample_rate;
 else {
  if (VAR_12->use_clock_type != VAR_1) {
   int VAR_16;
   if (FUNC_4(VAR_12, VAR_12->use_clock_type,
           &VAR_16) ||
       VAR_16 == 0) {

    FUNC_3(&VAR_12->setup_mutex);
    return -VAR_0;
   }
   VAR_13->hw.rate_min = VAR_16;
   VAR_13->hw.rate_max = VAR_16;
  }
 }

 VAR_14->status = VAR_3;
 VAR_14->substream = VAR_10;
 VAR_14->channels = 0;

 VAR_13->private_data = VAR_14;


 FUNC_6(VAR_13, 0,
       VAR_5, 32);
 FUNC_6(VAR_13, 0,
       VAR_7, 32);
 FUNC_7(VAR_10);

 VAR_12->ref_count_rate++;

 FUNC_3(&VAR_12->setup_mutex);
 return 0;
}
