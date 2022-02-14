
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_18__ {int Heads; int Sectors; int Cylinders; int BytesPerSector; } ;
struct TYPE_17__ {int Version; int Revision; int Count; TYPE_3__* PartialDescriptors; } ;
struct TYPE_16__ {int BytesPerSector; int SectorsPerTrack; int NumberOfHeads; int NumberOfCylinders; } ;
struct TYPE_13__ {int DataSize; } ;
struct TYPE_14__ {TYPE_1__ DeviceSpecificData; } ;
struct TYPE_15__ {TYPE_2__ u; int Type; } ;
typedef TYPE_4__* PVOID ;
typedef TYPE_5__* PCM_PARTIAL_RESOURCE_LIST ;
typedef TYPE_4__* PCM_DISK_GEOMETRY_DEVICE_DATA ;
typedef TYPE_7__ GEOMETRY ;
typedef int CM_PARTIAL_RESOURCE_LIST ;
typedef int CM_DISK_GEOMETRY_DEVICE_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static
PCM_PARTIAL_RESOURCE_LIST
FUNC_6(UCHAR VAR_2, ULONG* VAR_3)
{
    PCM_PARTIAL_RESOURCE_LIST VAR_4;
    PCM_DISK_GEOMETRY_DEVICE_DATA VAR_5;

    GEOMETRY VAR_6;
    ULONG VAR_7;




    *VAR_3 = 0;


    VAR_7 = sizeof(CM_PARTIAL_RESOURCE_LIST) +
           sizeof(CM_DISK_GEOMETRY_DEVICE_DATA);
    VAR_4 = FUNC_1(VAR_7, VAR_1);
    if (VAR_4 == ((void*)0))
    {
        FUNC_0("Failed to allocate a full resource descriptor\n");
        return ((void*)0);
    }

    FUNC_5(VAR_4, 0, VAR_7);
    VAR_4->Version = 1;
    VAR_4->Revision = 1;
    VAR_4->Count = 1;
    VAR_4->PartialDescriptors[0].Type =
        VAR_0;


    VAR_4->PartialDescriptors[0].u.DeviceSpecificData.DataSize =
        sizeof(CM_DISK_GEOMETRY_DEVICE_DATA);


    VAR_5 = (PVOID)(((ULONG_PTR)VAR_4) + sizeof(CM_PARTIAL_RESOURCE_LIST));




    if (FUNC_4(VAR_2, &VAR_6))
    {
        VAR_5->BytesPerSector = VAR_6.BytesPerSector;
        VAR_5->NumberOfCylinders = VAR_6.Cylinders;
        VAR_5->SectorsPerTrack = VAR_6.Sectors;
        VAR_5->NumberOfHeads = VAR_6.Heads;
    }
    else
    {
        FUNC_0("Reading disk geometry failed\n");
        FUNC_2(VAR_4, VAR_1);
        return ((void*)0);
    }
    FUNC_3("Disk %x: %u Cylinders  %u Heads  %u Sectors  %u Bytes\n",
          VAR_2,
          VAR_5->NumberOfCylinders,
          VAR_5->NumberOfHeads,
          VAR_5->SectorsPerTrack,
          VAR_5->BytesPerSector);




    *VAR_3 = VAR_7;
    return VAR_4;
}
