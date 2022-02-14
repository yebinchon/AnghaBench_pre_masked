
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int dev; } ;
typedef int s16 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct madera_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

int FUNC_6(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 =
  FUNC_5(VAR_1);
 struct madera_priv *VAR_4 = FUNC_4(VAR_3);
 struct madera *VAR_5 = VAR_4->madera;
 __be16 *VAR_6 = (__be16 *)VAR_2->value.bytes.data;
 s16 VAR_7 = FUNC_1(*VAR_6);

 if (FUNC_0(VAR_7) >= 4096) {
  FUNC_2(VAR_5->dev, "Rejecting unstable LHPF coefficients\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_1, VAR_2);
}
