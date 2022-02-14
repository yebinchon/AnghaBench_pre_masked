
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
struct rme96 {int rev; int lock; TYPE_1__* pci; } ;
struct TYPE_4__ {int device; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 struct rme96* FUNC_1 (struct snd_kcontrol*) ;
 unsigned int FUNC_2 (struct rme96*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct rme96 *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = 3;

 FUNC_3(&VAR_4->lock);
 VAR_3->value.enumerated.item[0] = FUNC_2(VAR_4);

 switch (VAR_4->pci->device) {
 case 131:
 case 130:
  VAR_5 = 3;
  break;
 case 128:
  VAR_5 = 4;
  break;
 case 129:
  if (VAR_4->rev > 4) {

   if (VAR_3->value.enumerated.item[0] == VAR_0) {
    VAR_3->value.enumerated.item[0] = VAR_1;
   }
   VAR_5 = 4;
  } else {
   VAR_5 = 5;
  }
  break;
 default:
  FUNC_0();
  break;
 }
 if (VAR_3->value.enumerated.item[0] >= VAR_5) {
  VAR_3->value.enumerated.item[0] = VAR_5 - 1;
 }

 FUNC_4(&VAR_4->lock);
 return 0;
}
