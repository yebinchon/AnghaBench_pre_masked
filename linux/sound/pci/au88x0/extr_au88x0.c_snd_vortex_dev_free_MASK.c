
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pci_dev; int mmio; int irq; } ;
typedef TYPE_1__ vortex_t ;
struct snd_device {TYPE_1__* device_data; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct snd_device *VAR_0)
{
 vortex_t *VAR_1 = VAR_0->device_data;

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_1(VAR_1->mmio);
 FUNC_4(VAR_1->pci_dev);
 FUNC_3(VAR_1->pci_dev);
 FUNC_2(VAR_1);

 return 0;
}
