
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int minimum_num_resolutions; TYPE_6__* resolutions; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_13__ {int whole_tile_decoding; TYPE_3__* image; TYPE_2__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_14__ {scalar_t__ win_x1; scalar_t__ win_x0; scalar_t__ win_y1; scalar_t__ win_y0; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_6__ opj_tcd_resolution_t ;
struct TYPE_15__ {int prec; } ;
typedef TYPE_7__ opj_image_comp_t ;
struct TYPE_11__ {scalar_t__ numcomps; TYPE_7__* comps; } ;
struct TYPE_10__ {TYPE_1__* tiles; } ;
struct TYPE_9__ {TYPE_4__* comps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_BOOL ;


 scalar_t__ VAR_0 ;

OPJ_UINT32 FUNC_0(opj_tcd_t *VAR_1,
        OPJ_BOOL VAR_2)
{
    OPJ_UINT32 VAR_3;
    OPJ_UINT32 VAR_4 = 0;
    opj_image_comp_t * VAR_5 = 00;
    opj_tcd_tilecomp_t * VAR_6 = 00;
    opj_tcd_resolution_t * VAR_7 = 00;
    OPJ_UINT32 VAR_8, VAR_9;
    OPJ_UINT32 VAR_10;

    VAR_6 = VAR_1->tcd_image->tiles->comps;
    VAR_5 = VAR_1->image->comps;

    for (VAR_3 = 0; VAR_3 < VAR_1->image->numcomps; ++VAR_3) {
        OPJ_UINT32 VAR_11, VAR_12;
        VAR_8 = VAR_5->prec >> 3;
        VAR_9 = VAR_5->prec & 7;

        if (VAR_9) {
            ++VAR_8;
        }

        if (VAR_8 == 3) {
            VAR_8 = 4;
        }

        VAR_7 = VAR_6->resolutions + VAR_6->minimum_num_resolutions - 1;
        if (VAR_2 && !VAR_1->whole_tile_decoding) {
            VAR_11 = VAR_7->win_x1 - VAR_7->win_x0;
            VAR_12 = VAR_7->win_y1 - VAR_7->win_y0;
        } else {
            VAR_11 = (OPJ_UINT32)(VAR_7->x1 - VAR_7->x0);
            VAR_12 = (OPJ_UINT32)(VAR_7->y1 - VAR_7->y0);
        }
        if (VAR_12 > 0 && VAR_0 / VAR_11 < VAR_12) {
            return VAR_0;
        }
        VAR_10 = VAR_11 * VAR_12;
        if (VAR_8 && VAR_0 / VAR_8 < VAR_10) {
            return VAR_0;
        }
        VAR_10 *= VAR_8;

        if (VAR_10 > VAR_0 - VAR_4) {
            return VAR_0;
        }
        VAR_4 += VAR_10;
        ++VAR_5;
        ++VAR_6;
    }

    return VAR_4;
}
