
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct rme32 {int lock; TYPE_1__* pci; } ;
struct TYPE_4__ {int device; } ;





 int FUNC_0 () ;
 struct rme32* FUNC_1 (struct snd_kcontrol*) ;
 unsigned int FUNC_2 (struct rme32*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct rme32 *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = 3;

 FUNC_3(&VAR_2->lock);
 VAR_1->value.enumerated.item[0] = FUNC_2(VAR_2);

 switch (VAR_2->pci->device) {
 case 130:
 case 129:
  VAR_3 = 3;
  break;
 case 128:
  VAR_3 = 4;
  break;
 default:
  FUNC_0();
  break;
 }
 if (VAR_1->value.enumerated.item[0] >= VAR_3) {
  VAR_1->value.enumerated.item[0] = VAR_3 - 1;
 }

 FUNC_4(&VAR_2->lock);
 return 0;
}
