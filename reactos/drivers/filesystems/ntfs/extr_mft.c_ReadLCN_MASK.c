
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_6__ {int LowPart; } ;
struct TYPE_9__ {TYPE_1__ u; int QuadPart; } ;
struct TYPE_7__ {int SectorsPerCluster; int BytesPerSector; } ;
struct TYPE_8__ {TYPE_2__ NtfsInfo; int StorageDevice; } ;
typedef int PVOID ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef TYPE_4__ LARGE_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ,int ,int ) ;

NTSTATUS
FUNC_1(PDEVICE_EXTENSION VAR_1,
        ULONGLONG VAR_2,
        ULONG VAR_3,
        PVOID VAR_4)
{
    LARGE_INTEGER VAR_5;

    VAR_5.QuadPart = VAR_2;

    return FUNC_0(VAR_1->StorageDevice,
                           VAR_5.u.LowPart * VAR_1->NtfsInfo.SectorsPerCluster,
                           VAR_3 * VAR_1->NtfsInfo.SectorsPerCluster,
                           VAR_1->NtfsInfo.BytesPerSector,
                           VAR_4,
                           VAR_0);
}
