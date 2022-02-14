
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* item; } ;
typedef TYPE_2__ traverse_ptr ;
struct TYPE_16__ {int tree_lock; int root_root; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_17__ {scalar_t__ offset; int obj_type; int obj_id; } ;
struct TYPE_14__ {int key; } ;
typedef int NTSTATUS ;
typedef TYPE_4__ KEY ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_2__*,TYPE_4__*,int,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_4__) ;

__attribute__((used)) static NTSTATUS FUNC_9(device_extension* VAR_3) {
    KEY VAR_4;
    traverse_ptr VAR_5;
    NTSTATUS VAR_6;

    VAR_4.obj_id = VAR_0;
    VAR_4.obj_type = VAR_2;
    VAR_4.offset = 0;

    FUNC_1(&VAR_3->tree_lock, 1);

    VAR_6 = FUNC_6(VAR_3, VAR_3->root_root, &VAR_5, &VAR_4, 0, ((void*)0));
    if (!FUNC_3(VAR_6)) {
        FUNC_0("find_item returned %08x\n", VAR_6);
        goto end;
    }

    if (!FUNC_8(VAR_5.item->key, VAR_4)) {
        VAR_6 = FUNC_4(VAR_3, &VAR_5);
        if (!FUNC_3(VAR_6)) {
            FUNC_0("delete_tree_item returned %08x\n", VAR_6);
            goto end;
        }

        VAR_6 = FUNC_5(VAR_3, ((void*)0));
        if (!FUNC_3(VAR_6)) {
            FUNC_0("do_write returned %08x\n", VAR_6);
            goto end;
        }

        FUNC_7(VAR_3);
    }

    VAR_6 = VAR_1;

end:
    FUNC_2(&VAR_3->tree_lock);

    return VAR_6;
}
