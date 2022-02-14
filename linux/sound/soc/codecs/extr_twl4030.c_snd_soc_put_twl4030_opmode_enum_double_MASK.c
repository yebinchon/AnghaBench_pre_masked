
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {scalar_t__ configured; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct twl4030_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_1);
 struct twl4030_priv *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->configured) {
  FUNC_0(VAR_3->dev,
   "operation mode cannot be changed on-the-fly\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_1, VAR_2);
}
