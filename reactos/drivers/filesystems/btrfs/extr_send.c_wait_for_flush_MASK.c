
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* item; } ;
typedef TYPE_3__ traverse_ptr ;
struct TYPE_13__ {int parent; TYPE_8__* Vcb; int root; TYPE_1__* send; int buffer_event; } ;
typedef TYPE_4__ send_context ;
struct TYPE_14__ {int tree_lock; } ;
struct TYPE_11__ {int key; } ;
struct TYPE_10__ {scalar_t__ cancelling; int cleared_event; } ;
typedef int NTSTATUS ;
typedef int KEY ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_8__*,int ,TYPE_3__*,int *,int,int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static NTSTATUS FUNC_9(send_context* VAR_4, traverse_ptr* VAR_5, traverse_ptr* VAR_6) {
    NTSTATUS VAR_7;
    KEY VAR_8, VAR_9;

    if (VAR_5)
        VAR_8 = VAR_5->item->key;

    if (VAR_6)
        VAR_9 = VAR_6->item->key;

    FUNC_2(&VAR_4->Vcb->tree_lock);

    FUNC_3(&VAR_4->send->cleared_event);
    FUNC_4(&VAR_4->buffer_event, 0, 1);
    FUNC_5(&VAR_4->send->cleared_event, VAR_0, VAR_1, 0, ((void*)0));

    FUNC_1(&VAR_4->Vcb->tree_lock, 1);

    if (VAR_4->send->cancelling)
        return VAR_3;

    if (VAR_5) {
        VAR_7 = FUNC_7(VAR_4->Vcb, VAR_4->root, VAR_5, &VAR_8, 0, ((void*)0));
        if (!FUNC_6(VAR_7)) {
            FUNC_0("find_item returned %08x\n", VAR_7);
            return VAR_7;
        }

        if (FUNC_8(VAR_5->item->key, VAR_8)) {
            FUNC_0("readonly subvolume changed\n");
            return VAR_2;
        }
    }

    if (VAR_6) {
        VAR_7 = FUNC_7(VAR_4->Vcb, VAR_4->parent, VAR_6, &VAR_9, 0, ((void*)0));
        if (!FUNC_6(VAR_7)) {
            FUNC_0("find_item returned %08x\n", VAR_7);
            return VAR_7;
        }

        if (FUNC_8(VAR_6->item->key, VAR_9)) {
            FUNC_0("readonly subvolume changed\n");
            return VAR_2;
        }
    }

    return VAR_3;
}
