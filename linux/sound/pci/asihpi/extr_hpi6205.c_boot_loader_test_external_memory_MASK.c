
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct hpi_adapter_obj {TYPE_2__ pci; } ;
struct TYPE_3__ {int subsystem_device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hpi_adapter_obj*,int,int,int) ;

__attribute__((used)) static u16 FUNC_1(struct hpi_adapter_obj *VAR_1,
 int VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 if (VAR_2 == 0) {

  if (VAR_1->pci.pci_dev->subsystem_device == 0x5000) {

   VAR_3 = 0x00400000;
   VAR_4 = 0x200000;

  } else
   return 0;
 } else if (VAR_2 == 1) {

  VAR_3 = 0x80000000;
  VAR_4 = 0x200000;

 }

 if (FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_4))
  return VAR_0;
 return 0;
}
