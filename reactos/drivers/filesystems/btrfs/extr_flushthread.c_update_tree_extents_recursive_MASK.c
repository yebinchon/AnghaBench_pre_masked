
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; scalar_t__ has_address; int updated_extents; } ;
typedef TYPE_1__ tree ;
typedef int device_extension ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static NTSTATUS FUNC_3(device_extension* VAR_1, tree* VAR_2, PIRP VAR_3, LIST_ENTRY* VAR_4) {
    NTSTATUS VAR_5;

    if (VAR_2->parent && !VAR_2->parent->updated_extents && VAR_2->parent->has_address) {
        VAR_5 = FUNC_3(VAR_1, VAR_2->parent, VAR_3, VAR_4);
        if (!FUNC_1(VAR_5))
            return VAR_5;
    }

    VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
    if (!FUNC_1(VAR_5)) {
        FUNC_0("update_tree_extents returned %08x\n", VAR_5);
        return VAR_5;
    }

    return VAR_0;
}
