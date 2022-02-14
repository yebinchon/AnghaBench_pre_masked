
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


struct TYPE_14__ {int* data_win; int minimum_num_resolutions; int* data; size_t data_size; TYPE_7__* resolutions; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_15__ {size_t numcomps; TYPE_4__* comps; } ;
typedef TYPE_5__ opj_tcd_tile_t ;
struct TYPE_16__ {int whole_tile_decoding; int * used_component; TYPE_3__* image; TYPE_2__* tcp; TYPE_1__* tcd_image; } ;
typedef TYPE_6__ opj_tcd_t ;
struct TYPE_17__ {size_t win_x1; size_t win_x0; size_t win_y1; size_t win_y0; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
typedef TYPE_7__ opj_tcd_resolution_t ;
struct TYPE_18__ {int qmfbid; scalar_t__ m_dc_level_shift; } ;
typedef TYPE_8__ opj_tccp_t ;
struct TYPE_19__ {int resno_decoded; int prec; scalar_t__ sgnd; } ;
typedef TYPE_9__ opj_image_comp_t ;
struct TYPE_13__ {TYPE_9__* comps; } ;
struct TYPE_12__ {TYPE_8__* tccps; } ;
struct TYPE_11__ {TYPE_5__* tiles; } ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT64 ;
typedef int OPJ_INT32 ;
typedef scalar_t__ OPJ_FLOAT32 ;
typedef int OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static OPJ_BOOL FUNC_4(opj_tcd_t *VAR_3)
{
    OPJ_UINT32 VAR_4;
    opj_tcd_tilecomp_t * VAR_5 = 00;
    opj_tccp_t * VAR_6 = 00;
    opj_image_comp_t * VAR_7 = 00;
    opj_tcd_resolution_t* VAR_8 = 00;
    opj_tcd_tile_t * VAR_9;
    OPJ_UINT32 VAR_10, VAR_11, VAR_12, VAR_13;
    OPJ_INT32 * VAR_14;
    OPJ_INT32 VAR_15, VAR_16;
    OPJ_UINT32 VAR_17;

    VAR_9 = VAR_3->tcd_image->tiles;
    VAR_5 = VAR_9->comps;
    VAR_6 = VAR_3->tcp->tccps;
    VAR_7 = VAR_3->image->comps;

    for (VAR_4 = 0; VAR_4 < VAR_9->numcomps;
            VAR_4++, ++VAR_7, ++VAR_6, ++VAR_5) {

        if (VAR_3->used_component != ((void*)0) && !VAR_3->used_component[VAR_4]) {
            continue;
        }

        VAR_8 = VAR_5->resolutions + VAR_7->resno_decoded;

        if (!VAR_3->whole_tile_decoding) {
            VAR_10 = VAR_8->win_x1 - VAR_8->win_x0;
            VAR_11 = VAR_8->win_y1 - VAR_8->win_y0;
            VAR_17 = 0;
            VAR_14 = VAR_5->data_win;
        } else {
            VAR_10 = (OPJ_UINT32)(VAR_8->x1 - VAR_8->x0);
            VAR_11 = (OPJ_UINT32)(VAR_8->y1 - VAR_8->y0);
            VAR_17 = (OPJ_UINT32)(
                           VAR_5->resolutions[VAR_5->minimum_num_resolutions - 1].x1 -
                           VAR_5->resolutions[VAR_5->minimum_num_resolutions - 1].x0)
                       - VAR_10;
            VAR_14 = VAR_5->data;

            FUNC_0(VAR_11 == 0 ||
                   VAR_10 + VAR_17 <= VAR_5->data_size / VAR_11);
        }

        if (VAR_7->sgnd) {
            VAR_15 = -(1 << (VAR_7->prec - 1));
            VAR_16 = (1 << (VAR_7->prec - 1)) - 1;
        } else {
            VAR_15 = 0;
            VAR_16 = (OPJ_INT32)((1U << VAR_7->prec) - 1);
        }


        if (VAR_6->qmfbid == 1) {
            for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
                for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {

                    *VAR_14 = FUNC_2(*VAR_14 + VAR_6->m_dc_level_shift, VAR_15,
                                                   VAR_16);
                    ++VAR_14;
                }
                VAR_14 += VAR_17;
            }
        } else {
            for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
                for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
                    OPJ_FLOAT32 VAR_18 = *((OPJ_FLOAT32 *) VAR_14);
                    if (VAR_18 > VAR_0) {
                        *VAR_14 = VAR_16;
                    } else if (VAR_18 < VAR_1) {
                        *VAR_14 = VAR_15;
                    } else {

                        OPJ_INT64 VAR_19 = (OPJ_INT64)FUNC_3(VAR_18);
                        *VAR_14 = (OPJ_INT32)FUNC_1(
                                             VAR_19 + VAR_6->m_dc_level_shift, VAR_15, VAR_16);
                    }
                    ++VAR_14;
                }
                VAR_14 += VAR_17;
            }
        }
    }

    return VAR_2;
}
