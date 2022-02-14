
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct rt5645_priv {int rcclock_work; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct rt5645_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
  struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_3(VAR_4);
 struct rt5645_priv *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 FUNC_2(VAR_7->regmap, VAR_0,
  VAR_1, VAR_2);

 VAR_8 = FUNC_5(VAR_4, VAR_5);

 FUNC_0(VAR_3, &VAR_7->rcclock_work,
  FUNC_1(200));

 return VAR_8;
}
