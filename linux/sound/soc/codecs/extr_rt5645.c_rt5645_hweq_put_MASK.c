
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct rt5645_priv {TYPE_3__* eq_param; } ;
struct rt5645_eq_param_s_be16 {int val; int reg; } ;
struct TYPE_6__ {scalar_t__ reg; void* val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 struct rt5645_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_2);
 struct rt5645_priv *VAR_5 = FUNC_3(VAR_4);
 struct rt5645_eq_param_s_be16 *VAR_6 =
  (struct rt5645_eq_param_s_be16 *)VAR_3->value.bytes.data;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5->eq_param[VAR_7].reg = FUNC_0(VAR_6[VAR_7].reg);
  VAR_5->eq_param[VAR_7].val = FUNC_0(VAR_6[VAR_7].val);
 }


 for (VAR_7 = VAR_1 - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_5->eq_param[VAR_7].reg == 0)
   continue;
  else if (VAR_5->eq_param[VAR_7].reg != VAR_0)
   return 0;
  else
   break;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!FUNC_1(VAR_5->eq_param[VAR_7].reg) &&
      VAR_5->eq_param[VAR_7].reg != 0)
   return 0;
  else if (VAR_5->eq_param[VAR_7].reg == 0)
   break;
 }

 return 0;
}
