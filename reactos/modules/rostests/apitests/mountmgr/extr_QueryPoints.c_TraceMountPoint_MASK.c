
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {int SymbolicLinkNameLength; int DeviceNameLength; int DeviceNameOffset; scalar_t__ SymbolicLinkNameOffset; } ;
typedef int PWSTR ;
typedef scalar_t__ PMOUNTMGR_MOUNT_POINTS ;
typedef TYPE_1__* PMOUNTMGR_MOUNT_POINT ;


 int FUNC_0 (char*,...) ;

VOID
FUNC_1(PMOUNTMGR_MOUNT_POINTS VAR_0,
                PMOUNTMGR_MOUNT_POINT VAR_1)
{
    FUNC_0("MountPoint: %p\n", VAR_1);
    FUNC_0("\tSymbolicOffset: %ld\n", VAR_1->SymbolicLinkNameOffset);
    FUNC_0("\tSymbolicLinkName: %.*S\n", VAR_1->SymbolicLinkNameLength / sizeof(WCHAR), (PWSTR)((ULONG_PTR)VAR_0 + VAR_1->SymbolicLinkNameOffset));
    FUNC_0("\tDeviceOffset: %ld\n", VAR_1->DeviceNameOffset);
    FUNC_0("\tDeviceName: %.*S\n", VAR_1->DeviceNameLength / sizeof(WCHAR), (PWSTR)((ULONG_PTR)VAR_0 + VAR_1->DeviceNameOffset));
}
