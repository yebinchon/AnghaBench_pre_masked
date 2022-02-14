
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {TYPE_1__* item; } ;
typedef TYPE_2__ traverse_ptr ;
struct TYPE_15__ {int root_root; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_16__ {void* offset; int obj_type; void* obj_id; } ;
struct TYPE_13__ {scalar_t__ size; int key; int data; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_4__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_2__*,TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int ,void*,int ,void*,int *,scalar_t__,int *,int ) ;
 int FUNC_8 (int ,TYPE_4__) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_6, uint64_t VAR_7, uint64_t VAR_8, PIRP VAR_9) {
    KEY VAR_10;
    traverse_ptr VAR_11;
    uint8_t* VAR_12;
    uint16_t VAR_13;
    NTSTATUS VAR_14;

    VAR_10.obj_id = VAR_8;
    VAR_10.obj_type = VAR_5;
    VAR_10.offset = VAR_7;

    VAR_14 = FUNC_6(VAR_6, VAR_6->root_root, &VAR_11, &VAR_10, 0, VAR_9);
    if (!FUNC_3(VAR_14)) {
        FUNC_0("error - find_item returned %08x\n", VAR_14);
        return VAR_14;
    }

    if (!FUNC_8(VAR_11.item->key, VAR_10) && VAR_11.item->size > 0) {
        VAR_13 = VAR_11.item->size;

        VAR_12 = FUNC_1(VAR_1, VAR_13, VAR_0);
        if (!VAR_12) {
            FUNC_0("out of memory\n");
            return VAR_2;
        }

        FUNC_4(VAR_12, VAR_11.item->data, VAR_13);
    } else {
        VAR_13 = 0;
        VAR_12 = ((void*)0);
    }

    VAR_10.obj_id = VAR_7;
    VAR_10.obj_type = VAR_4;
    VAR_10.offset = VAR_8;

    VAR_14 = FUNC_6(VAR_6, VAR_6->root_root, &VAR_11, &VAR_10, 0, VAR_9);
    if (!FUNC_3(VAR_14)) {
        FUNC_0("error - find_item returned %08x\n", VAR_14);

        if (VAR_13 > 0)
            FUNC_2(VAR_12);

        return VAR_14;
    }

    if (!FUNC_8(VAR_11.item->key, VAR_10)) {
        VAR_14 = FUNC_5(VAR_6, &VAR_11);
        if (!FUNC_3(VAR_14)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_14);

            if (VAR_13 > 0)
                FUNC_2(VAR_12);

            return VAR_14;
        }
    }

    if (VAR_13 > 0) {
        VAR_14 = FUNC_7(VAR_6, VAR_6->root_root, VAR_7, VAR_4, VAR_8, VAR_12, VAR_13, ((void*)0), VAR_9);
        if (!FUNC_3(VAR_14)) {
            FUNC_0("insert_tree_item returned %08x\n", VAR_14);
            FUNC_2(VAR_12);
            return VAR_14;
        }
    }

    return VAR_3;
}
