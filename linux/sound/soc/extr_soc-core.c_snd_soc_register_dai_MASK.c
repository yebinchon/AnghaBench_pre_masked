
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct snd_soc_dai_driver {TYPE_1__ dobj; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,struct snd_soc_dai*) ;
 struct snd_soc_dai* FUNC_4 (struct snd_soc_component*,struct snd_soc_dai_driver*,int) ;

int FUNC_5(struct snd_soc_component *VAR_4,
 struct snd_soc_dai_driver *VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 =
  FUNC_2(VAR_4);
 struct snd_soc_dai *VAR_7;
 int VAR_8;

 if (VAR_5->dobj.type != VAR_2) {
  FUNC_0(VAR_4->dev, "Invalid dai type %d\n",
   VAR_5->dobj.type);
  return -VAR_0;
 }

 FUNC_1(&VAR_3);
 VAR_7 = FUNC_4(VAR_4, VAR_5, 0);
 if (!VAR_7)
  return -VAR_1;





 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 != 0) {
  FUNC_0(VAR_4->dev,
   "Failed to create DAI widgets %d\n", VAR_8);
 }

 return VAR_8;
}
