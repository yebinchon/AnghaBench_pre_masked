
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aw2 {int saa7146; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct aw2* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
           struct snd_ctl_elem_value
           *VAR_3)
{
 struct aw2 *VAR_4 = FUNC_1(VAR_2);
 if (FUNC_0(&VAR_4->saa7146))
  VAR_3->value.enumerated.item[0] = VAR_1;
 else
  VAR_3->value.enumerated.item[0] = VAR_0;
 return 0;
}
