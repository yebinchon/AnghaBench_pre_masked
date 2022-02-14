
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ m_tlm_sot_offsets_current; } ;
struct TYPE_6__ {TYPE_1__ m_encoder; } ;
struct TYPE_7__ {TYPE_2__ m_specific_param; int m_current_tile_number; } ;
typedef TYPE_3__ opj_j2k_t ;
typedef int OPJ_UINT32 ;


 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(opj_j2k_t * VAR_0, OPJ_UINT32 VAR_1)
{
    FUNC_0(VAR_0->m_specific_param.m_encoder.m_tlm_sot_offsets_current,
                    VAR_0->m_current_tile_number, 1);
    ++VAR_0->m_specific_param.m_encoder.m_tlm_sot_offsets_current;

    FUNC_0(VAR_0->m_specific_param.m_encoder.m_tlm_sot_offsets_current,
                    VAR_1, 4);
    VAR_0->m_specific_param.m_encoder.m_tlm_sot_offsets_current += 4;
}
