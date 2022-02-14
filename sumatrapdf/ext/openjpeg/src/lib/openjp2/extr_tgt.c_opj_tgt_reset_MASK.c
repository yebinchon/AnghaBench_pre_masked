
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numnodes; TYPE_2__* nodes; } ;
typedef TYPE_1__ opj_tgt_tree_t ;
struct TYPE_5__ {int value; scalar_t__ known; scalar_t__ low; } ;
typedef TYPE_2__ opj_tgt_node_t ;
typedef scalar_t__ OPJ_UINT32 ;



void FUNC_0(opj_tgt_tree_t *VAR_0)
{
    OPJ_UINT32 VAR_1;
    opj_tgt_node_t * VAR_2 = 00;;

    if (! VAR_0) {
        return;
    }

    VAR_2 = VAR_0->nodes;
    for (VAR_1 = 0; VAR_1 < VAR_0->numnodes; ++VAR_1) {
        VAR_2->value = 999;
        VAR_2->low = 0;
        VAR_2->known = 0;
        ++VAR_2;
    }
}
