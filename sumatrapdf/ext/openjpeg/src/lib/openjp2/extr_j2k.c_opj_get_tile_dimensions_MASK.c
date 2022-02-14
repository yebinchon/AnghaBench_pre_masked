
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ y0; scalar_t__ x0; scalar_t__ y1; scalar_t__ x1; } ;
typedef TYPE_1__ opj_tcd_tilecomp_t ;
struct TYPE_8__ {scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_9__ {int prec; scalar_t__ dx; scalar_t__ dy; } ;
typedef TYPE_3__ opj_image_comp_t ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(opj_image_t * VAR_0,
                                    opj_tcd_tilecomp_t * VAR_1,
                                    opj_image_comp_t * VAR_2,
                                    OPJ_UINT32* VAR_3,
                                    OPJ_UINT32* VAR_4,
                                    OPJ_UINT32* VAR_5,
                                    OPJ_UINT32* VAR_6,
                                    OPJ_UINT32* VAR_7,
                                    OPJ_UINT32* VAR_8,
                                    OPJ_UINT32* VAR_9,
                                    OPJ_UINT32* VAR_10)
{
    OPJ_UINT32 VAR_11;
    *VAR_3 = VAR_2->prec >> 3;
    VAR_11 = VAR_2->prec & 7;
    if (VAR_11) {
        *VAR_3 += 1;
    }

    if (*VAR_3 == 3) {
        *VAR_3 = 4;
    }

    *VAR_4 = (OPJ_UINT32)(VAR_1->x1 - VAR_1->x0);
    *VAR_5 = (OPJ_UINT32)(VAR_1->y1 - VAR_1->y0);
    *VAR_6 = (OPJ_UINT32)FUNC_0((OPJ_INT32)VAR_0->x0,
                  (OPJ_INT32)VAR_2->dx);
    *VAR_7 = (OPJ_UINT32)FUNC_0((OPJ_INT32)VAR_0->y0,
                  (OPJ_INT32)VAR_2->dy);
    *VAR_8 = (OPJ_UINT32)FUNC_0((OPJ_INT32)VAR_0->x1 -
                     (OPJ_INT32)VAR_0->x0, (OPJ_INT32)VAR_2->dx);
    *VAR_9 = *VAR_8 - *VAR_4;
    *VAR_10 = ((OPJ_UINT32)VAR_1->x0 - *VAR_6) + ((
                         OPJ_UINT32)VAR_1->y0 - *VAR_7) * *VAR_8;
}
