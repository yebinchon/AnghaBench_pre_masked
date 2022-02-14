
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int BytesPerSector; int SectorsPerCluster; int ClusterCount; } ;
struct TYPE_15__ {TYPE_3__ NtfsInfo; } ;
struct TYPE_14__ {TYPE_6__* DeviceExtension; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_10__ {int QuadPart; } ;
struct TYPE_13__ {int BytesPerSector; int SectorsPerAllocationUnit; TYPE_2__ TotalAllocationUnits; TYPE_1__ AvailableAllocationUnits; } ;
typedef int* PULONG ;
typedef TYPE_4__* PFILE_FS_SIZE_INFORMATION ;
typedef TYPE_5__* PDEVICE_OBJECT ;
typedef TYPE_6__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_FS_SIZE_INFORMATION ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_3(PDEVICE_OBJECT VAR_2,
                         PFILE_FS_SIZE_INFORMATION VAR_3,
                         PULONG VAR_4)
{
    PDEVICE_EXTENSION VAR_5;
    NTSTATUS VAR_6 = VAR_1;

    FUNC_0("NtfsGetFsSizeInformation()\n");
    FUNC_0("FsSizeInfo = %p\n", VAR_3);

    if (*VAR_4 < sizeof(FILE_FS_SIZE_INFORMATION))
        return VAR_0;

    VAR_5 = VAR_2->DeviceExtension;

    VAR_3->AvailableAllocationUnits.QuadPart = FUNC_2(VAR_5);
    VAR_3->TotalAllocationUnits.QuadPart = VAR_5->NtfsInfo.ClusterCount;
    VAR_3->SectorsPerAllocationUnit = VAR_5->NtfsInfo.SectorsPerCluster;
    VAR_3->BytesPerSector = VAR_5->NtfsInfo.BytesPerSector;

    FUNC_0("Finished NtfsGetFsSizeInformation()\n");
    if (FUNC_1(VAR_6))
        *VAR_4 -= sizeof(FILE_FS_SIZE_INFORMATION);

    return VAR_6;
}
