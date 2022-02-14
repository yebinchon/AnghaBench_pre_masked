
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hardware {size_t buffer_bytes_max; size_t period_bytes_min; size_t period_bytes_max; size_t periods_min; size_t periods_max; int info; int formats; int channels_min; int channels_max; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; int private_free; struct snd_card_asihpi_pcm* private_data; } ;
struct snd_card_asihpi_pcm {int h_stream; struct snd_pcm_substream* substream; int timer; } ;
struct snd_card_asihpi {size_t update_interval_frames; size_t out_max_chans; scalar_t__ can_dma; scalar_t__ support_grouping; int in_min_chans; int in_max_chans; TYPE_2__* hpi; } ;
typedef int snd_card_asihpi_capture ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct snd_card_asihpi_pcm*) ;
 struct snd_card_asihpi_pcm* FUNC_3 (int,int ) ;
 int FUNC_4 (struct snd_pcm_hardware*,int ,int) ;
 int FUNC_5 (struct snd_card_asihpi*,int ) ;
 int FUNC_6 (struct snd_card_asihpi*,struct snd_pcm_hardware*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,size_t,int ) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_9 (struct snd_pcm_runtime*,int ,int ,size_t) ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 struct snd_card_asihpi* FUNC_11 (struct snd_pcm_substream*) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_17)
{
 struct snd_pcm_runtime *VAR_18 = VAR_17->runtime;
 struct snd_card_asihpi *VAR_19 = FUNC_11(VAR_17);
 struct snd_card_asihpi_pcm *VAR_20;
 struct snd_pcm_hardware VAR_21;
 int VAR_22;

 VAR_20 = FUNC_3(sizeof(*VAR_20), VAR_4);
 if (VAR_20 == ((void*)0))
  return -VAR_3;

 FUNC_12("capture open adapter %d stream %d\n",
   VAR_19->hpi->adapter->index, VAR_17->number);

 VAR_22 = FUNC_0(
     FUNC_1(VAR_19->hpi->adapter->index,
        VAR_17->number, &VAR_20->h_stream));
 if (VAR_22)
  FUNC_2(VAR_20);
 if (VAR_22 == VAR_5)
  return -VAR_1;
 if (VAR_22)
  return -VAR_2;

 FUNC_13(&VAR_20->timer, VAR_16, 0);
 VAR_20->substream = VAR_17;
 VAR_18->private_data = VAR_20;
 VAR_18->private_free = VAR_15;

 FUNC_4(&VAR_21, 0, sizeof(VAR_21));
 if (!VAR_19->hpi->interrupt_mode) {
  VAR_21.buffer_bytes_max = VAR_0;
  VAR_21.period_bytes_min = VAR_7;
  VAR_21.period_bytes_max = VAR_0 / VAR_6;
  VAR_21.periods_min = VAR_6;
  VAR_21.periods_max = VAR_0 / VAR_7;
 } else {
  size_t VAR_23 = VAR_19->update_interval_frames *
   VAR_19->out_max_chans;
  VAR_21.buffer_bytes_max = VAR_0;
  VAR_21.period_bytes_min = VAR_23;
  VAR_21.period_bytes_max = VAR_0 / VAR_6;
  VAR_21.periods_min = VAR_6;
  VAR_21.periods_max = VAR_0 / VAR_23;
 }

 VAR_21.channels_max = VAR_19->in_max_chans;
 VAR_21.channels_min = VAR_19->in_min_chans;
 VAR_21.formats =
  FUNC_5(VAR_19, VAR_20->h_stream);
 FUNC_6(VAR_19, &VAR_21);
 VAR_21.info = VAR_10 |
     VAR_11 |
     VAR_12;

 if (VAR_19->support_grouping)
  VAR_21.info |= VAR_13;

 VAR_18->hw = VAR_21;

 if (VAR_19->can_dma)
  VAR_22 = FUNC_8(VAR_18, 0,
     VAR_8);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_9(VAR_18, 0, VAR_9,
  VAR_19->update_interval_frames);
 FUNC_7(VAR_18, VAR_9,
  VAR_19->update_interval_frames, VAR_14);

 FUNC_10(VAR_17);

 return 0;
}
