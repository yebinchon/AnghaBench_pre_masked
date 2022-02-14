
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; int codec_dai; } ;
struct snd_soc_jack {int dummy; } ;
struct TYPE_3__ {int idle_bias_off; } ;
struct snd_soc_card {TYPE_2__* dev; TYPE_1__ dapm; } ;
struct byt_max98090_private {struct snd_soc_jack jack; } ;
struct TYPE_4__ {int parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct byt_max98090_private* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*,char*,int,struct snd_soc_jack*,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,struct snd_soc_jack*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_pcm_runtime *VAR_6)
{
 int VAR_7;
 struct snd_soc_card *VAR_8 = VAR_6->card;
 struct byt_max98090_private *VAR_9 = FUNC_2(VAR_8);
 struct snd_soc_jack *VAR_10 = &VAR_9->jack;

 VAR_8->dapm.idle_bias_off = 1;

 VAR_7 = FUNC_4(VAR_6->codec_dai,
         VAR_0,
         25000000, VAR_3);
 if (VAR_7 < 0) {
  FUNC_1(VAR_8->dev, "Can't set codec clock %d\n", VAR_7);
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_6->card, "Headset",
        VAR_2 | VAR_1, VAR_10,
        VAR_5, FUNC_0(VAR_5));
 if (VAR_7)
  return VAR_7;

 return FUNC_5(VAR_8->dev->parent, VAR_10,
           FUNC_0(VAR_4),
           VAR_4);
}
