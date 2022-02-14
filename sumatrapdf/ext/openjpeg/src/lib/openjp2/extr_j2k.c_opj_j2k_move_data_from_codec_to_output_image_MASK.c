
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int m_numcomps_to_decode; size_t* m_comps_indices_to_decode; } ;
struct TYPE_14__ {TYPE_1__ m_decoder; } ;
struct TYPE_16__ {TYPE_3__* m_output_image; TYPE_2__ m_specific_param; int * m_private_image; } ;
typedef TYPE_4__ opj_j2k_t ;
struct TYPE_17__ {size_t numcomps; TYPE_6__* comps; } ;
typedef TYPE_5__ opj_image_t ;
struct TYPE_18__ {int w; int h; int * data; int resno_decoded; } ;
typedef TYPE_6__ opj_image_comp_t ;
struct TYPE_15__ {TYPE_11__* comps; } ;
struct TYPE_12__ {int * data; int resno_decoded; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (TYPE_6__*,TYPE_11__*,int) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static OPJ_BOOL FUNC_10(opj_j2k_t * VAR_2,
        opj_image_t * VAR_3)
{
    OPJ_UINT32 VAR_4;


    if (VAR_2->m_specific_param.m_decoder.m_numcomps_to_decode > 0) {
        opj_image_comp_t* VAR_5 =
            (opj_image_comp_t*) FUNC_8(
                VAR_2->m_specific_param.m_decoder.m_numcomps_to_decode *
                sizeof(opj_image_comp_t));
        if (VAR_5 == ((void*)0)) {
            FUNC_7(VAR_2->m_private_image);
            VAR_2->m_private_image = ((void*)0);
            return VAR_0;
        }
        for (VAR_4 = 0; VAR_4 < VAR_3->numcomps; VAR_4++) {
            FUNC_6(VAR_3->comps[VAR_4].data);
            VAR_3->comps[VAR_4].data = ((void*)0);
        }
        for (VAR_4 = 0;
                VAR_4 < VAR_2->m_specific_param.m_decoder.m_numcomps_to_decode; VAR_4++) {
            OPJ_UINT32 VAR_6 =
                VAR_2->m_specific_param.m_decoder.m_comps_indices_to_decode[VAR_4];
            FUNC_4(&(VAR_5[VAR_4]),
                   &(VAR_2->m_output_image->comps[VAR_6]),
                   sizeof(opj_image_comp_t));
            VAR_5[VAR_4].resno_decoded =
                VAR_2->m_output_image->comps[VAR_6].resno_decoded;
            VAR_5[VAR_4].data = VAR_2->m_output_image->comps[VAR_6].data;
            VAR_2->m_output_image->comps[VAR_6].data = ((void*)0);
        }
        for (VAR_4 = 0; VAR_4 < VAR_3->numcomps; VAR_4++) {
            FUNC_0(VAR_2->m_output_image->comps[VAR_4].data == ((void*)0));
            FUNC_6(VAR_2->m_output_image->comps[VAR_4].data);
            VAR_2->m_output_image->comps[VAR_4].data = ((void*)0);
        }
        VAR_3->numcomps = VAR_2->m_specific_param.m_decoder.m_numcomps_to_decode;
        FUNC_5(VAR_3->comps);
        VAR_3->comps = VAR_5;
    } else {
        for (VAR_4 = 0; VAR_4 < VAR_3->numcomps; VAR_4++) {
            VAR_3->comps[VAR_4].resno_decoded =
                VAR_2->m_output_image->comps[VAR_4].resno_decoded;
            FUNC_6(VAR_3->comps[VAR_4].data);
            VAR_3->comps[VAR_4].data = VAR_2->m_output_image->comps[VAR_4].data;
            VAR_2->m_output_image->comps[VAR_4].data = ((void*)0);
        }
    }
    return VAR_1;
}
