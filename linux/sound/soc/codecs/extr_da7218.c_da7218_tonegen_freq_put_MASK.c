
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct soc_mixer_control {unsigned int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct da7218_priv {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int *,int) ;
 struct da7218_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_3(VAR_0);
 struct da7218_priv *VAR_3 = FUNC_2(VAR_2);
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *) VAR_0->private_value;
 unsigned int VAR_5 = VAR_4->reg;
 u16 VAR_6;






 VAR_6 = FUNC_0(VAR_1->value.integer.value[0]);

 return FUNC_1(VAR_3->regmap, VAR_5, &VAR_6, 2);
}
