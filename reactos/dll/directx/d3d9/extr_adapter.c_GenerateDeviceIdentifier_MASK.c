
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HighPart; int LowPart; } ;
struct TYPE_5__ {TYPE_1__ DriverVersion; int Revision; int SubSysId; int DeviceId; int VendorId; int DeviceIdentifier; } ;
typedef int DWORD ;
typedef TYPE_2__ D3DADAPTER_IDENTIFIER9 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(D3DADAPTER_IDENTIFIER9* VAR_1)
{
    DWORD* VAR_2 = (DWORD*)&VAR_1->DeviceIdentifier;

    VAR_1->DeviceIdentifier = VAR_0;

    VAR_2[0] ^= VAR_1->VendorId;
    VAR_2[1] ^= VAR_1->DeviceId;
    VAR_2[2] ^= VAR_1->SubSysId;
    VAR_2[3] ^= VAR_1->Revision;
    VAR_2[2] ^= VAR_1->DriverVersion.LowPart;
    VAR_2[3] ^= VAR_1->DriverVersion.HighPart;
}
