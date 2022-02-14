
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


struct TYPE_11__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_12__ {TYPE_3__* image; TYPE_2__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_13__ {int prec; } ;
typedef TYPE_6__ opj_image_comp_t ;
struct TYPE_10__ {scalar_t__ numcomps; TYPE_6__* comps; } ;
struct TYPE_9__ {TYPE_1__* tiles; } ;
struct TYPE_8__ {TYPE_4__* comps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_SIZE_T ;



OPJ_SIZE_T FUNC_0(opj_tcd_t *VAR_0)
{
    OPJ_UINT32 VAR_1;
    OPJ_SIZE_T VAR_2 = 0;
    opj_image_comp_t * VAR_3 = 00;
    opj_tcd_tilecomp_t * VAR_4 = 00;
    OPJ_UINT32 VAR_5, VAR_6;

    VAR_4 = VAR_0->tcd_image->tiles->comps;
    VAR_3 = VAR_0->image->comps;
    for (VAR_1 = 0; VAR_1 < VAR_0->image->numcomps; ++VAR_1) {
        VAR_5 = VAR_3->prec >> 3;
        VAR_6 = VAR_3->prec & 7;

        if (VAR_6) {
            ++VAR_5;
        }

        if (VAR_5 == 3) {
            VAR_5 = 4;
        }

        VAR_2 += VAR_5 * ((OPJ_SIZE_T)(VAR_4->x1 - VAR_4->x0) *
                                      (OPJ_SIZE_T)(VAR_4->y1 - VAR_4->y0));
        ++VAR_3;
        ++VAR_4;
    }

    return VAR_2;
}
