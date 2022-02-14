
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; TYPE_1__* codec_dai; } ;
struct snd_soc_dapm_route {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_5__ {int idle_bias_off; } ;
struct snd_soc_card {TYPE_2__ dapm; int dev; } ;
struct TYPE_4__ {struct snd_soc_component* component; } ;


 int FUNC_0 (struct snd_soc_dapm_route*) ;

 int VAR_0 ;

 int FUNC_1 (int) ;
 struct snd_soc_dapm_route* VAR_1 ;
 struct snd_soc_dapm_route* VAR_2 ;
 struct snd_soc_dapm_route* VAR_3 ;
 struct snd_soc_dapm_route* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;
 int FUNC_5 (struct snd_soc_card*,struct snd_soc_dapm_route*,int) ;
 int FUNC_6 (TYPE_2__*,struct snd_soc_dapm_route const*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_pcm_runtime *VAR_7)
{
 int VAR_8;
 struct snd_soc_component *VAR_9 = VAR_7->codec_dai->component;
 struct snd_soc_card *VAR_10 = VAR_7->card;
 const struct snd_soc_dapm_route *VAR_11;
 int VAR_12;

 VAR_10->dapm.idle_bias_off = 1;

 VAR_8 = FUNC_5(VAR_10, VAR_1,
     FUNC_0(VAR_1));
 if (VAR_8) {
  FUNC_2(VAR_10->dev, "unable to add card controls\n");
  return VAR_8;
 }

 FUNC_3(VAR_6);
 switch (FUNC_1(VAR_5)) {
 case 128:
  VAR_11 = VAR_4;
  VAR_12 = FUNC_0(VAR_4);
  break;
 case 129:
  VAR_11 = VAR_3;
  VAR_12 = FUNC_0(VAR_3);
  break;
 default:
  VAR_11 = VAR_2;
  VAR_12 = FUNC_0(VAR_2);
 }

 VAR_8 = FUNC_6(&VAR_10->dapm, VAR_11, VAR_12);
 if (VAR_8)
  return VAR_8;

 if (VAR_5 & VAR_0) {
  VAR_8 = FUNC_4(VAR_9, 0, 0);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_7(&VAR_10->dapm, "Headphone");
 FUNC_7(&VAR_10->dapm, "Speaker");

 return VAR_8;
}
