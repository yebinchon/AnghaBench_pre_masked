
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* cp; } ;
typedef TYPE_3__ opj_tcd_t ;
typedef int opj_event_mgr_t ;
struct TYPE_11__ {scalar_t__ m_fixed_quality; scalar_t__ m_disto_alloc; } ;
struct TYPE_12__ {TYPE_1__ m_enc; } ;
struct TYPE_14__ {TYPE_2__ m_specific_param; } ;
typedef TYPE_4__ opj_cp_t ;
struct TYPE_15__ {scalar_t__ index_write; } ;
typedef TYPE_5__ opj_codestream_info_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int *,int ,TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static OPJ_BOOL FUNC_2(opj_tcd_t *VAR_2,
        OPJ_BYTE * VAR_3,
        OPJ_UINT32 VAR_4,
        opj_codestream_info_t *VAR_5,
        opj_event_mgr_t *VAR_6)
{
    opj_cp_t * VAR_7 = VAR_2->cp;
    OPJ_UINT32 VAR_8 = 0;

    if (VAR_5) {
        VAR_5->index_write = 0;
    }

    if (VAR_7->m_specific_param.m_enc.m_disto_alloc ||
            VAR_7->m_specific_param.m_enc.m_fixed_quality) {


        if (! FUNC_0(VAR_2, VAR_3, &VAR_8, VAR_4,
                                   VAR_5, VAR_6)) {
            return VAR_0;
        }
    } else {

        FUNC_1(VAR_2);
    }

    return VAR_1;
}
