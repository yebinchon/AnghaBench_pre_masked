
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw*) ;
 int FUNC_1 (struct hw*) ;

int FUNC_2(struct hw *VAR_1)
{
 int VAR_2;

 switch (VAR_1->pci->device) {
 case 0x0005:
  VAR_2 = FUNC_0(VAR_1);
  break;
 case 0x000B:
  VAR_2 = FUNC_1(VAR_1);
  break;
 default:
  VAR_2 = -VAR_0;
  break;
 }

 return VAR_2;
}
