
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_17__ {size_t tw; size_t th; TYPE_8__* tcps; } ;
struct TYPE_15__ {scalar_t__ m_state; scalar_t__ m_last_sot_read_pos; scalar_t__ m_tile_ind_to_dec; } ;
struct TYPE_16__ {TYPE_3__ m_decoder; } ;
struct TYPE_19__ {TYPE_6__* cstr_index; TYPE_5__ m_cp; int m_output_image; int m_tcd; TYPE_4__ m_specific_param; } ;
typedef TYPE_7__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
struct TYPE_20__ {int m_current_tile_part_number; } ;
struct TYPE_18__ {scalar_t__ main_head_end; TYPE_2__* tile_index; } ;
struct TYPE_14__ {TYPE_1__* tp_index; int nb_tps; } ;
struct TYPE_13__ {scalar_t__ start_pos; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,size_t,int *,int ,int *,int *) ;
 int FUNC_3 (TYPE_7__*,size_t*,int *,int *,int *,int *,int *,size_t*,int *,int *,int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,scalar_t__,int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_7(opj_j2k_t *VAR_7,
                                        opj_stream_private_t *VAR_8,
                                        opj_event_mgr_t * VAR_9)
{
    OPJ_BOOL VAR_10 = VAR_6;
    OPJ_UINT32 VAR_11;
    OPJ_UINT32 VAR_12;
    OPJ_INT32 VAR_13, VAR_14, VAR_15, VAR_16;
    OPJ_UINT32 VAR_17;
    OPJ_UINT32 VAR_18;
    OPJ_UINT32 VAR_19;


    if (!VAR_7->cstr_index->tile_index) {
        if (!FUNC_1(VAR_7)) {
            return VAR_5;
        }
    }

    VAR_12 = (OPJ_UINT32)
                       VAR_7->m_specific_param.m_decoder.m_tile_ind_to_dec;
    if (VAR_7->cstr_index->tile_index)
        if (VAR_7->cstr_index->tile_index->tp_index) {
            if (! VAR_7->cstr_index->tile_index[VAR_12].nb_tps) {


                if (!(FUNC_6(VAR_8,
                                           VAR_7->m_specific_param.m_decoder.m_last_sot_read_pos + 2, VAR_9))) {
                    FUNC_0(VAR_9, VAR_0, "Problem with seek function\n");
                    return VAR_5;
                }
            } else {
                if (!(FUNC_6(VAR_8,
                                           VAR_7->cstr_index->tile_index[VAR_12].tp_index[0].start_pos + 2,
                                           VAR_9))) {
                    FUNC_0(VAR_9, VAR_0, "Problem with seek function\n");
                    return VAR_5;
                }
            }

            if (VAR_7->m_specific_param.m_decoder.m_state == VAR_3) {
                VAR_7->m_specific_param.m_decoder.m_state = VAR_4;
            }
        }





    VAR_18 = VAR_7->m_cp.tw * VAR_7->m_cp.th;
    for (VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
        VAR_7->m_cp.tcps[VAR_19].m_current_tile_part_number = -1;
    }

    for (;;) {
        if (! FUNC_3(VAR_7,
                                       &VAR_11,
                                       ((void*)0),
                                       &VAR_13, &VAR_14,
                                       &VAR_15, &VAR_16,
                                       &VAR_17,
                                       &VAR_10,
                                       VAR_8,
                                       VAR_9)) {
            return VAR_5;
        }

        if (! VAR_10) {
            break;
        }

        if (! FUNC_2(VAR_7, VAR_11, ((void*)0), 0,
                                  VAR_8, VAR_9)) {
            return VAR_5;
        }
        FUNC_0(VAR_9, VAR_1, "Tile %d/%d has been decoded.\n",
                      VAR_11 + 1, VAR_7->m_cp.th * VAR_7->m_cp.tw);

        if (! FUNC_5(VAR_7->m_tcd,
                                        VAR_7->m_output_image)) {
            return VAR_5;
        }
        FUNC_4(&VAR_7->m_cp.tcps[VAR_11]);

        FUNC_0(VAR_9, VAR_1,
                      "Image data has been updated with tile %d.\n\n", VAR_11 + 1);

        if (VAR_11 == VAR_12) {

            if (!(FUNC_6(VAR_8, VAR_7->cstr_index->main_head_end + 2,
                                       VAR_9))) {
                FUNC_0(VAR_9, VAR_0, "Problem with seek function\n");
                return VAR_5;
            }
            break;
        } else {
            FUNC_0(VAR_9, VAR_2,
                          "Tile read, decoded and updated is not the desired one (%d vs %d).\n",
                          VAR_11 + 1, VAR_12 + 1);
        }

    }

    return VAR_6;
}
