
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct da7219_priv {int ctrl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct da7219_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_3(VAR_0);
 struct da7219_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_3->ctrl_lock);
 VAR_4 = FUNC_4(VAR_0, VAR_1);
 FUNC_1(&VAR_3->ctrl_lock);

 return VAR_4;
}
