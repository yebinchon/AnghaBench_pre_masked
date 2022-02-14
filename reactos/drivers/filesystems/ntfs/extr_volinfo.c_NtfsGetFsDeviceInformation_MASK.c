
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Characteristics; } ;
struct TYPE_5__ {int Characteristics; int DeviceType; } ;
typedef int* PULONG ;
typedef TYPE_1__* PFILE_FS_DEVICE_INFORMATION ;
typedef TYPE_2__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int FILE_FS_DEVICE_INFORMATION ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
NTSTATUS
FUNC_1(PDEVICE_OBJECT VAR_3,
                           PFILE_FS_DEVICE_INFORMATION VAR_4,
                           PULONG VAR_5)
{
    FUNC_0("NtfsGetFsDeviceInformation()\n");
    FUNC_0("FsDeviceInfo = %p\n", VAR_4);
    FUNC_0("BufferLength %lu\n", *VAR_5);
    FUNC_0("Required length %lu\n", sizeof(FILE_FS_DEVICE_INFORMATION));

    if (*VAR_5 < sizeof(FILE_FS_DEVICE_INFORMATION))
        return VAR_1;

    VAR_4->DeviceType = VAR_0;
    VAR_4->Characteristics = VAR_3->Characteristics;

    FUNC_0("NtfsGetFsDeviceInformation() finished.\n");

    *VAR_5 -= sizeof(FILE_FS_DEVICE_INFORMATION);
    FUNC_0("BufferLength %lu\n", *VAR_5);

    return VAR_2;
}
