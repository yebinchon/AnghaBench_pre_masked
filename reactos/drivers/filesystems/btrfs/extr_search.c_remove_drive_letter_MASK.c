
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_12__ {int DeviceNameOffset; int Size; int DeviceNameLength; } ;
struct TYPE_11__ {int Length; int Buffer; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__ MOUNTMGR_MOUNT_POINTS ;
typedef TYPE_2__ MOUNTMGR_MOUNT_POINT ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_2__*,int,TYPE_2__*,int,int,int *) ;

NTSTATUS FUNC_8(PDEVICE_OBJECT VAR_6, PUNICODE_STRING VAR_7) {
    NTSTATUS VAR_8;
    MOUNTMGR_MOUNT_POINT* VAR_9;
    ULONG VAR_10;
    MOUNTMGR_MOUNT_POINTS VAR_11, *VAR_12;

    FUNC_6("removing drive letter\n");

    VAR_10 = sizeof(MOUNTMGR_MOUNT_POINT) + VAR_7->Length;

    VAR_9 = FUNC_1(VAR_2, VAR_10, VAR_0);
    if (!VAR_9) {
        FUNC_0("out of memory\n");
        return VAR_4;
    }

    FUNC_5(VAR_9, VAR_10);

    VAR_9->DeviceNameOffset = sizeof(MOUNTMGR_MOUNT_POINT);
    VAR_9->DeviceNameLength = VAR_7->Length;
    FUNC_4(&VAR_9[1], VAR_7->Buffer, VAR_7->Length);

    VAR_8 = FUNC_7(VAR_6, VAR_1, VAR_9, VAR_10, &VAR_11, sizeof(MOUNTMGR_MOUNT_POINTS), 0, ((void*)0));

    if (!FUNC_3(VAR_8) && VAR_8 != VAR_3) {
        FUNC_0("IOCTL_MOUNTMGR_DELETE_POINTS 1 returned %08x\n", VAR_8);
        FUNC_2(VAR_9);
        return VAR_8;
    }

    if (VAR_8 != VAR_3 || VAR_11 == 0) {
        FUNC_2(VAR_9);
        return VAR_5;
    }

    VAR_12 = FUNC_1(VAR_2, VAR_11, VAR_0);
    if (!VAR_12) {
        FUNC_0("out of memory\n");
        FUNC_2(VAR_9);
        return VAR_4;
    }

    VAR_8 = FUNC_7(VAR_6, VAR_1, VAR_9, VAR_10, VAR_12, VAR_11, 0, ((void*)0));

    if (!FUNC_3(VAR_8))
        FUNC_0("IOCTL_MOUNTMGR_DELETE_POINTS 2 returned %08x\n", VAR_8);

    FUNC_2(VAR_12);
    FUNC_2(VAR_9);

    return VAR_8;
}
