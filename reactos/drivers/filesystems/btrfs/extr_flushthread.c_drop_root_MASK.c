
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_28__ {TYPE_4__* item; } ;
typedef TYPE_5__ traverse_ptr ;
struct TYPE_25__ {scalar_t__* uuid; } ;
struct TYPE_24__ {scalar_t__* uuid; } ;
struct TYPE_26__ {scalar_t__ rtransid; TYPE_2__ received_uuid; TYPE_1__ uuid; int root_level; } ;
struct TYPE_29__ {scalar_t__ id; TYPE_3__ root_item; int treeholder; } ;
typedef TYPE_6__ root ;
struct TYPE_30__ {scalar_t__ root_root; scalar_t__ uuid_root; } ;
typedef TYPE_7__ device_extension ;
typedef int ULONG ;
struct TYPE_31__ {scalar_t__ obj_id; scalar_t__ obj_type; scalar_t__ offset; } ;
struct TYPE_23__ {scalar_t__ obj_id; scalar_t__ obj_type; int offset; } ;
struct TYPE_27__ {int size; TYPE_11__ key; scalar_t__ data; } ;
typedef int PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_8__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (TYPE_7__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_7__*,scalar_t__,TYPE_5__*,TYPE_8__*,int,int ) ;
 int FUNC_8 (TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_7__*,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__*,int,int *,int ) ;
 int FUNC_10 (TYPE_11__,TYPE_8__) ;
 scalar_t__ FUNC_11 (TYPE_7__*,TYPE_6__*,int *,int ,int *,int ,int *) ;

