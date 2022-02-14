
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_maya44 {int ice; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_kcontrol*,int *) ;
 int FUNC_2 (int ,int ) ;
 struct snd_maya44* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_maya44 *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = FUNC_1(VAR_0, &VAR_1->id);
 VAR_1->value.enumerated.item[0] =
  FUNC_2(VAR_2->ice, FUNC_0(VAR_3));
 return 0;
}
