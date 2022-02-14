
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct skl_dev {int dummy; } ;




 struct skl_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_dapm_widget*,struct skl_dev*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,struct skl_dev*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
   struct snd_kcontrol *VAR_1, int VAR_2)

{
 struct snd_soc_dapm_context *VAR_3 = VAR_0->dapm;
 struct skl_dev *VAR_4 = FUNC_0(VAR_3->dev);

 switch (VAR_2) {
 case 128:
  return FUNC_2(VAR_0, VAR_4);

 case 129:
  return FUNC_1(VAR_0, VAR_4);
 }

 return 0;
}
