
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int cs8427; TYPE_3__* card; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int dev; } ;


 char VAR_0 ;
 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 char VAR_3 = 0x10;
 struct snd_ice1712 *VAR_4 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_4->cs8427, &VAR_3, 1) != 1)
  FUNC_0(VAR_4->card->dev,
   "unable to send register 0x%x byte to CS8427\n", VAR_3);
 FUNC_1(VAR_4->cs8427, &VAR_3, 1);
 VAR_2->value.integer.value[0] = (VAR_3 & VAR_0) ? 1 : 0;
 return 0;
}
