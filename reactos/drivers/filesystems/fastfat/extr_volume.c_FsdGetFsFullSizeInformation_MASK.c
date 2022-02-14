
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int BytesPerSector; int SectorsPerCluster; int NumberOfClusters; } ;
struct TYPE_17__ {TYPE_3__ FatInfo; } ;
struct TYPE_16__ {TYPE_6__* DeviceExtension; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_13__ {int QuadPart; } ;
struct TYPE_12__ {int QuadPart; } ;
struct TYPE_15__ {int BytesPerSector; int SectorsPerAllocationUnit; TYPE_10__ CallerAvailableAllocationUnits; TYPE_2__ ActualAvailableAllocationUnits; TYPE_1__ TotalAllocationUnits; } ;
typedef int* PULONG ;
typedef TYPE_4__* PFILE_FS_FULL_SIZE_INFORMATION ;
typedef TYPE_5__* PDEVICE_OBJECT ;
typedef TYPE_6__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_FS_FULL_SIZE_INFORMATION ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_10__*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_4(
    PDEVICE_OBJECT VAR_0,
    PFILE_FS_FULL_SIZE_INFORMATION VAR_1,
    PULONG VAR_2)
{
    PDEVICE_EXTENSION VAR_3;
    NTSTATUS VAR_4;

    FUNC_2("FsdGetFsFullSizeInformation()\n");
    FUNC_2("FsSizeInfo = %p\n", VAR_1);

    FUNC_0(*VAR_2 >= sizeof(FILE_FS_FULL_SIZE_INFORMATION));

    VAR_3 = VAR_0->DeviceExtension;
    VAR_4 = FUNC_1(VAR_3, &VAR_1->CallerAvailableAllocationUnits);

    VAR_1->TotalAllocationUnits.QuadPart = VAR_3->FatInfo.NumberOfClusters;
    VAR_1->ActualAvailableAllocationUnits.QuadPart = VAR_1->CallerAvailableAllocationUnits.QuadPart;
    VAR_1->SectorsPerAllocationUnit = VAR_3->FatInfo.SectorsPerCluster;
    VAR_1->BytesPerSector = VAR_3->FatInfo.BytesPerSector;

    FUNC_2("Finished FsdGetFsFullSizeInformation()\n");
    if (FUNC_3(VAR_4))
        *VAR_2 -= sizeof(FILE_FS_FULL_SIZE_INFORMATION);

    return VAR_4;
}
