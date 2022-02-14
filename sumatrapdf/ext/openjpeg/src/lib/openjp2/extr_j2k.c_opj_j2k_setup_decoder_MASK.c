
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int m_reduce; int m_layer; } ;
struct TYPE_9__ {TYPE_1__ m_dec; } ;
struct TYPE_10__ {int max_tiles; int exp_comps; int correct; TYPE_2__ m_specific_param; } ;
struct TYPE_11__ {int dump_state; TYPE_3__ m_cp; } ;
typedef TYPE_4__ opj_j2k_t ;
struct TYPE_12__ {int flags; int jpwl_max_tiles; int jpwl_exp_comps; int jpwl_correct; int cp_reduce; int cp_layer; } ;
typedef TYPE_5__ opj_dparameters_t ;


 int VAR_0 ;

void FUNC_0(opj_j2k_t *VAR_1, opj_dparameters_t *VAR_2)
{
    if (VAR_1 && VAR_2) {
        VAR_1->m_cp.m_specific_param.m_dec.m_layer = VAR_2->cp_layer;
        VAR_1->m_cp.m_specific_param.m_dec.m_reduce = VAR_2->cp_reduce;

        VAR_1->dump_state = (VAR_2->flags & VAR_0);





    }
}
