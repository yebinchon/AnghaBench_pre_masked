
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int opj_stream_private_t ;
struct TYPE_31__ {int tw; int th; scalar_t__ tx0; scalar_t__ ty0; scalar_t__ tdx; scalar_t__ tdy; TYPE_14__* tcps; } ;
struct TYPE_29__ {int m_state; } ;
struct TYPE_30__ {TYPE_7__ m_decoder; } ;
struct TYPE_19__ {TYPE_9__ m_cp; TYPE_8__ m_specific_param; TYPE_10__* m_private_image; TYPE_13__* m_output_image; TYPE_12__* m_tcd; scalar_t__ m_current_tile_number; } ;
typedef TYPE_11__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
struct TYPE_28__ {TYPE_5__* tiles; } ;
struct TYPE_27__ {TYPE_4__* comps; } ;
struct TYPE_26__ {int * data; } ;
struct TYPE_25__ {TYPE_2__* comps; } ;
struct TYPE_24__ {int resno_decoded; } ;
struct TYPE_23__ {int resno_decoded; int * data; } ;
struct TYPE_22__ {int * m_data; } ;
struct TYPE_21__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; size_t numcomps; TYPE_1__* comps; } ;
struct TYPE_20__ {TYPE_6__* tcd_image; TYPE_3__* image; } ;
struct TYPE_18__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_11__*,size_t,int *,int ,int *,int *) ;
 int FUNC_3 (TYPE_11__*,size_t*,int *,int *,int *,int *,int *,size_t*,int *,int *,int *) ;
 int FUNC_4 (TYPE_14__*) ;
 int FUNC_5 (TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_7(opj_j2k_t *VAR_6,
                                     opj_stream_private_t *VAR_7,
                                     opj_event_mgr_t * VAR_8)
{
    OPJ_BOOL VAR_9 = VAR_5;
    OPJ_UINT32 VAR_10;
    OPJ_INT32 VAR_11, VAR_12, VAR_13, VAR_14;
    OPJ_UINT32 VAR_15;
    OPJ_UINT32 VAR_16 = 0;



    if (VAR_6->m_cp.tw == 1 && VAR_6->m_cp.th == 1 &&
            VAR_6->m_cp.tx0 == 0 && VAR_6->m_cp.ty0 == 0 &&
            VAR_6->m_output_image->x0 == 0 &&
            VAR_6->m_output_image->y0 == 0 &&
            VAR_6->m_output_image->x1 == VAR_6->m_cp.tdx &&
            VAR_6->m_output_image->y1 == VAR_6->m_cp.tdy) {
        OPJ_UINT32 VAR_17;
        if (! FUNC_3(VAR_6,
                                       &VAR_10,
                                       ((void*)0),
                                       &VAR_11, &VAR_12,
                                       &VAR_13, &VAR_14,
                                       &VAR_15,
                                       &VAR_9,
                                       VAR_7,
                                       VAR_8)) {
            return VAR_4;
        }

        if (! FUNC_2(VAR_6, VAR_10, ((void*)0), 0,
                                  VAR_7, VAR_8)) {
            FUNC_0(VAR_8, VAR_0, "Failed to decode tile 1/1\n");
            return VAR_4;
        }


        for (VAR_17 = 0; VAR_17 < VAR_6->m_output_image->numcomps; VAR_17++) {
            FUNC_1(VAR_6->m_output_image->comps[VAR_17].data);
            VAR_6->m_output_image->comps[VAR_17].data =
                VAR_6->m_tcd->tcd_image->tiles->comps[VAR_17].data;
            VAR_6->m_output_image->comps[VAR_17].resno_decoded =
                VAR_6->m_tcd->image->comps[VAR_17].resno_decoded;
            VAR_6->m_tcd->tcd_image->tiles->comps[VAR_17].data = ((void*)0);
        }

        return VAR_5;
    }

    for (;;) {
        if (VAR_6->m_cp.tw == 1 && VAR_6->m_cp.th == 1 &&
                VAR_6->m_cp.tcps[0].m_data != ((void*)0)) {
            VAR_10 = 0;
            VAR_6->m_current_tile_number = 0;
            VAR_6->m_specific_param.m_decoder.m_state |= VAR_2;
        } else {
            if (! FUNC_3(VAR_6,
                                           &VAR_10,
                                           ((void*)0),
                                           &VAR_11, &VAR_12,
                                           &VAR_13, &VAR_14,
                                           &VAR_15,
                                           &VAR_9,
                                           VAR_7,
                                           VAR_8)) {
                return VAR_4;
            }

            if (! VAR_9) {
                break;
            }
        }

        if (! FUNC_2(VAR_6, VAR_10, ((void*)0), 0,
                                  VAR_7, VAR_8)) {
            FUNC_0(VAR_8, VAR_0, "Failed to decode tile %d/%d\n",
                          VAR_10 + 1, VAR_6->m_cp.th * VAR_6->m_cp.tw);
            return VAR_4;
        }

        FUNC_0(VAR_8, VAR_1, "Tile %d/%d has been decoded.\n",
                      VAR_10 + 1, VAR_6->m_cp.th * VAR_6->m_cp.tw);

        if (! FUNC_5(VAR_6->m_tcd,
                                        VAR_6->m_output_image)) {
            return VAR_4;
        }

        if (VAR_6->m_cp.tw == 1 && VAR_6->m_cp.th == 1 &&
                !(VAR_6->m_output_image->x0 == VAR_6->m_private_image->x0 &&
                  VAR_6->m_output_image->y0 == VAR_6->m_private_image->y0 &&
                  VAR_6->m_output_image->x1 == VAR_6->m_private_image->x1 &&
                  VAR_6->m_output_image->y1 == VAR_6->m_private_image->y1)) {

        } else {
            FUNC_4(&VAR_6->m_cp.tcps[VAR_10]);
        }

        FUNC_0(VAR_8, VAR_1,
                      "Image data has been updated with tile %d.\n\n", VAR_10 + 1);

        if (FUNC_6(VAR_7) == 0
                && VAR_6->m_specific_param.m_decoder.m_state == VAR_3) {
            break;
        }
        if (++VAR_16 == VAR_6->m_cp.th * VAR_6->m_cp.tw) {
            break;
        }
    }

    return VAR_5;
}
