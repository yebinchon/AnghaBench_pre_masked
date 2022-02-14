
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int key; } ;
typedef TYPE_2__ tree_data ;
struct TYPE_12__ {int level; } ;
struct TYPE_14__ {TYPE_1__ header; int root; struct TYPE_14__* parent; TYPE_2__* paritem; } ;
typedef TYPE_3__ tree ;
struct TYPE_15__ {TYPE_2__* item; TYPE_3__* tree; } ;
typedef TYPE_4__ traverse_ptr ;
typedef int device_extension ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_4__*,int *,int,int ,int *) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static NTSTATUS FUNC_2(device_extension* VAR_2, tree* VAR_3, tree_data* VAR_4, traverse_ptr* VAR_5) {
    tree_data* VAR_6 = FUNC_1(VAR_3, VAR_4);
    tree* VAR_7;

    if (VAR_6) {
        VAR_5->tree = VAR_3;
        VAR_5->item = VAR_6;
        return VAR_1;
    }

    VAR_7 = VAR_3;

    do {
        VAR_6 = VAR_7->paritem;
        VAR_7 = VAR_7->parent;
    } while (VAR_6 && !FUNC_1(VAR_7, VAR_6));

    if (!VAR_6)
        return VAR_0;

    VAR_6 = FUNC_1(VAR_7, VAR_6);

    return FUNC_0(VAR_2, VAR_7->root, VAR_5, &VAR_6->key, 0, VAR_3->header.level, ((void*)0));
}
