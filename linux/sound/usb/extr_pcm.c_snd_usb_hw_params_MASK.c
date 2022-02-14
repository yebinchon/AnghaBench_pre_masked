
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_substream {int need_setup_ep; TYPE_3__* stream; int altset_idx; int interface; int channels; int cur_rate; int pcm_format; TYPE_2__* dev; int buffer_periods; int period_frames; int period_bytes; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct audioformat {int altset_idx; int iface; } ;
struct TYPE_6__ {int chip; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct snd_usb_substream* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 struct audioformat* FUNC_1 (struct snd_usb_substream*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_usb_substream*,struct audioformat*) ;
 int FUNC_10 (struct snd_usb_substream*) ;
 int FUNC_11 (struct snd_usb_substream*) ;
 int FUNC_12 (struct snd_pcm_substream*,int ) ;
 int FUNC_13 (struct snd_pcm_substream*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct snd_usb_substream*,int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_17(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4)
{
 struct snd_usb_substream *VAR_5 = VAR_3->runtime->private_data;
 struct audioformat *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_2)
  VAR_7 = FUNC_12(VAR_3,
             FUNC_2(VAR_4));
 else
  VAR_7 = FUNC_13(VAR_3,
            FUNC_2(VAR_4));
 if (VAR_7 < 0)
  goto stop_pipeline;

 VAR_5->pcm_format = FUNC_4(VAR_4);
 VAR_5->period_bytes = FUNC_5(VAR_4);
 VAR_5->period_frames = FUNC_6(VAR_4);
 VAR_5->buffer_periods = FUNC_7(VAR_4);
 VAR_5->channels = FUNC_3(VAR_4);
 VAR_5->cur_rate = FUNC_8(VAR_4);

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6) {
  FUNC_0(&VAR_5->dev->dev,
   "cannot set format: format = %#x, rate = %d, channels = %d\n",
      VAR_5->pcm_format, VAR_5->cur_rate, VAR_5->channels);
  VAR_7 = -VAR_0;
  goto stop_pipeline;
 }

 VAR_7 = FUNC_14(VAR_5->stream->chip);
 if (VAR_7 < 0)
  goto stop_pipeline;

 VAR_7 = FUNC_15(VAR_5, VAR_1);
 if (VAR_7 < 0)
  goto unlock;

 VAR_7 = FUNC_9(VAR_5, VAR_6);
 if (VAR_7 < 0)
  goto unlock;

 VAR_5->interface = VAR_6->iface;
 VAR_5->altset_idx = VAR_6->altset_idx;
 VAR_5->need_setup_ep = 1;

 unlock:
 FUNC_16(VAR_5->stream->chip);
 if (VAR_7 < 0)
  goto stop_pipeline;
 return VAR_7;

 stop_pipeline:
 FUNC_11(VAR_5);
 return VAR_7;
}
