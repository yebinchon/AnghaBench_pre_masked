
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_18__ {TYPE_1__* item; } ;
typedef TYPE_3__ traverse_ptr ;
struct TYPE_19__ {int dev_root; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_17__ {int dev_id; } ;
struct TYPE_20__ {TYPE_2__ devitem; int stats; } ;
typedef TYPE_5__ device ;
struct TYPE_21__ {int offset; int obj_type; scalar_t__ obj_id; } ;
struct TYPE_16__ {int key; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_6__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int ,TYPE_3__*,TYPE_6__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ,int ,int *,int,int *,int ) ;
 int FUNC_8 (int ,TYPE_6__) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_5, device* VAR_6, PIRP VAR_7) {
    NTSTATUS VAR_8;
    KEY VAR_9;
    traverse_ptr VAR_10;
    uint16_t VAR_11;
    uint64_t* VAR_12;

    VAR_9.obj_id = 0;
    VAR_9.obj_type = VAR_4;
    VAR_9.offset = VAR_6->devitem.dev_id;

    VAR_8 = FUNC_6(VAR_5, VAR_5->dev_root, &VAR_10, &VAR_9, 0, VAR_7);
    if (!FUNC_3(VAR_8)) {
        FUNC_0("find_item returned %08x\n", VAR_8);
        return VAR_8;
    }

    if (!FUNC_8(VAR_10.item->key, VAR_9)) {
        VAR_8 = FUNC_5(VAR_5, &VAR_10);
        if (!FUNC_3(VAR_8)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_8);
            return VAR_8;
        }
    }

    VAR_11 = sizeof(uint64_t) * 5;
    VAR_12 = FUNC_1(VAR_1, VAR_11, VAR_0);
    if (!VAR_12) {
        FUNC_0("out of memory\n");
        return VAR_2;
    }

    FUNC_4(VAR_12, VAR_6->stats, VAR_11);

    VAR_8 = FUNC_7(VAR_5, VAR_5->dev_root, 0, VAR_4, VAR_6->devitem.dev_id, VAR_12, VAR_11, ((void*)0), VAR_7);
    if (!FUNC_3(VAR_8)) {
        FUNC_0("insert_tree_item returned %08x\n", VAR_8);
        FUNC_2(VAR_12);
        return VAR_8;
    }

    return VAR_3;
}
