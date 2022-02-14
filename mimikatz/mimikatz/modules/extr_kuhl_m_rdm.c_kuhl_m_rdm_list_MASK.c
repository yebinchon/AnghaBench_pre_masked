
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ULONG ;
struct TYPE_5__ {int VersionNumber; int ProductID; int VendorID; } ;
struct TYPE_6__ {TYPE_1__ hidAttributes; int DevicePath; int id; struct TYPE_6__* next; } ;
typedef TYPE_2__* PRDM_DEVICE ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__**,int *) ;

NTSTATUS FUNC_4(int VAR_1, wchar_t * VAR_2[])
{
 PRDM_DEVICE VAR_3, VAR_4;
 ULONG VAR_5;
 if(FUNC_3(&VAR_3, &VAR_5))
 {
  for(VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
   FUNC_1(L"\n[%3u] %s\n  Vendor: 0x%04x, Product: 0x%04x, Version: 0x%04x\n", VAR_4->id, VAR_4->DevicePath, VAR_4->hidAttributes.VendorID, VAR_4->hidAttributes.ProductID, VAR_4->hidAttributes.VersionNumber);
  FUNC_2(VAR_3);
 }
 else FUNC_0(L"No device found\n");
 return VAR_0;
}
