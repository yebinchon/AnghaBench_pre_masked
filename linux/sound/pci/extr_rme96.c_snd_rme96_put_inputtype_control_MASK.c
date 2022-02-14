
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct rme96 {int rev; int lock; TYPE_3__* pci; } ;
struct TYPE_6__ {int device; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 struct rme96* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct rme96*) ;
 int FUNC_3 (struct rme96*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct rme96 *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;
 int VAR_6, VAR_7 = 3;

 switch (VAR_4->pci->device) {
 case 131:
 case 130:
  VAR_7 = 3;
  break;
 case 128:
  VAR_7 = 4;
  break;
 case 129:
  if (VAR_4->rev > 4) {
   VAR_7 = 4;
  } else {
   VAR_7 = 5;
  }
  break;
 default:
  FUNC_0();
  break;
 }
 VAR_5 = VAR_3->value.enumerated.item[0] % VAR_7;


 if (VAR_4->pci->device == 129 && VAR_4->rev > 4) {
  if (VAR_5 == VAR_1) {
   VAR_5 = VAR_0;
  }
 }

 FUNC_4(&VAR_4->lock);
 VAR_6 = (int)VAR_5 != FUNC_2(VAR_4);
 FUNC_3(VAR_4, VAR_5);
 FUNC_5(&VAR_4->lock);
 return VAR_6;
}
