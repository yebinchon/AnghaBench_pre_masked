
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpa6130a2_data {int dummy; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct tpa6130a2_data* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (struct tpa6130a2_data*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0->dapm);
 struct tpa6130a2_data *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_2)) {

  return FUNC_3(VAR_4, 1);
 } else {

  return FUNC_3(VAR_4, 0);
 }
}
