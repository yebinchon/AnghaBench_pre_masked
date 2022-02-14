
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_data {int dummy; } ;
struct snd_soc_dapm_widget {int name; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 struct sst_data* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_dapm_widget*,struct snd_kcontrol*) ;
 int FUNC_5 (struct sst_data*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_0->dapm);
 struct sst_data *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_4->dev, "Enter: widget=%s\n", VAR_0->name);

 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_5(VAR_5);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_4(VAR_0, VAR_1);
 }
 return VAR_3;
}