__attribute__((used)) static NTSTATUS FUNC_12(device_extension* VAR_7, root* VAR_8, PIRP VAR_9, LIST_ENTRY* VAR_10) {
    NTSTATUS VAR_11;
    KEY VAR_12;
    traverse_ptr VAR_13;

    VAR_11 = FUNC_11(VAR_7, VAR_8, &VAR_8->treeholder, VAR_8->root_item.root_level, ((void*)0), VAR_9, VAR_10);
    if (!FUNC_3(VAR_11)) {
        FUNC_0("remove_root_extents returned %08x\n", VAR_11);
        return VAR_11;
    }


    if (VAR_7->uuid_root) {
        FUNC_4(&VAR_12.obj_id, &VAR_8->root_item.uuid.uuid[0], sizeof(uint64_t));
        VAR_12.obj_type = VAR_6;
        FUNC_4(&VAR_12.offset, &VAR_8->root_item.uuid.uuid[sizeof(uint64_t)], sizeof(uint64_t));

        if (VAR_12.obj_id != 0 || VAR_12.offset != 0) {
            VAR_11 = FUNC_7(VAR_7, VAR_7->uuid_root, &VAR_13, &VAR_12, 0, VAR_9);
            if (!FUNC_3(VAR_11)) {
                FUNC_5("find_item returned %08x\n", VAR_11);
            } else {
                if (!FUNC_10(VAR_13.item->key, VAR_12)) {
                    VAR_11 = FUNC_6(VAR_7, &VAR_13);
                    if (!FUNC_3(VAR_11)) {
                        FUNC_0("delete_tree_item returned %08x\n", VAR_11);
                        return VAR_11;
                    }
                } else
                    FUNC_5("could not find (%I64x,%x,%I64x) in uuid tree\n", VAR_12.obj_id, VAR_12.obj_type, VAR_12.offset);
            }
        }

        if (VAR_8->root_item.rtransid > 0) {
            FUNC_4(&VAR_12.obj_id, &VAR_8->root_item.received_uuid.uuid[0], sizeof(uint64_t));
            VAR_12.obj_type = VAR_5;
            FUNC_4(&VAR_12.offset, &VAR_8->root_item.received_uuid.uuid[sizeof(uint64_t)], sizeof(uint64_t));

            VAR_11 = FUNC_7(VAR_7, VAR_7->uuid_root, &VAR_13, &VAR_12, 0, VAR_9);
            if (!FUNC_3(VAR_11))
                FUNC_5("find_item returned %08x\n", VAR_11);
            else {
                if (!FUNC_10(VAR_13.item->key, VAR_12)) {
                    if (VAR_13.item->size == sizeof(uint64_t)) {
                        uint64_t* VAR_14 = (uint64_t*)VAR_13.item->data;

                        if (*VAR_14 == VAR_8->id) {
                            VAR_11 = FUNC_6(VAR_7, &VAR_13);
                            if (!FUNC_3(VAR_11)) {
                                FUNC_0("delete_tree_item returned %08x\n", VAR_11);
                                return VAR_11;
                            }
                        }
                    } else if (VAR_13.item->size > sizeof(uint64_t)) {
                        ULONG VAR_15;
                        uint64_t* VAR_16 = (uint64_t*)VAR_13.item->data;

                        for (VAR_15 = 0; VAR_15 < VAR_13.item->size / sizeof(uint64_t); VAR_15++) {
                            if (VAR_16[VAR_15] == VAR_8->id) {
                                uint64_t* VAR_17;

                                VAR_17 = FUNC_1(VAR_1, VAR_13.item->size - sizeof(uint64_t), VAR_0);
                                if (!VAR_17) {
                                    FUNC_0("out of memory\n");
                                    return VAR_2;
                                }

                                if (VAR_15 > 0)
                                    FUNC_4(VAR_17, VAR_16, sizeof(uint64_t) * VAR_15);

                                if ((VAR_15 + 1) * sizeof(uint64_t) < VAR_13.item->size)
                                    FUNC_4(&VAR_17[VAR_15], &VAR_16[VAR_15 + 1], VAR_13.item->size - ((VAR_15 + 1) * sizeof(uint64_t)));

                                VAR_11 = FUNC_6(VAR_7, &VAR_13);
                                if (!FUNC_3(VAR_11)) {
                                    FUNC_0("delete_tree_item returned %08x\n", VAR_11);
                                    FUNC_2(VAR_17);
                                    return VAR_11;
                                }

                                VAR_11 = FUNC_9(VAR_7, VAR_7->uuid_root, VAR_13.item->key.obj_id, VAR_13.item->key.obj_type, VAR_13.item->key.offset,
                                                          VAR_17, VAR_13.item->size - sizeof(uint64_t), ((void*)0), VAR_9);
                                if (!FUNC_3(VAR_11)) {
                                    FUNC_0("insert_tree_item returned %08x\n", VAR_11);
                                    FUNC_2(VAR_17);
                                    return VAR_11;
                                }

                                break;
                            }
                        }
                    }
                } else
                    FUNC_5("could not find (%I64x,%x,%I64x) in uuid tree\n", VAR_12.obj_id, VAR_12.obj_type, VAR_12.offset);
            }
        }
    }



    VAR_12.obj_id = VAR_8->id;
    VAR_12.obj_type = VAR_4;
    VAR_12.offset = 0xffffffffffffffff;

    VAR_11 = FUNC_7(VAR_7, VAR_7->root_root, &VAR_13, &VAR_12, 0, VAR_9);
    if (!FUNC_3(VAR_11)) {
        FUNC_0("find_item returned %08x\n", VAR_11);
        return VAR_11;
    }

    if (VAR_13.item->key.obj_id == VAR_12.obj_id && VAR_13.item->key.obj_type == VAR_12.obj_type) {
        VAR_11 = FUNC_6(VAR_7, &VAR_13);

        if (!FUNC_3(VAR_11)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_11);
            return VAR_11;
        }
    } else
        FUNC_5("could not find (%I64x,%x,%I64x) in root_root\n", VAR_12.obj_id, VAR_12.obj_type, VAR_12.offset);



    FUNC_8(VAR_7, VAR_8);

    return VAR_3;
}
