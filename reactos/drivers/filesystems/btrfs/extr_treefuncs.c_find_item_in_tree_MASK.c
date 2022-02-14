
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_22__ {TYPE_3__* tree; } ;
struct TYPE_24__ {TYPE_19__ treeholder; scalar_t__ ignore; int key; } ;
typedef TYPE_2__ tree_data ;
struct TYPE_23__ {scalar_t__ level; } ;
struct TYPE_25__ {int root; TYPE_1__ header; int itemlist; } ;
typedef TYPE_3__ tree ;
struct TYPE_26__ {TYPE_2__* item; TYPE_3__* tree; } ;
typedef TYPE_4__ traverse_ptr ;
typedef int device_extension ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int KEY ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_19__*,int ,TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__*,TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*,TYPE_4__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static NTSTATUS FUNC_10(device_extension* VAR_2, tree* VAR_3, traverse_ptr* VAR_4, const KEY* VAR_5, bool VAR_6, uint8_t VAR_7, PIRP VAR_8) {
    int VAR_9;
    tree_data *VAR_10, *VAR_11;
    KEY VAR_12;

    VAR_9 = 1;
    VAR_10 = FUNC_6(VAR_3);
    VAR_11 = ((void*)0);

    if (!VAR_10) return VAR_0;

    VAR_12 = *VAR_5;

    do {
        VAR_9 = FUNC_7(VAR_12, VAR_10->key);

        if (VAR_9 == 1) {
            VAR_11 = VAR_10;
            VAR_10 = FUNC_8(VAR_3, VAR_10);
        }

        if (VAR_3->header.level == 0 && VAR_9 == 0 && !VAR_6 && VAR_10 && VAR_10->ignore) {
            tree_data* VAR_13 = VAR_10;

            while (VAR_10 && VAR_10->ignore)
                VAR_10 = FUNC_8(VAR_3, VAR_10);

            if (VAR_10) {
                VAR_9 = FUNC_7(VAR_12, VAR_10->key);

                if (VAR_9 != 0) {
                    VAR_10 = VAR_13;
                    VAR_9 = 0;
                }
            } else
                VAR_10 = VAR_13;
        }
    } while (VAR_10 && VAR_9 == 1);

    if ((VAR_9 == -1 || !VAR_10) && VAR_11)
        VAR_10 = VAR_11;

    if (VAR_3->header.level == 0) {
        if (VAR_10->ignore && !VAR_6) {
            traverse_ptr VAR_14;

            VAR_14.tree = VAR_3;
            VAR_14.item = VAR_10;

            while (FUNC_5(VAR_2, &VAR_14, VAR_4, VAR_8)) {
                if (!VAR_4->item->ignore)
                    return VAR_1;

                VAR_14 = *VAR_4;
            }



            VAR_14.tree = VAR_3;
            VAR_14.item = VAR_10;

            while (FUNC_4(VAR_2, &VAR_14, VAR_4, 1, VAR_8)) {
                if (!VAR_4->item->ignore)
                    return VAR_1;

                VAR_14 = *VAR_4;
            }

            return VAR_0;
        } else {
            VAR_4->tree = VAR_3;
            VAR_4->item = VAR_10;
        }

        return VAR_1;
    } else {
        NTSTATUS VAR_15;

        while (VAR_10 && VAR_10->treeholder.tree && FUNC_1(&VAR_10->treeholder.tree->itemlist)) {
            VAR_10 = FUNC_9(VAR_3, VAR_10);
        }

        if (!VAR_10)
            return VAR_0;

        if (VAR_3->header.level <= VAR_7) {
            VAR_4->tree = VAR_3;
            VAR_4->item = VAR_10;
            return VAR_1;
        }

        if (!VAR_10->treeholder.tree) {
            VAR_15 = FUNC_3(VAR_2, &VAR_10->treeholder, VAR_3->root, VAR_3, VAR_10, VAR_8);
            if (!FUNC_2(VAR_15)) {
                FUNC_0("do_load_tree returned %08x\n", VAR_15);
                return VAR_15;
            }
        }

        VAR_15 = FUNC_10(VAR_2, VAR_10->treeholder.tree, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

        return VAR_15;
    }
}
