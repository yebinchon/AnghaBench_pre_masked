
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct da7218_priv {int stbiq_3stage_coeff; int biq_5stage_coeff; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct da7218_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_1);
 struct da7218_priv *VAR_4 = FUNC_1(VAR_3);
 struct soc_bytes_ext *VAR_5 =
  (struct soc_bytes_ext *) VAR_1->private_value;


 switch (VAR_5->max) {
 case 129:
  FUNC_0(VAR_2->value.bytes.data, VAR_4->biq_5stage_coeff,
         VAR_5->max);
  break;
 case 128:
  FUNC_0(VAR_2->value.bytes.data, VAR_4->stbiq_3stage_coeff,
         VAR_5->max);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
