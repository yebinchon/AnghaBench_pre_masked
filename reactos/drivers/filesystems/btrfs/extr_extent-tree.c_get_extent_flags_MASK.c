
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {TYPE_3__* item; } ;
typedef TYPE_4__ traverse_ptr ;
struct TYPE_12__ {int incompat_flags; } ;
struct TYPE_16__ {TYPE_1__ superblock; int extent_root; } ;
typedef TYPE_5__ device_extension ;
struct TYPE_18__ {scalar_t__ flags; } ;
struct TYPE_17__ {int offset; scalar_t__ obj_type; scalar_t__ obj_id; } ;
struct TYPE_13__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_14__ {int size; scalar_t__ data; TYPE_2__ key; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_6__ KEY ;
typedef int EXTENT_ITEM_V0 ;
typedef TYPE_7__ EXTENT_ITEM ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_4__*,TYPE_6__*,int,int ) ;

uint64_t FUNC_3(device_extension* VAR_3, uint64_t VAR_4, PIRP VAR_5) {
    KEY VAR_6;
    traverse_ptr VAR_7;
    NTSTATUS VAR_8;
    EXTENT_ITEM* VAR_9;

    VAR_6.obj_id = VAR_4;
    VAR_6.obj_type = VAR_3->superblock.incompat_flags & VAR_0 ? VAR_2 : VAR_1;
    VAR_6.offset = 0xffffffffffffffff;

    VAR_8 = FUNC_2(VAR_3, VAR_3->extent_root, &VAR_7, &VAR_6, 0, VAR_5);
    if (!FUNC_1(VAR_8)) {
        FUNC_0("error - find_item returned %08x\n", VAR_8);
        return 0;
    }

    if (VAR_3->superblock.incompat_flags & VAR_0 && VAR_7.item->key.obj_id == VAR_4 &&
        VAR_7.item->key.obj_type == VAR_2 && VAR_7.item->size >= sizeof(EXTENT_ITEM)) {
        VAR_9 = (EXTENT_ITEM*)VAR_7.item->data;

        return VAR_9->flags;
    }

    if (VAR_7.item->key.obj_id != VAR_4 || VAR_7.item->key.obj_type != VAR_1) {
        FUNC_0("couldn't find %I64x in extent tree\n", VAR_4);
        return 0;
    }

    if (VAR_7.item->size == sizeof(EXTENT_ITEM_V0))
        return 0;
    else if (VAR_7.item->size < sizeof(EXTENT_ITEM)) {
        FUNC_0("(%I64x,%x,%I64x) was %x bytes, expected at least %x\n", VAR_7.item->key.obj_id, VAR_7.item->key.obj_type,
                                                                   VAR_7.item->key.offset, VAR_7.item->size, sizeof(EXTENT_ITEM));
        return 0;
    }

    VAR_9 = (EXTENT_ITEM*)VAR_7.item->data;

    return VAR_9->flags;
}
