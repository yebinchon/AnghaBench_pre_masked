
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int m_header_tile_data_size; int * m_header_tile_data; } ;
struct TYPE_9__ {TYPE_2__ m_encoder; } ;
struct TYPE_7__ {scalar_t__ m_is_decoder; } ;
struct TYPE_10__ {void* m_tp; void* m_procedure_list; void* m_validation_list; TYPE_3__ m_specific_param; TYPE_1__ m_cp; scalar_t__ m_is_decoder; } ;
typedef TYPE_4__ opj_j2k_t ;
typedef int OPJ_BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 () ;
 void* FUNC_5 (int ) ;

opj_j2k_t* FUNC_6(void)
{
    opj_j2k_t *VAR_1 = (opj_j2k_t*) FUNC_0(1, sizeof(opj_j2k_t));
    if (!VAR_1) {
        return ((void*)0);
    }


    VAR_1->m_is_decoder = 0;
    VAR_1->m_cp.m_is_decoder = 0;

    VAR_1->m_specific_param.m_encoder.m_header_tile_data = (OPJ_BYTE *) FUNC_3(
                VAR_0);
    if (! VAR_1->m_specific_param.m_encoder.m_header_tile_data) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    VAR_1->m_specific_param.m_encoder.m_header_tile_data_size =
        VAR_0;


    VAR_1->m_validation_list = FUNC_4();
    if (! VAR_1->m_validation_list) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }


    VAR_1->m_procedure_list = FUNC_4();
    if (! VAR_1->m_procedure_list) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    VAR_1->m_tp = FUNC_5(FUNC_2());
    if (!VAR_1->m_tp) {
        VAR_1->m_tp = FUNC_5(0);
    }
    if (!VAR_1->m_tp) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
