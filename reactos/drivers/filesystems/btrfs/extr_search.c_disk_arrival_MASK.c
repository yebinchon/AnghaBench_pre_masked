
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int gli ;
typedef int ULONG ;
struct TYPE_8__ {int QuadPart; } ;
struct TYPE_9__ {scalar_t__ PartitionCount; int DeviceNumber; TYPE_1__ Length; scalar_t__ PartitionNumber; int DeviceType; } ;
typedef TYPE_2__ STORAGE_DEVICE_NUMBER ;
typedef int PUNICODE_STRING ;
typedef int PFILE_OBJECT ;
typedef int PDRIVER_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef TYPE_2__ GET_LENGTH_INFORMATION ;
typedef TYPE_2__ DRIVE_LAYOUT_INFORMATION_EX ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*,scalar_t__,...) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int ,int ,int *,int ,TYPE_2__*,int,int,int *) ;
 int FUNC_11 (int ,int ,int ,int,scalar_t__,int ) ;

void FUNC_12(PDRIVER_OBJECT VAR_9, PUNICODE_STRING VAR_10) {
    PFILE_OBJECT VAR_11;
    PDEVICE_OBJECT VAR_12;
    NTSTATUS VAR_13;
    STORAGE_DEVICE_NUMBER VAR_14;
    ULONG VAR_15;
    DRIVE_LAYOUT_INFORMATION_EX* VAR_16 = ((void*)0);
    IO_STATUS_BLOCK VAR_17;
    GET_LENGTH_INFORMATION VAR_18;

    FUNC_9(VAR_9);

    FUNC_1(&VAR_8, VAR_7);

    VAR_13 = FUNC_5(VAR_10, VAR_1, &VAR_11, &VAR_12);
    if (!FUNC_6(VAR_13)) {
        FUNC_4(&VAR_8);
        FUNC_0("IoGetDeviceObjectPointer returned %08x\n", VAR_13);
        return;
    }

    VAR_15 = 0;

    do {
        VAR_15 += 1024;

        if (VAR_16)
            FUNC_3(VAR_16);

        VAR_16 = FUNC_2(VAR_5, VAR_15, VAR_0);
        if (!VAR_16) {
            FUNC_0("out of memory\n");
            goto end;
        }

        VAR_13 = FUNC_10(VAR_12, VAR_2, ((void*)0), 0,
                           VAR_16, VAR_15, 1, &VAR_17);
    } while (VAR_13 == VAR_6);


    if (FUNC_6(VAR_13) && VAR_16->PartitionCount > 0) {
        FUNC_3(VAR_16);
        goto end;
    }

    FUNC_3(VAR_16);

    VAR_13 = FUNC_10(VAR_12, VAR_3, ((void*)0), 0,
                        &VAR_18, sizeof(VAR_18), 1, ((void*)0));

    if (!FUNC_6(VAR_13)) {
        FUNC_0("error reading length information: %08x\n", VAR_13);
        goto end;
    }

    VAR_13 = FUNC_10(VAR_12, VAR_4, ((void*)0), 0,
                       &VAR_14, sizeof(STORAGE_DEVICE_NUMBER), 1, ((void*)0));
    if (!FUNC_6(VAR_13)) {
        FUNC_8("IOCTL_STORAGE_GET_DEVICE_NUMBER returned %08x\n", VAR_13);
        VAR_14.DeviceNumber = 0xffffffff;
        VAR_14.PartitionNumber = 0;
    } else
        FUNC_8("DeviceType = %u, DeviceNumber = %u, PartitionNumber = %u\n", VAR_14.DeviceType, VAR_14.DeviceNumber, VAR_14.PartitionNumber);

    FUNC_11(VAR_12, VAR_11, VAR_10, VAR_14.DeviceNumber, VAR_14.PartitionNumber, VAR_18.Length.QuadPart);

end:
    FUNC_7(VAR_11);

    FUNC_4(&VAR_8);
}
