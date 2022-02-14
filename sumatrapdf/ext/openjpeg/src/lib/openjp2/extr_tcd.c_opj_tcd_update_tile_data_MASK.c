
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int val ;
struct TYPE_13__ {int minimum_num_resolutions; int const* data_win; int const* data; TYPE_6__* resolutions; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_14__ {scalar_t__ whole_tile_decoding; TYPE_3__* image; TYPE_2__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_15__ {scalar_t__ win_x1; scalar_t__ win_x0; scalar_t__ win_y1; scalar_t__ win_y0; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
typedef TYPE_6__ opj_tcd_resolution_t ;
struct TYPE_16__ {int prec; int resno_decoded; int sgnd; } ;
typedef TYPE_7__ opj_image_comp_t ;
struct TYPE_12__ {scalar_t__ numcomps; TYPE_7__* comps; } ;
struct TYPE_11__ {TYPE_1__* tiles; } ;
struct TYPE_10__ {TYPE_4__* comps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int const OPJ_INT32 ;
typedef int const OPJ_INT16 ;
typedef void* OPJ_CHAR ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;

OPJ_BOOL FUNC_2(opj_tcd_t *VAR_3,
                                  OPJ_BYTE * VAR_4,
                                  OPJ_UINT32 VAR_5
                                 )
{
    OPJ_UINT32 VAR_6, VAR_7, VAR_8, VAR_9 = 0;
    opj_image_comp_t * VAR_10 = 00;
    opj_tcd_tilecomp_t * VAR_11 = 00;
    opj_tcd_resolution_t * VAR_12;
    OPJ_UINT32 VAR_13, VAR_14;
    OPJ_UINT32 VAR_15, VAR_16, VAR_17;

    VAR_9 = FUNC_1(VAR_3, VAR_1);
    if (VAR_9 == VAR_2 || VAR_9 > VAR_5) {
        return VAR_0;
    }

    VAR_11 = VAR_3->tcd_image->tiles->comps;
    VAR_10 = VAR_3->image->comps;

    for (VAR_6 = 0; VAR_6 < VAR_3->image->numcomps; ++VAR_6) {
        const OPJ_INT32* VAR_18;
        VAR_13 = VAR_10->prec >> 3;
        VAR_14 = VAR_10->prec & 7;
        VAR_12 = VAR_11->resolutions + VAR_10->resno_decoded;
        if (VAR_3->whole_tile_decoding) {
            VAR_16 = (OPJ_UINT32)(VAR_12->x1 - VAR_12->x0);
            VAR_17 = (OPJ_UINT32)(VAR_12->y1 - VAR_12->y0);
            VAR_15 = (OPJ_UINT32)(VAR_11->resolutions[VAR_11->minimum_num_resolutions -
                                                                     1].x1 -
                                    VAR_11->resolutions[VAR_11->minimum_num_resolutions - 1].x0) - VAR_16;
            VAR_18 = VAR_11->data;
        } else {
            VAR_16 = VAR_12->win_x1 - VAR_12->win_x0;
            VAR_17 = VAR_12->win_y1 - VAR_12->win_y0;
            VAR_15 = 0;
            VAR_18 = VAR_11->data_win;
        }

        if (VAR_14) {
            ++VAR_13;
        }

        if (VAR_13 == 3) {
            VAR_13 = 4;
        }

        switch (VAR_13) {
        case 1: {
            OPJ_CHAR * VAR_19 = (OPJ_CHAR *) VAR_4;
            const OPJ_INT32 * VAR_20 = VAR_18;

            if (VAR_10->sgnd) {
                for (VAR_7 = 0; VAR_7 < VAR_17; ++VAR_7) {
                    for (VAR_8 = 0; VAR_8 < VAR_16; ++VAR_8) {
                        *(VAR_19++) = (OPJ_CHAR)(*(VAR_20++));
                    }
                    VAR_20 += VAR_15;
                }
            } else {
                for (VAR_7 = 0; VAR_7 < VAR_17; ++VAR_7) {
                    for (VAR_8 = 0; VAR_8 < VAR_16; ++VAR_8) {
                        *(VAR_19++) = (OPJ_CHAR)((*(VAR_20++)) & 0xff);
                    }
                    VAR_20 += VAR_15;
                }
            }

            VAR_4 = (OPJ_BYTE *)VAR_19;
        }
        break;
        case 2: {
            const OPJ_INT32 * VAR_21 = VAR_18;
            OPJ_INT16 * VAR_22 = (OPJ_INT16 *) VAR_4;

            if (VAR_10->sgnd) {
                for (VAR_7 = 0; VAR_7 < VAR_17; ++VAR_7) {
                    for (VAR_8 = 0; VAR_8 < VAR_16; ++VAR_8) {
                        OPJ_INT16 VAR_23 = (OPJ_INT16)(*(VAR_21++));
                        FUNC_0(VAR_22, &VAR_23, sizeof(VAR_23));
                        VAR_22 ++;
                    }
                    VAR_21 += VAR_15;
                }
            } else {
                for (VAR_7 = 0; VAR_7 < VAR_17; ++VAR_7) {
                    for (VAR_8 = 0; VAR_8 < VAR_16; ++VAR_8) {
                        OPJ_INT16 VAR_24 = (OPJ_INT16)((*(VAR_21++)) & 0xffff);
                        FUNC_0(VAR_22, &VAR_24, sizeof(VAR_24));
                        VAR_22 ++;
                    }
                    VAR_21 += VAR_15;
                }
            }

            VAR_4 = (OPJ_BYTE*) VAR_22;
        }
        break;
        case 4: {
            OPJ_INT32 * VAR_25 = (OPJ_INT32 *) VAR_4;
            const OPJ_INT32 * VAR_26 = VAR_18;

            for (VAR_7 = 0; VAR_7 < VAR_17; ++VAR_7) {
                FUNC_0(VAR_25, VAR_26, VAR_16 * sizeof(OPJ_INT32));
                VAR_25 += VAR_16;
                VAR_26 += VAR_16 + VAR_15;
            }

            VAR_4 = (OPJ_BYTE*) VAR_25;
        }
        break;
        }

        ++VAR_10;
        ++VAR_11;
    }

    return VAR_1;
}
