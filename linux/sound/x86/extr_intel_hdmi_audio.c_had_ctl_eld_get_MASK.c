
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_intelhad {int mutex; int eld; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_intelhad* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_intelhad *VAR_3 = FUNC_3(VAR_1);

 FUNC_1(&VAR_3->mutex);
 FUNC_0(VAR_2->value.bytes.data, VAR_3->eld,
        VAR_0);
 FUNC_2(&VAR_3->mutex);
 return 0;
}
