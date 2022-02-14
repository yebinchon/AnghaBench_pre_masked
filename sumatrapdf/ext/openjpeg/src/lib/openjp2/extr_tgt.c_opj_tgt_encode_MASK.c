
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* nodes; } ;
typedef TYPE_1__ opj_tgt_tree_t ;
struct TYPE_5__ {scalar_t__ low; scalar_t__ value; int known; struct TYPE_5__* parent; } ;
typedef TYPE_2__ opj_tgt_node_t ;
typedef int opj_bio_t ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;


 int FUNC_0 (int *,int,int) ;

void FUNC_1(opj_bio_t *VAR_0, opj_tgt_tree_t *VAR_1, OPJ_UINT32 VAR_2,
                    OPJ_INT32 VAR_3)
{
    opj_tgt_node_t *VAR_4[31];
    opj_tgt_node_t **VAR_5;
    opj_tgt_node_t *VAR_6;
    OPJ_INT32 VAR_7;

    VAR_5 = VAR_4;
    VAR_6 = &VAR_1->nodes[VAR_2];
    while (VAR_6->parent) {
        *VAR_5++ = VAR_6;
        VAR_6 = VAR_6->parent;
    }

    VAR_7 = 0;
    for (;;) {
        if (VAR_7 > VAR_6->low) {
            VAR_6->low = VAR_7;
        } else {
            VAR_7 = VAR_6->low;
        }

        while (VAR_7 < VAR_3) {
            if (VAR_7 >= VAR_6->value) {
                if (!VAR_6->known) {
                    FUNC_0(VAR_0, 1, 1);
                    VAR_6->known = 1;
                }
                break;
            }
            FUNC_0(VAR_0, 0, 1);
            ++VAR_7;
        }

        VAR_6->low = VAR_7;
        if (VAR_5 == VAR_4) {
            break;
        }
        VAR_6 = *--VAR_5;
    }
}
