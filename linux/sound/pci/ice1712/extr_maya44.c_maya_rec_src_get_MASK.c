
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_maya44 {int ice; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct snd_maya44* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct snd_maya44 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (FUNC_0(VAR_3->ice) & (1 << VAR_0))
  VAR_4 = 1;
 else
  VAR_4 = 0;
 VAR_2->value.enumerated.item[0] = VAR_4;
 return 0;
}
