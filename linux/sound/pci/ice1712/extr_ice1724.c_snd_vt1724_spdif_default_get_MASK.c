
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_2__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4;
 VAR_4 = FUNC_2(FUNC_0(VAR_3, VAR_0));
 FUNC_1(&VAR_2->value.iec958, VAR_4);
 return 0;
}
