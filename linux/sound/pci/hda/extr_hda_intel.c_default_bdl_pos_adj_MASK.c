
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct azx {int driver_type; TYPE_1__* pci; } ;
struct TYPE_2__ {scalar_t__ vendor; int device; } ;




 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct azx *VAR_1)
{

 if (VAR_1->pci->vendor == VAR_0) {
  switch (VAR_1->pci->device) {
  case 0x0f04:
  case 0x2284:
   return 32;
  }
 }

 switch (VAR_1->driver_type) {
 case 129:
 case 128:
  return 1;
 default:
  return 32;
 }
}
