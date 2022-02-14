
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int NumberOfDiskExtents; TYPE_3__* Extents; } ;
typedef TYPE_4__ VOLUME_DISK_EXTENTS ;
struct TYPE_8__ {int QuadPart; } ;
struct TYPE_12__ {int BytesPerSector; TYPE_1__ PartitionLba; int Handle; } ;
struct TYPE_9__ {int QuadPart; } ;
struct TYPE_10__ {TYPE_2__ StartingOffset; } ;
typedef TYPE_5__ S_NTFSSECT_VOLINFO ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int ,TYPE_4__*,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static DWORD FUNC_3(S_NTFSSECT_VOLINFO * VAR_2) {
    BOOL VAR_3;
    VOLUME_DISK_EXTENTS VAR_4;
    DWORD VAR_5, VAR_6;

    VAR_3 = FUNC_0(
        VAR_2->Handle,
        VAR_1,
        ((void*)0),
        0,
        &VAR_4,
        sizeof VAR_4,
        &VAR_5,
        ((void*)0)
      );
    VAR_6 = FUNC_1();
    if (!VAR_3) {
        FUNC_2("Couldn't fetch volume disk extent(s)!");
        goto err_vol_disk_extents;
      }

    if (VAR_4.NumberOfDiskExtents != 1) {
        FUNC_2("Unsupported number of volume disk extents!");
        goto err_num_of_extents;
      }

    VAR_2->PartitionLba.QuadPart = (
        VAR_4.Extents[0].StartingOffset.QuadPart /
        VAR_2->BytesPerSector
      );

    return VAR_0;

    err_num_of_extents:

    err_vol_disk_extents:

    return VAR_6;
  }
