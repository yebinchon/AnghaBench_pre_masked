
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


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(
    PDEVICE_OBJECT VAR_2,
    PFILE_FS_DEVICE_INFORMATION VAR_3,
    PULONG VAR_4)
{
    FUNC_1("FsdGetFsDeviceInformation()\n");
    FUNC_1("FsDeviceInfo = %p\n", VAR_3);
    FUNC_1("BufferLength %lu\n", *VAR_4);
    FUNC_1("Required length %lu\n", sizeof(FILE_FS_DEVICE_INFORMATION));

    FUNC_0(*VAR_4 >= sizeof(FILE_FS_DEVICE_INFORMATION));

    VAR_3->DeviceType = VAR_0;
    VAR_3->Characteristics = VAR_2->Characteristics;

    FUNC_1("FsdGetFsDeviceInformation() finished.\n");

    *VAR_4 -= sizeof(FILE_FS_DEVICE_INFORMATION);
    FUNC_1("BufferLength %lu\n", *VAR_4);

    return VAR_1;
}
