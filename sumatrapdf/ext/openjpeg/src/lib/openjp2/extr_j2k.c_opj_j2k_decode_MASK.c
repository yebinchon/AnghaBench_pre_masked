
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int opj_stream_private_t ;
struct TYPE_20__ {scalar_t__ m_reduce; } ;
struct TYPE_21__ {TYPE_3__ m_dec; } ;
struct TYPE_22__ {TYPE_4__ m_specific_param; } ;
struct TYPE_23__ {TYPE_15__* m_private_image; int m_procedure_list; int * m_output_image; TYPE_5__ m_cp; } ;
typedef TYPE_6__ opj_j2k_t ;
struct TYPE_24__ {scalar_t__ numcomps; TYPE_2__* comps; } ;
typedef TYPE_7__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_19__ {scalar_t__ factor; int * data; } ;
struct TYPE_18__ {scalar_t__ factor; } ;
struct TYPE_17__ {scalar_t__ numcomps; TYPE_1__* comps; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (TYPE_6__*,int ,int *,int *) ;
 int FUNC_4 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (TYPE_7__*,int *) ;

OPJ_BOOL FUNC_7(opj_j2k_t * VAR_1,
                        opj_stream_private_t * VAR_2,
                        opj_image_t * VAR_3,
                        opj_event_mgr_t * VAR_4)
{
    if (!VAR_3) {
        return VAR_0;
    }





    if (VAR_1->m_cp.m_specific_param.m_dec.m_reduce > 0 &&
            VAR_1->m_private_image != ((void*)0) &&
            VAR_1->m_private_image->numcomps > 0 &&
            VAR_1->m_private_image->comps[0].factor ==
            VAR_1->m_cp.m_specific_param.m_dec.m_reduce &&
            VAR_3->numcomps > 0 &&
            VAR_3->comps[0].factor == 0 &&

            VAR_3->comps[0].data == ((void*)0)) {
        OPJ_UINT32 VAR_5;



        for (VAR_5 = 0; VAR_5 < VAR_3->numcomps; ++VAR_5) {
            VAR_3->comps[VAR_5].factor = VAR_1->m_cp.m_specific_param.m_dec.m_reduce;
        }
        if (!FUNC_6(VAR_3, VAR_4)) {
            return VAR_0;
        }
    }

    if (VAR_1->m_output_image == ((void*)0)) {
        VAR_1->m_output_image = FUNC_1();
        if (!(VAR_1->m_output_image)) {
            return VAR_0;
        }
    }
    FUNC_0(VAR_3, VAR_1->m_output_image);


    if (!FUNC_5(VAR_1, VAR_4)) {
        return VAR_0;
    }


    if (! FUNC_3(VAR_1, VAR_1->m_procedure_list, VAR_2, VAR_4)) {
        FUNC_2(VAR_1->m_private_image);
        VAR_1->m_private_image = ((void*)0);
        return VAR_0;
    }


    return FUNC_4(VAR_1, VAR_3);
}
