
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* nodes; } ;
typedef TYPE_1__ opj_tgt_tree_t ;
struct TYPE_5__ {scalar_t__ value; struct TYPE_5__* parent; } ;
typedef TYPE_2__ opj_tgt_node_t ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;



void FUNC_0(opj_tgt_tree_t *VAR_0, OPJ_UINT32 VAR_1, OPJ_INT32 VAR_2)
{
    opj_tgt_node_t *VAR_3;
    VAR_3 = &VAR_0->nodes[VAR_1];
    while (VAR_3 && VAR_3->value > VAR_2) {
        VAR_3->value = VAR_2;
        VAR_3 = VAR_3->parent;
    }
}
