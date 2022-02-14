
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t* m_comps_indices_to_decode; size_t m_numcomps_to_decode; } ;
struct TYPE_8__ {TYPE_2__ m_decoder; } ;
struct TYPE_9__ {TYPE_3__ m_specific_param; TYPE_1__* m_private_image; } ;
typedef TYPE_4__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
struct TYPE_6__ {size_t const numcomps; } ;
typedef size_t OPJ_UINT32 ;
typedef size_t OPJ_BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t*,size_t const*,size_t) ;
 scalar_t__ FUNC_1 (int,size_t const) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (size_t*) ;
 scalar_t__ FUNC_4 (size_t) ;

OPJ_BOOL FUNC_5(opj_j2k_t *VAR_3,
                                        OPJ_UINT32 VAR_4,
                                        const OPJ_UINT32* VAR_5,
                                        opj_event_mgr_t * VAR_6)
{
    OPJ_UINT32 VAR_7;
    OPJ_BOOL* VAR_8;

    if (VAR_3->m_private_image == ((void*)0)) {
        FUNC_2(VAR_6, VAR_0,
                      "opj_read_header() should be called before "
                      "opj_set_decoded_components().\n");
        return VAR_1;
    }

    VAR_8 = (OPJ_BOOL*) FUNC_1(sizeof(OPJ_BOOL),
                                            VAR_3->m_private_image->numcomps);
    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        if (VAR_5[VAR_7] >= VAR_3->m_private_image->numcomps) {
            FUNC_2(VAR_6, VAR_0,
                          "Invalid component index: %u\n",
                          VAR_5[VAR_7]);
            FUNC_3(VAR_8);
            return VAR_1;
        }
        if (VAR_8[VAR_5[VAR_7]]) {
            FUNC_2(VAR_6, VAR_0,
                          "Component index %u used several times\n",
                          VAR_5[VAR_7]);
            FUNC_3(VAR_8);
            return VAR_1;
        }
        VAR_8[VAR_5[VAR_7]] = VAR_2;
    }
    FUNC_3(VAR_8);

    FUNC_3(VAR_3->m_specific_param.m_decoder.m_comps_indices_to_decode);
    if (VAR_4) {
        VAR_3->m_specific_param.m_decoder.m_comps_indices_to_decode =
            (OPJ_UINT32*) FUNC_4(VAR_4 * sizeof(OPJ_UINT32));
        if (VAR_3->m_specific_param.m_decoder.m_comps_indices_to_decode == ((void*)0)) {
            VAR_3->m_specific_param.m_decoder.m_numcomps_to_decode = 0;
            return VAR_1;
        }
        FUNC_0(VAR_3->m_specific_param.m_decoder.m_comps_indices_to_decode,
               VAR_5,
               VAR_4 * sizeof(OPJ_UINT32));
    } else {
        VAR_3->m_specific_param.m_decoder.m_comps_indices_to_decode = ((void*)0);
    }
    VAR_3->m_specific_param.m_decoder.m_numcomps_to_decode = VAR_4;

    return VAR_2;
}
