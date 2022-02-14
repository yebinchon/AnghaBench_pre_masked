
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {struct TYPE_6__* id; struct TYPE_6__* label; TYPE_2__* disks; struct TYPE_6__* allocation_system_total_bytes_filename; struct TYPE_6__* allocation_system_bytes_used_filename; struct TYPE_6__* allocation_metadata_total_bytes_filename; struct TYPE_6__* allocation_metadata_bytes_used_filename; struct TYPE_6__* allocation_data_total_bytes_filename; struct TYPE_6__* allocation_data_bytes_used_filename; scalar_t__ st_allocation_system; scalar_t__ st_allocation_metadata; scalar_t__ st_allocation_data; scalar_t__ st_allocation_disks; } ;
typedef TYPE_1__ BTRFS_NODE ;
typedef TYPE_2__ BTRFS_DISK ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(BTRFS_NODE *VAR_0) {


    if(VAR_0->st_allocation_disks)
        FUNC_2(VAR_0->st_allocation_disks);

    if(VAR_0->st_allocation_data)
        FUNC_2(VAR_0->st_allocation_data);

    if(VAR_0->st_allocation_metadata)
        FUNC_2(VAR_0->st_allocation_metadata);

    if(VAR_0->st_allocation_system)
        FUNC_2(VAR_0->st_allocation_system);

    FUNC_1(VAR_0->allocation_data_bytes_used_filename);
    FUNC_1(VAR_0->allocation_data_total_bytes_filename);

    FUNC_1(VAR_0->allocation_metadata_bytes_used_filename);
    FUNC_1(VAR_0->allocation_metadata_total_bytes_filename);

    FUNC_1(VAR_0->allocation_system_bytes_used_filename);
    FUNC_1(VAR_0->allocation_system_total_bytes_filename);

    while(VAR_0->disks) {
        BTRFS_DISK *VAR_1 = VAR_0->disks;
        VAR_0->disks = VAR_0->disks->next;
        FUNC_0(VAR_1);
    }

    FUNC_1(VAR_0->label);
    FUNC_1(VAR_0->id);
    FUNC_1(VAR_0);
}
