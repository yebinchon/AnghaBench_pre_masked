
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* data; int prec; scalar_t__ sgnd; scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_1__ opj_image_comp_t ;
typedef int OPJ_UINT32 ;
typedef size_t OPJ_SIZE_T ;
typedef int OPJ_INT32 ;



void FUNC_0(opj_image_comp_t* VAR_0, OPJ_UINT32 VAR_1)
{
    OPJ_SIZE_T VAR_2;
    OPJ_SIZE_T VAR_3;
    OPJ_UINT32 VAR_4 = (OPJ_UINT32)((OPJ_INT32) - 1);

    VAR_3 = (OPJ_SIZE_T)VAR_0->w * (OPJ_SIZE_T)VAR_0->h;
    if (VAR_1 < 32) {
        VAR_4 = (1U << VAR_1) - 1U;
    }

    if (VAR_0->sgnd) {
        OPJ_INT32* VAR_5 = VAR_0->data;
        OPJ_INT32 VAR_6 = (OPJ_INT32)(VAR_4 / 2U);
        OPJ_INT32 VAR_7 = -VAR_6 - 1;
        for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
            if (VAR_5[VAR_2] > VAR_6) {
                VAR_5[VAR_2] = VAR_6;
            } else if (VAR_5[VAR_2] < VAR_7) {
                VAR_5[VAR_2] = VAR_7;
            }
        }
    } else {
        OPJ_UINT32* VAR_8 = (OPJ_UINT32*)VAR_0->data;
        for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
            if (VAR_8[VAR_2] > VAR_4) {
                VAR_8[VAR_2] = VAR_4;
            }
        }
    }
    VAR_0->prec = VAR_1;
}
