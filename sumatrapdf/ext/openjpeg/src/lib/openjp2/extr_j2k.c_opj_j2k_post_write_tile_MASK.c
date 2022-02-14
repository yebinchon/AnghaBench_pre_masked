
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_7__ {scalar_t__ m_encoded_tile_size; int * m_encoded_tile_data; } ;
struct TYPE_8__ {TYPE_1__ m_encoder; } ;
struct TYPE_9__ {int m_current_tile_number; TYPE_2__ m_specific_param; } ;
typedef TYPE_3__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *,scalar_t__*,scalar_t__,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *,scalar_t__*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__,int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_4(opj_j2k_t * VAR_2,
                                        opj_stream_private_t *VAR_3,
                                        opj_event_mgr_t * VAR_4)
{
    OPJ_UINT32 VAR_5;
    OPJ_BYTE * VAR_6 = 00;
    OPJ_UINT32 VAR_7 = 0;
    OPJ_UINT32 VAR_8;


    FUNC_0(VAR_2->m_specific_param.m_encoder.m_encoded_tile_data);

    VAR_7 = VAR_2->m_specific_param.m_encoder.m_encoded_tile_size;
    VAR_8 = VAR_7;
    VAR_6 = VAR_2->m_specific_param.m_encoder.m_encoded_tile_data;

    VAR_5 = 0;
    if (! FUNC_2(VAR_2, VAR_6, &VAR_5,
                                        VAR_8, VAR_3, VAR_4)) {
        return VAR_0;
    }
    VAR_6 += VAR_5;
    VAR_8 -= VAR_5;

    VAR_5 = 0;
    if (! FUNC_1(VAR_2, VAR_6, &VAR_5,
                                       VAR_8, VAR_3, VAR_4)) {
        return VAR_0;
    }

    VAR_8 -= VAR_5;
    VAR_5 = VAR_7 - VAR_8;

    if (FUNC_3(VAR_3,
                              VAR_2->m_specific_param.m_encoder.m_encoded_tile_data,
                              VAR_5, VAR_4) != VAR_5) {
        return VAR_0;
    }

    ++VAR_2->m_current_tile_number;

    return VAR_1;
}
