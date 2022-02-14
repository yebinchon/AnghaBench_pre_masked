
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {char channels_max; int rate_max; int rates; } ;
struct snd_pcm_runtime {int private_free; struct audiopipe* private_data; TYPE_3__ hw; } ;
struct snd_pcm_hardware {int dummy; } ;
struct echoaudio {scalar_t__ digital_mode; TYPE_1__* card; int pci; } ;
struct TYPE_5__ {char* list; int count; scalar_t__ mask; } ;
struct audiopipe {int index; int sgpage; TYPE_2__ constr; TYPE_3__ hw; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ,char*) ;
 int VAR_14 ;
 struct audiopipe* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int VAR_15 ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,int ,TYPE_2__*) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_9 (struct snd_pcm_runtime*,int ,int ,int ,struct echoaudio*,int ,int) ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 struct echoaudio* FUNC_11 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_16,
      signed char VAR_17)
{
 struct echoaudio *VAR_18;
 struct snd_pcm_runtime *VAR_19;
 struct audiopipe *VAR_20;
 int VAR_21, VAR_22;

 if (VAR_17 <= 0)
  return -VAR_1;

 VAR_18 = FUNC_11(VAR_16);
 VAR_19 = VAR_16->runtime;

 VAR_20 = FUNC_2(sizeof(struct audiopipe), VAR_3);
 if (!VAR_20)
  return -VAR_2;
 VAR_20->index = -1;


 FUNC_3(&VAR_20->hw, &VAR_15, sizeof(struct snd_pcm_hardware));
 FUNC_0(VAR_18->card->dev, "max_channels=%d\n", VAR_17);
 VAR_20->constr.list = VAR_13;
 VAR_20->constr.mask = 0;
 for (VAR_22 = 0; VAR_13[VAR_22] <= VAR_17; VAR_22++);
 VAR_20->constr.count = VAR_22;
 if (VAR_20->hw.channels_max > VAR_17)
  VAR_20->hw.channels_max = VAR_17;
 if (VAR_18->digital_mode == VAR_0) {
  VAR_20->hw.rate_max = 48000;
  VAR_20->hw.rates &= VAR_11;
 }

 VAR_19->hw = VAR_20->hw;
 VAR_19->private_data = VAR_20;
 VAR_19->private_free = VAR_12;
 FUNC_10(VAR_16);


 if ((VAR_21 = FUNC_7(VAR_19, 0,
           VAR_7,
           &VAR_20->constr)) < 0)
  return VAR_21;


 if ((VAR_21 = FUNC_6(VAR_19,
       VAR_8)) < 0)
  return VAR_21;




 if ((VAR_21 = FUNC_8(VAR_19, 0,
           VAR_9,
           32)) < 0)
  return VAR_21;
 if ((VAR_21 = FUNC_8(VAR_19, 0,
           VAR_6,
           32)) < 0)
  return VAR_21;

 if ((VAR_21 = FUNC_9(VAR_16->runtime, 0,
           VAR_10,
     VAR_14, VAR_18,
           VAR_10, -1)) < 0)
  return VAR_21;


 if ((VAR_21 = FUNC_4(VAR_5,
           FUNC_5(VAR_18->pci),
           VAR_4, &VAR_20->sgpage)) < 0) {
  FUNC_1(VAR_18->card->dev, "s-g list allocation failed\n");
  return VAR_21;
 }

 return 0;
}
