
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int * item; scalar_t__ tree; } ;
typedef TYPE_1__ traverse_ptr ;
struct TYPE_10__ {scalar_t__ tree; } ;
struct TYPE_9__ {TYPE_6__ treeholder; } ;
typedef TYPE_2__ root ;
typedef int device_extension ;
typedef int PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef int KEY ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,TYPE_6__*,TYPE_2__*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,TYPE_1__*,int const*,int,int ,int ) ;

NTSTATUS FUNC_4(device_extension* VAR_1, root* VAR_2, traverse_ptr* VAR_3, const KEY* VAR_4, bool VAR_5, uint8_t VAR_6, PIRP VAR_7) {
    NTSTATUS VAR_8;

    if (!VAR_2->treeholder.tree) {
        VAR_8 = FUNC_2(VAR_1, &VAR_2->treeholder, VAR_2, ((void*)0), ((void*)0), VAR_7);
        if (!FUNC_1(VAR_8)) {
            FUNC_0("do_load_tree returned %08x\n", VAR_8);
            return VAR_8;
        }
    }

    VAR_8 = FUNC_3(VAR_1, VAR_2->treeholder.tree, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    if (!FUNC_1(VAR_8) && VAR_8 != VAR_0) {
        FUNC_0("find_item_in_tree returned %08x\n", VAR_8);
    }

    if (VAR_8 == VAR_0) {
        VAR_3->tree = VAR_2->treeholder.tree;
        VAR_3->item = ((void*)0);
    }

    return VAR_8;
}
