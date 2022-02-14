
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct opj_event_mgr {int dummy; } ;
struct TYPE_20__ {scalar_t__ cur_pino; } ;
typedef TYPE_5__ opj_tcd_t ;
typedef int opj_stream_private_t ;
struct TYPE_16__ {scalar_t__ m_current_poc_tile_part_number; } ;
struct TYPE_17__ {TYPE_1__ m_encoder; } ;
struct TYPE_22__ {int rsiz; TYPE_4__* tcps; } ;
struct TYPE_21__ {size_t m_current_tile_number; TYPE_3__* m_private_image; TYPE_2__ m_specific_param; TYPE_7__ m_cp; TYPE_5__* m_tcd; } ;
typedef TYPE_6__ opj_j2k_t ;
typedef TYPE_7__ opj_cp_t ;
struct TYPE_19__ {scalar_t__ numpocs; } ;
struct TYPE_18__ {int numcomps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,int,int *,scalar_t__*,struct opj_event_mgr*) ;
 int FUNC_3 (TYPE_6__*,int *,scalar_t__*,struct opj_event_mgr*) ;
 int FUNC_4 (TYPE_6__*,int,int *,scalar_t__*,struct opj_event_mgr*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,int *,scalar_t__*,scalar_t__,int *,struct opj_event_mgr*) ;
 int FUNC_6 (TYPE_6__*,int *,scalar_t__,scalar_t__*,int *,struct opj_event_mgr*) ;
 int FUNC_7 (int *,scalar_t__,int) ;

__attribute__((used)) static OPJ_BOOL FUNC_8(opj_j2k_t *VAR_3,
        OPJ_BYTE * VAR_4,
        OPJ_UINT32 * VAR_5,
        OPJ_UINT32 VAR_6,
        opj_stream_private_t *VAR_7,
        struct opj_event_mgr * VAR_8)
{
    OPJ_UINT32 VAR_9 = 0;
    OPJ_UINT32 VAR_10;
    OPJ_BYTE * VAR_11 = 00;

    opj_tcd_t * VAR_12 = 00;
    opj_cp_t * VAR_13 = 00;

    VAR_12 = VAR_3->m_tcd;
    VAR_13 = &(VAR_3->m_cp);

    VAR_12->cur_pino = 0;


    VAR_3->m_specific_param.m_encoder.m_current_poc_tile_part_number = 0;




    VAR_10 = 0;
    VAR_11 = VAR_4;
    if (! FUNC_6(VAR_3, VAR_4, VAR_6,
                            &VAR_10, VAR_7,
                            VAR_8)) {
        return VAR_0;
    }

    VAR_9 += VAR_10;
    VAR_4 += VAR_10;
    VAR_6 -= VAR_10;

    if (!FUNC_0(VAR_13->rsiz)) {
        if (VAR_13->tcps[VAR_3->m_current_tile_number].numpocs) {
            VAR_10 = 0;
            FUNC_3(VAR_3, VAR_4, &VAR_10,
                                        VAR_8);
            VAR_9 += VAR_10;
            VAR_4 += VAR_10;
            VAR_6 -= VAR_10;
        }
    }

    VAR_10 = 0;
    if (! FUNC_5(VAR_3, VAR_12, VAR_4, &VAR_10,
                            VAR_6, VAR_7, VAR_8)) {
        return VAR_0;
    }

    VAR_9 += VAR_10;
    * VAR_5 = VAR_9;


    FUNC_7(VAR_11 + 6, VAR_9,
                    4);

    if (FUNC_0(VAR_13->rsiz)) {
        FUNC_1(VAR_3, VAR_9);
    }

    return VAR_1;
}
