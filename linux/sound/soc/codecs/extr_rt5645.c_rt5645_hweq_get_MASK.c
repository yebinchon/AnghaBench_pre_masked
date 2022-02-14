
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct rt5645_priv {TYPE_1__* eq_param; } ;
struct rt5645_eq_param_s_be16 {void* val; void* reg; } ;
struct TYPE_4__ {int val; int reg; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 struct rt5645_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 struct rt5645_priv *VAR_4 = FUNC_2(VAR_3);
 struct rt5645_eq_param_s_be16 *VAR_5 =
  (struct rt5645_eq_param_s_be16 *)VAR_2->value.bytes.data;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5[VAR_6].reg = FUNC_0(VAR_4->eq_param[VAR_6].reg);
  VAR_5[VAR_6].val = FUNC_0(VAR_4->eq_param[VAR_6].val);
 }

 return 0;
}
