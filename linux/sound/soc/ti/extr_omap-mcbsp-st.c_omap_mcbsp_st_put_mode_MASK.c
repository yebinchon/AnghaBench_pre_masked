
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct omap_mcbsp {int dummy; } ;


 int FUNC_0 (struct omap_mcbsp*) ;
 int FUNC_1 (struct omap_mcbsp*) ;
 scalar_t__ FUNC_2 (struct omap_mcbsp*) ;
 struct snd_soc_dai* FUNC_3 (struct snd_kcontrol*) ;
 struct omap_mcbsp* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dai *VAR_2 = FUNC_3(VAR_0);
 struct omap_mcbsp *VAR_3 = FUNC_4(VAR_2);
 u8 VAR_4 = VAR_1->value.integer.value[0];

 if (VAR_4 == FUNC_2(VAR_3))
  return 0;

 if (VAR_4)
  FUNC_1(VAR_3);
 else
  FUNC_0(VAR_3);

 return 1;
}
