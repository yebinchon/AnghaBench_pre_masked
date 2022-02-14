
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_18__ {TYPE_5__* m_default_tcp; } ;
struct TYPE_19__ {TYPE_6__ m_decoder; } ;
struct TYPE_13__ {size_t m_reduce; } ;
struct TYPE_14__ {TYPE_1__ m_dec; } ;
struct TYPE_15__ {TYPE_2__ m_specific_param; } ;
struct TYPE_12__ {TYPE_9__* m_private_image; TYPE_7__ m_specific_param; TYPE_3__ m_cp; } ;
typedef TYPE_10__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
struct TYPE_21__ {size_t numcomps; TYPE_8__* comps; } ;
struct TYPE_20__ {size_t factor; } ;
struct TYPE_17__ {TYPE_4__* tccps; } ;
struct TYPE_16__ {size_t numresolutions; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;

OPJ_BOOL FUNC_1(opj_j2k_t *VAR_3,
        OPJ_UINT32 VAR_4,
        opj_event_mgr_t * VAR_5)
{
    OPJ_UINT32 VAR_6;

    VAR_3->m_cp.m_specific_param.m_dec.m_reduce = VAR_4;

    if (VAR_3->m_private_image) {
        if (VAR_3->m_private_image->comps) {
            if (VAR_3->m_specific_param.m_decoder.m_default_tcp) {
                if (VAR_3->m_specific_param.m_decoder.m_default_tcp->tccps) {
                    for (VAR_6 = 0 ; VAR_6 < VAR_3->m_private_image->numcomps; VAR_6++) {
                        OPJ_UINT32 VAR_7 =
                            VAR_3->m_specific_param.m_decoder.m_default_tcp->tccps[VAR_6].numresolutions;
                        if (VAR_4 >= VAR_7) {
                            FUNC_0(VAR_5, VAR_0,
                                          "Resolution factor is greater than the maximum resolution in the component.\n");
                            return VAR_1;
                        }
                        VAR_3->m_private_image->comps[VAR_6].factor = VAR_4;
                    }
                    return VAR_2;
                }
            }
        }
    }

    return VAR_1;
}
