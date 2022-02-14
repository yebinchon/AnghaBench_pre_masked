
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ address; } ;
struct TYPE_20__ {TYPE_2__ header; scalar_t__ has_address; int updated_extents; } ;
typedef TYPE_5__ tree ;
struct TYPE_21__ {TYPE_4__* item; } ;
typedef TYPE_6__ traverse_ptr ;
struct TYPE_16__ {int incompat_flags; } ;
struct TYPE_22__ {int extent_root; TYPE_1__ superblock; } ;
typedef TYPE_7__ device_extension ;
struct TYPE_23__ {scalar_t__ obj_id; int offset; scalar_t__ obj_type; } ;
struct TYPE_18__ {scalar_t__ obj_id; scalar_t__ obj_type; } ;
struct TYPE_19__ {TYPE_3__ key; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_8__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_7__*,int ,TYPE_6__*,TYPE_8__*,int,int ) ;
 int FUNC_3 (TYPE_7__*,TYPE_5__*,int ,int *) ;

__attribute__((used)) static bool FUNC_4(device_extension* VAR_3, tree* VAR_4, PIRP VAR_5, LIST_ENTRY* VAR_6) {
    KEY VAR_7;
    traverse_ptr VAR_8;
    NTSTATUS VAR_9;

    if (!VAR_4->updated_extents && VAR_4->has_address) {
        VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
        if (!FUNC_1(VAR_9)) {
            FUNC_0("update_tree_extents returned %08x\n", VAR_9);
            return 0;
        }
    }

    VAR_7.obj_id = VAR_4->header.address;
    VAR_7.obj_type = VAR_3->superblock.incompat_flags & VAR_0 ? VAR_2 : VAR_1;
    VAR_7.offset = 0xffffffffffffffff;

    VAR_9 = FUNC_2(VAR_3, VAR_3->extent_root, &VAR_8, &VAR_7, 0, VAR_5);
    if (!FUNC_1(VAR_9)) {
        FUNC_0("error - find_item returned %08x\n", VAR_9);
        return 0;
    }

    if (VAR_8.item->key.obj_id == VAR_4->header.address && (VAR_8.item->key.obj_type == VAR_2 || VAR_8.item->key.obj_type == VAR_1))
        return 0;
    else
        return 1;
}
