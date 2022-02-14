
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int key; } ;
typedef TYPE_2__ tree_data ;
struct TYPE_11__ {scalar_t__ address; } ;
struct TYPE_13__ {int root; TYPE_1__ header; struct TYPE_13__* parent; TYPE_2__* paritem; } ;
typedef TYPE_3__ tree ;
struct TYPE_14__ {TYPE_2__* item; TYPE_3__* tree; } ;
typedef TYPE_4__ traverse_ptr ;
typedef int device_extension ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,TYPE_4__*,int *,int,int *) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_2__*,TYPE_4__*) ;

NTSTATUS FUNC_4(device_extension* VAR_2, traverse_ptr* VAR_3, traverse_ptr* VAR_4, bool* VAR_5, bool* VAR_6) {
    NTSTATUS VAR_7;
    tree *VAR_8, *VAR_9;
    tree_data *VAR_10, *VAR_11;

    VAR_8 = VAR_3->tree;
    VAR_9 = VAR_4->tree;

    do {
        VAR_10 = VAR_8->paritem;
        VAR_11 = VAR_9->paritem;
        VAR_8 = VAR_8->parent;
        VAR_9 = VAR_9->parent;
    } while (VAR_8 && VAR_9 && VAR_8->header.address == VAR_9->header.address);

    while (1) {
        traverse_ptr VAR_12, VAR_13;

        VAR_7 = FUNC_3(VAR_2, VAR_8, VAR_10, &VAR_12);
        if (VAR_7 == VAR_0)
            *VAR_5 = 1;
        else if (!FUNC_1(VAR_7)) {
            FUNC_0("next_item2 returned %08x\n", VAR_7);
            return VAR_7;
        }

        VAR_7 = FUNC_3(VAR_2, VAR_9, VAR_11, &VAR_13);
        if (VAR_7 == VAR_0)
            *VAR_6 = 1;
        else if (!FUNC_1(VAR_7)) {
            FUNC_0("next_item2 returned %08x\n", VAR_7);
            return VAR_7;
        }

        if (*VAR_5 || *VAR_6) {
            if (!*VAR_5) {
                VAR_7 = FUNC_2(VAR_2, VAR_8->root, VAR_3, &VAR_12->key, 0, ((void*)0));
                if (!FUNC_1(VAR_7)) {
                    FUNC_0("find_item returned %08x\n", VAR_7);
                    return VAR_7;
                }
            } else if (!*VAR_6) {
                VAR_7 = FUNC_2(VAR_2, VAR_9->root, VAR_4, &VAR_13->key, 0, ((void*)0));
                if (!FUNC_1(VAR_7)) {
                    FUNC_0("find_item returned %08x\n", VAR_7);
                    return VAR_7;
                }
            }

            return VAR_1;
        }

        if (VAR_12>header.address != VAR_13>header.address) {
            VAR_7 = FUNC_2(VAR_2, VAR_8->root, VAR_3, &VAR_12->key, 0, ((void*)0));
            if (!FUNC_1(VAR_7)) {
                FUNC_0("find_item returned %08x\n", VAR_7);
                return VAR_7;
            }

            VAR_7 = FUNC_2(VAR_2, VAR_9->root, VAR_4, &VAR_13->key, 0, ((void*)0));
            if (!FUNC_1(VAR_7)) {
                FUNC_0("find_item returned %08x\n", VAR_7);
                return VAR_7;
            }

            return VAR_1;
        }

        VAR_8 = VAR_12;
        VAR_10 = VAR_12;
        VAR_9 = VAR_13;
        VAR_11 = VAR_13;
    }
}
