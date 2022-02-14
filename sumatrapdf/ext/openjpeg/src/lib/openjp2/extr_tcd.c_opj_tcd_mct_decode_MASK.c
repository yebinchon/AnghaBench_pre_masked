
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int mct; TYPE_1__* tccps; scalar_t__ m_mct_decoding_matrix; } ;
typedef TYPE_5__ opj_tcp_t ;
struct TYPE_16__ {int minimum_num_resolutions; scalar_t__ data_win; scalar_t__ data; TYPE_9__* resolutions; } ;
typedef TYPE_6__ opj_tcd_tilecomp_t ;
struct TYPE_17__ {int numcomps; TYPE_6__* comps; } ;
typedef TYPE_7__ opj_tcd_tile_t ;
struct TYPE_18__ {scalar_t__ whole_tile_decoding; TYPE_4__* image; int * used_component; TYPE_5__* tcp; TYPE_2__* tcd_image; } ;
typedef TYPE_8__ opj_tcd_t ;
struct TYPE_19__ {int x1; int x0; int y1; int y0; size_t win_x1; size_t win_x0; size_t win_y1; size_t win_y0; } ;
typedef TYPE_9__ opj_tcd_resolution_t ;
typedef int opj_event_mgr_t ;
struct TYPE_14__ {TYPE_3__* comps; } ;
struct TYPE_13__ {scalar_t__ resno_decoded; int sgnd; } ;
struct TYPE_12__ {TYPE_7__* tiles; } ;
struct TYPE_11__ {int qmfbid; } ;
typedef size_t OPJ_UINT32 ;
typedef size_t OPJ_SIZE_T ;
typedef int OPJ_FLOAT32 ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,size_t) ;
 int FUNC_4 (int *,size_t,int **,size_t,int ) ;
 int FUNC_5 (int *,int *,int *,size_t) ;

