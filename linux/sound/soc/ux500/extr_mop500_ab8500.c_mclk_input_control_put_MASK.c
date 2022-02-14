
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct mop500_ab8500_drvdata {unsigned int mclk_sel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_soc_card* FUNC_0 (struct snd_kcontrol*) ;
 struct mop500_ab8500_drvdata* FUNC_1 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_card *VAR_4 = FUNC_0(VAR_2);
 struct mop500_ab8500_drvdata *VAR_5 =
    FUNC_1(VAR_4);
 unsigned int VAR_6 = VAR_3->value.enumerated.item[0];

 if (VAR_6 > (unsigned int)VAR_1)
  return -VAR_0;
 if (VAR_5->mclk_sel == VAR_6)
  return 0;

 VAR_5->mclk_sel = VAR_6;

 return 1;
}
