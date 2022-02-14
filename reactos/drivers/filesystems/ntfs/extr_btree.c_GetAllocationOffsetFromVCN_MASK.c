
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_4__ {int BytesPerCluster; int BytesPerSector; } ;
struct TYPE_5__ {TYPE_1__ NtfsInfo; } ;
typedef TYPE_2__* PDEVICE_EXTENSION ;



ULONGLONG
FUNC_0(PDEVICE_EXTENSION VAR_0,
                           ULONG VAR_1,
                           ULONGLONG VAR_2)
{
    if (VAR_1 < VAR_0->NtfsInfo.BytesPerCluster)
        return VAR_2 * VAR_0->NtfsInfo.BytesPerSector;

    return VAR_2 * VAR_0->NtfsInfo.BytesPerCluster;
}
