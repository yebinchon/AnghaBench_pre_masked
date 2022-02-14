
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpi_pci {TYPE_1__* pci_dev; } ;
typedef int hpi_handler_func ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; scalar_t__ driver_data; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static hpi_handler_func *FUNC_0(const struct hpi_pci
 *VAR_2)
{

 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].vendor != 0; VAR_3++) {
  if (VAR_1[VAR_3].vendor != VAR_0
   && VAR_1[VAR_3].vendor !=
   VAR_2->pci_dev->vendor)
   continue;
  if (VAR_1[VAR_3].device != VAR_0
   && VAR_1[VAR_3].device !=
   VAR_2->pci_dev->device)
   continue;
  if (VAR_1[VAR_3].subvendor != VAR_0
   && VAR_1[VAR_3].subvendor !=
   VAR_2->pci_dev->subsystem_vendor)
   continue;
  if (VAR_1[VAR_3].subdevice != VAR_0
   && VAR_1[VAR_3].subdevice !=
   VAR_2->pci_dev->subsystem_device)
   continue;



  return (hpi_handler_func *) VAR_1[VAR_3].driver_data;
 }

 return ((void*)0);
}
