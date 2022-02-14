
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* card; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct rt1011_priv {scalar_t__ cali_done; } ;
struct TYPE_4__ {int instantiated; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt1011_priv*,int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_2 (struct snd_soc_component*) ;
 struct rt1011_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
  struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 struct rt1011_priv *VAR_4 = FUNC_3(VAR_3);

 if (!VAR_3->card->instantiated)
  return 0;

 VAR_4->cali_done = 0;
 if (FUNC_2(VAR_3) == VAR_0 &&
  VAR_2->value.integer.value[0])
  FUNC_0(VAR_4, 1);

 return 0;
}