__attribute__((used)) static OPJ_BOOL FUNC_6(opj_tcd_t *VAR_3, opj_event_mgr_t *VAR_4)
{
    opj_tcd_tile_t * VAR_5 = VAR_3->tcd_image->tiles;
    opj_tcp_t * VAR_6 = VAR_3->tcp;
    opj_tcd_tilecomp_t * VAR_7 = VAR_5->comps;
    OPJ_UINT32 VAR_8, VAR_9;

    if (VAR_6->mct == 0 || VAR_3->used_component != ((void*)0)) {
        return VAR_2;
    }

    if (VAR_3->whole_tile_decoding) {
        opj_tcd_resolution_t* VAR_10 = VAR_5->comps[0].resolutions +
                                          VAR_7->minimum_num_resolutions - 1;




        VAR_8 = (OPJ_UINT32)((VAR_10->x1 - VAR_10->x0) *
                                 (VAR_10->y1 - VAR_10->y0));
        if (VAR_5->numcomps >= 3) {
            if (VAR_7->minimum_num_resolutions !=
                    VAR_5->comps[1].minimum_num_resolutions ||
                    VAR_7->minimum_num_resolutions !=
                    VAR_5->comps[2].minimum_num_resolutions) {
                FUNC_0(VAR_4, VAR_0,
                              "Tiles don't all have the same dimension. Skip the MCT step.\n");
                return VAR_1;
            }
        }
        if (VAR_5->numcomps >= 3) {
            opj_tcd_resolution_t* VAR_11 = VAR_5->comps[1].resolutions +
                                              VAR_7->minimum_num_resolutions - 1;
            opj_tcd_resolution_t* VAR_12 = VAR_5->comps[2].resolutions +
                                              VAR_7->minimum_num_resolutions - 1;

            if (VAR_3->image->comps[0].resno_decoded !=
                    VAR_3->image->comps[1].resno_decoded ||
                    VAR_3->image->comps[0].resno_decoded !=
                    VAR_3->image->comps[2].resno_decoded ||
                    (OPJ_SIZE_T)(VAR_11->x1 - VAR_11->x0) *
                    (OPJ_SIZE_T)(VAR_11->y1 - VAR_11->y0) != VAR_8 ||
                    (OPJ_SIZE_T)(VAR_12->x1 - VAR_12->x0) *
                    (OPJ_SIZE_T)(VAR_12->y1 - VAR_12->y0) != VAR_8) {
                FUNC_0(VAR_4, VAR_0,
                              "Tiles don't all have the same dimension. Skip the MCT step.\n");
                return VAR_1;
            }
        }
    } else {
        opj_tcd_resolution_t* VAR_13 = VAR_5->comps[0].resolutions +
                                          VAR_3->image->comps[0].resno_decoded;

        VAR_8 = (VAR_13->win_x1 - VAR_13->win_x0) *
                    (VAR_13->win_y1 - VAR_13->win_y0);
        if (VAR_5->numcomps >= 3) {
            opj_tcd_resolution_t* VAR_14 = VAR_5->comps[1].resolutions +
                                              VAR_3->image->comps[1].resno_decoded;
            opj_tcd_resolution_t* VAR_15 = VAR_5->comps[2].resolutions +
                                              VAR_3->image->comps[2].resno_decoded;

            if (VAR_3->image->comps[0].resno_decoded !=
                    VAR_3->image->comps[1].resno_decoded ||
                    VAR_3->image->comps[0].resno_decoded !=
                    VAR_3->image->comps[2].resno_decoded ||
                    (OPJ_SIZE_T)(VAR_14->win_x1 - VAR_14->win_x0) *
                    (OPJ_SIZE_T)(VAR_14->win_y1 - VAR_14->win_y0) != VAR_8 ||
                    (OPJ_SIZE_T)(VAR_15->win_x1 - VAR_15->win_x0) *
                    (OPJ_SIZE_T)(VAR_15->win_y1 - VAR_15->win_y0) != VAR_8) {
                FUNC_0(VAR_4, VAR_0,
                              "Tiles don't all have the same dimension. Skip the MCT step.\n");
                return VAR_1;
            }
        }
    }

    if (VAR_5->numcomps >= 3) {
        if (VAR_6->mct == 2) {
            OPJ_BYTE ** VAR_16;

            if (! VAR_6->m_mct_decoding_matrix) {
                return VAR_2;
            }

            VAR_16 = (OPJ_BYTE **) FUNC_2(VAR_5->numcomps * sizeof(OPJ_BYTE*));
            if (! VAR_16) {
                return VAR_1;
            }

            for (VAR_9 = 0; VAR_9 < VAR_5->numcomps; ++VAR_9) {
                if (VAR_3->whole_tile_decoding) {
                    VAR_16[VAR_9] = (OPJ_BYTE*) VAR_7->data;
                } else {
                    VAR_16[VAR_9] = (OPJ_BYTE*) VAR_7->data_win;
                }
                ++VAR_7;
            }

            if (! FUNC_4(
                        (OPJ_BYTE*) VAR_6->m_mct_decoding_matrix,

                        VAR_8,

                        VAR_16,

                        VAR_5->numcomps,

                        VAR_3->image->comps->sgnd)) {
                FUNC_1(VAR_16);
                return VAR_1;
            }

            FUNC_1(VAR_16);
        } else {
            if (VAR_6->tccps->qmfbid == 1) {
                if (VAR_3->whole_tile_decoding) {
                    FUNC_3(VAR_5->comps[0].data,
                                   VAR_5->comps[1].data,
                                   VAR_5->comps[2].data,
                                   VAR_8);
                } else {
                    FUNC_3(VAR_5->comps[0].data_win,
                                   VAR_5->comps[1].data_win,
                                   VAR_5->comps[2].data_win,
                                   VAR_8);
                }
            } else {
                if (VAR_3->whole_tile_decoding) {
                    FUNC_5((OPJ_FLOAT32*)VAR_5->comps[0].data,
                                        (OPJ_FLOAT32*)VAR_5->comps[1].data,
                                        (OPJ_FLOAT32*)VAR_5->comps[2].data,
                                        VAR_8);
                } else {
                    FUNC_5((OPJ_FLOAT32*)VAR_5->comps[0].data_win,
                                        (OPJ_FLOAT32*)VAR_5->comps[1].data_win,
                                        (OPJ_FLOAT32*)VAR_5->comps[2].data_win,
                                        VAR_8);
                }
            }
        }
    } else {
        FUNC_0(VAR_4, VAR_0,
                      "Number of components (%d) is inconsistent with a MCT. Skip the MCT step.\n",
                      VAR_5->numcomps);
    }

    return VAR_2;
}
