
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct arizona {int dev; } ;
typedef int s16 ;
typedef int __be16 ;
struct TYPE_4__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct arizona* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

int FUNC_6(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_1);
 struct arizona *VAR_4 = FUNC_3(VAR_3->dev->parent);
 __be16 *VAR_5 = (__be16 *)VAR_2->value.bytes.data;
 s16 VAR_6 = FUNC_1(*VAR_5);

 if (FUNC_0(VAR_6) >= 4096) {
  FUNC_2(VAR_4->dev, "Rejecting unstable LHPF coefficients\n");
  return -VAR_0;
 }

 return FUNC_4(VAR_1, VAR_2);
}
