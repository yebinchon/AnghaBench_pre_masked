
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct da7219_priv {scalar_t__ alc_en; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 struct da7219_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
 struct da7219_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1);





 if ((VAR_4 == 1) && (VAR_3->alc_en))
  FUNC_0(VAR_2);

 return VAR_4;
}
