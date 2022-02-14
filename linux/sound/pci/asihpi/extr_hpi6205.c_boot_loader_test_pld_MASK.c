
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
 int FUNC_0 (struct hpi_adapter_obj*,int,int) ;
 int FUNC_1 (struct hpi_adapter_obj*,int,int,int) ;

__attribute__((used)) static u16 FUNC_2(struct hpi_adapter_obj *VAR_1, int VAR_2)
{
 u32 VAR_3 = 0;
 if (VAR_2 == 0) {

  if (VAR_1->pci.pci_dev->subsystem_device == 0x5000) {

   VAR_3 = FUNC_0(VAR_1, VAR_2,
    0x03000008);
   if ((VAR_3 & 0xF) != 0x5)
    return VAR_0;
   VAR_3 = FUNC_0(VAR_1, VAR_2,
    0x0300000C);
   if ((VAR_3 & 0xF) != 0xA)
    return VAR_0;
  }
 } else if (VAR_2 == 1) {

  if (VAR_1->pci.pci_dev->subsystem_device == 0x8700) {

   VAR_3 = FUNC_0(VAR_1, VAR_2,
    0x90000010);
   if ((VAR_3 & 0xFF) != 0xAA)
    return VAR_0;

   FUNC_1(VAR_1, VAR_2, 0x90000000,
    0x02);
  }
 }
 return 0;
}
