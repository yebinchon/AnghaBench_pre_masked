
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Revision; int SubSysId; int DeviceId; int VendorId; } ;
typedef int LPCSTR ;
typedef TYPE_1__ D3DADAPTER_IDENTIFIER9 ;


 int FUNC_0 (int ,int *,char*) ;

__attribute__((used)) static void FUNC_1(LPCSTR VAR_0, D3DADAPTER_IDENTIFIER9* VAR_1)
{
    FUNC_0(VAR_0, &VAR_1->VendorId, "VEN_");
    FUNC_0(VAR_0, &VAR_1->DeviceId, "DEV_");
    FUNC_0(VAR_0, &VAR_1->SubSysId, "SUBSYS_");
    FUNC_0(VAR_0, &VAR_1->Revision, "REV_");
}
