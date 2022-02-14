
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hardware {size_t buffer_bytes_max; size_t period_bytes_min; size_t period_bytes_max; size_t periods_min; size_t periods_max; size_t channels_max; int info; int formats; int channels_min; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; int private_free; struct snd_card_asihpi_pcm* private_data; } ;
struct snd_card_asihpi_pcm {int h_stream; struct snd_pcm_substream* substream; int timer; } ;
struct snd_card_asihpi {size_t update_interval_frames; size_t out_max_chans; scalar_t__ can_dma; scalar_t__ support_grouping; int out_min_chans; TYPE_2__* hpi; } ;
typedef int snd_card_asihpi_playback ;
struct TYPE_4__ {int interrupt_mode; TYPE_1__* adapter; } ;
struct TYPE_3__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct snd_card_asihpi_pcm*) ;
 struct snd_card_asihpi_pcm* FUNC_3 (int,int ) ;
 int FUNC_4 (struct snd_pcm_hardware*,int ,int) ;
 int FUNC_5 (struct snd_card_asihpi*,struct snd_pcm_hardware*) ;
 int FUNC_6 (struct snd_card_asihpi*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,size_t,int ) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_9 (struct snd_pcm_runtime*,int ,int ,size_t) ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 struct snd_card_asihpi* FUNC_11 (struct snd_pcm_substream*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_21)
{
 struct snd_pcm_runtime *VAR_22 = VAR_21->runtime;
 struct snd_card_asihpi_pcm *VAR_23;
 struct snd_card_asihpi *VAR_24 = FUNC_11(VAR_21);
 struct snd_pcm_hardware VAR_25;
 int VAR_26;

 VAR_23 = FUNC_3(sizeof(*VAR_23), VAR_4);
 if (VAR_23 == ((void*)0))
  return -VAR_3;

 VAR_26 = FUNC_1(VAR_24->hpi->adapter->index,
         VAR_21->number, &VAR_23->h_stream);
 FUNC_0(VAR_26);
 if (VAR_26)
  FUNC_2(VAR_23);
 if (VAR_26 == VAR_5)
  return -VAR_1;
 if (VAR_26)
  return -VAR_2;






 FUNC_13(&VAR_23->timer, VAR_20, 0);
 VAR_23->substream = VAR_21;
 VAR_22->private_data = VAR_23;
 VAR_22->private_free = VAR_19;

 FUNC_4(&VAR_25, 0, sizeof(VAR_25));
 if (!VAR_24->hpi->interrupt_mode) {
  VAR_25.buffer_bytes_max = VAR_0;
  VAR_25.period_bytes_min = VAR_7;
  VAR_25.period_bytes_max = VAR_0 / VAR_6;
  VAR_25.periods_min = VAR_6;
  VAR_25.periods_max = VAR_0 / VAR_7;
 } else {
  size_t VAR_27 = VAR_24->update_interval_frames *
   VAR_24->out_max_chans;
  VAR_25.buffer_bytes_max = VAR_0;
  VAR_25.period_bytes_min = VAR_27;
  VAR_25.period_bytes_max = VAR_0 / VAR_6;
  VAR_25.periods_min = VAR_6;
  VAR_25.periods_max = VAR_0 / VAR_27;
 }


 VAR_25.channels_max = VAR_24->out_max_chans;
 VAR_25.channels_min = VAR_24->out_min_chans;
 VAR_25.formats =
   FUNC_6(VAR_24, VAR_23->h_stream);

 FUNC_5(VAR_24, &VAR_25);

 VAR_25.info = VAR_13 |
     VAR_12 |
     VAR_10 |
     VAR_11 |
     VAR_16 |
     VAR_14 |
     VAR_15;

 if (VAR_24->support_grouping) {
  VAR_25.info |= VAR_17;
  FUNC_10(VAR_21);
 }


 VAR_22->hw = VAR_25;

 if (VAR_24->can_dma)
  VAR_26 = FUNC_8(VAR_22, 0,
     VAR_8);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_9(VAR_22, 0, VAR_9,
  VAR_24->update_interval_frames);

 FUNC_7(VAR_22, VAR_9,
  VAR_24->update_interval_frames, VAR_18);

 FUNC_12("playback open\n");

 return 0;
}
