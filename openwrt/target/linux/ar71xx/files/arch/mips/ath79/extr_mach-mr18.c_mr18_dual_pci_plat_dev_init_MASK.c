
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * platform_data; } ;
struct pci_dev {TYPE_2__ dev; TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_2)
{




 switch (VAR_2->bus->number) {
 case 0:
  VAR_2->dev.platform_data = &VAR_0;
  break;
 case 1:
  VAR_2->dev.platform_data = &VAR_1;
  break;
 }

 return 0;
}
