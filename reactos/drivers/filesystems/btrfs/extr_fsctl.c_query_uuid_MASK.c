
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uuid; } ;
struct TYPE_5__ {TYPE_1__ superblock; } ;
typedef TYPE_2__ device_extension ;
typedef int ULONG ;
typedef int NTSTATUS ;
typedef int BTRFS_UUID ;


 int FUNC_0 (void*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS FUNC_1(device_extension* VAR_2, void* VAR_3, ULONG VAR_4) {
    if (VAR_4 < sizeof(BTRFS_UUID))
        return VAR_0;

    FUNC_0(VAR_3, &VAR_2->superblock.uuid, sizeof(BTRFS_UUID));

    return VAR_1;
}
