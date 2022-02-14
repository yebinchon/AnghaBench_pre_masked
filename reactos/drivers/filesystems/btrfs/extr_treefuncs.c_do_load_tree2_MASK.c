
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_3__* tree; int address; } ;
typedef TYPE_2__ tree_holder ;
typedef int tree_data ;
struct TYPE_7__ {scalar_t__ level; } ;
struct TYPE_9__ {int * paritem; TYPE_1__ header; struct TYPE_9__* parent; } ;
typedef TYPE_3__ tree ;
typedef int root ;
typedef int device_extension ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int *,int *,TYPE_3__**) ;

__attribute__((used)) static NTSTATUS FUNC_3(device_extension* VAR_2, tree_holder* VAR_3, uint8_t* VAR_4, root* VAR_5, tree* VAR_6, tree_data* VAR_7) {
    if (!VAR_3->tree) {
        NTSTATUS VAR_8;
        tree* VAR_9;

        VAR_8 = FUNC_2(VAR_2, VAR_3->address, VAR_4, VAR_5, &VAR_9);
        if (!FUNC_1(VAR_8)) {
            FUNC_0("load_tree returned %08x\n", VAR_8);
            return VAR_8;
        }

        VAR_9->parent = VAR_6;





        VAR_9->paritem = VAR_7;

        VAR_3->tree = VAR_9;
    }

    return VAR_0;
}
