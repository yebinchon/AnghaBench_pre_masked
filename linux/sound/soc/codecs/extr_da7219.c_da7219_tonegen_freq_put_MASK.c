
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
struct soc_mixer_control {unsigned int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct da7219_priv {int ctrl_lock; int regmap; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int,int *,int) ;
 struct da7219_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_5(VAR_0);
 struct da7219_priv *VAR_3 = FUNC_4(VAR_2);
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *) VAR_0->private_value;
 unsigned int VAR_5 = VAR_4->reg;
 __le16 VAR_6;
 int VAR_7;






 VAR_6 = FUNC_0(VAR_1->value.integer.value[0]);

 FUNC_1(&VAR_3->ctrl_lock);
 VAR_7 = FUNC_3(VAR_3->regmap, VAR_5, &VAR_6, sizeof(VAR_6));
 FUNC_2(&VAR_3->ctrl_lock);

 return VAR_7;
}
