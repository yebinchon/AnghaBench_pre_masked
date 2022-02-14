
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int opj_stream_private_t ;
struct TYPE_10__ {scalar_t__ m_current_poc_tile_part_number; scalar_t__ m_current_tile_part_number; } ;
struct TYPE_11__ {TYPE_3__ m_encoder; } ;
struct TYPE_9__ {int tw; int th; TYPE_1__* tcps; } ;
struct TYPE_12__ {size_t m_current_tile_number; TYPE_6__* m_tcd; TYPE_4__ m_specific_param; TYPE_2__ m_cp; } ;
typedef TYPE_5__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
struct TYPE_13__ {int cur_totnum_tp; } ;
struct TYPE_8__ {int m_nb_tile_parts; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (TYPE_6__*,size_t,int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_2(opj_j2k_t * VAR_4,
                                       OPJ_UINT32 VAR_5,
                                       opj_stream_private_t *VAR_6,
                                       opj_event_mgr_t * VAR_7)
{
    (void)VAR_6;
    if (VAR_5 != VAR_4->m_current_tile_number) {
        FUNC_0(VAR_7, VAR_0, "The given tile index does not match.");
        return VAR_2;
    }

    FUNC_0(VAR_7, VAR_1, "tile number %d / %d\n",
                  VAR_4->m_current_tile_number + 1, VAR_4->m_cp.tw * VAR_4->m_cp.th);

    VAR_4->m_specific_param.m_encoder.m_current_tile_part_number = 0;
    VAR_4->m_tcd->cur_totnum_tp = VAR_4->m_cp.tcps[VAR_5].m_nb_tile_parts;
    VAR_4->m_specific_param.m_encoder.m_current_poc_tile_part_number = 0;


    if (! FUNC_1(VAR_4->m_tcd, VAR_4->m_current_tile_number,
                                   VAR_7)) {
        return VAR_2;
    }

    return VAR_3;
}
