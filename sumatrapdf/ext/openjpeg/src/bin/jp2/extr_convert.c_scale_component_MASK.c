
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prec; int* data; scalar_t__ bpp; scalar_t__ sgnd; scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_1__ opj_image_comp_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef size_t OPJ_SIZE_T ;
typedef int OPJ_INT32 ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

void FUNC_1(opj_image_comp_t* VAR_0, OPJ_UINT32 VAR_1)
{
    int VAR_2;
    OPJ_SIZE_T VAR_3, VAR_4;

    if (VAR_0->prec == VAR_1) {
        return;
    }
    if (VAR_0->prec < VAR_1) {
        FUNC_0(VAR_0, VAR_1);
        return;
    }
    VAR_2 = (int)(VAR_0->prec - VAR_1);
    VAR_4 = (OPJ_SIZE_T)VAR_0->w * (OPJ_SIZE_T)VAR_0->h;
    if (VAR_0->sgnd) {
        OPJ_INT32* VAR_5 = VAR_0->data;
        for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
            VAR_5[VAR_3] >>= VAR_2;
        }
    } else {
        OPJ_UINT32* VAR_6 = (OPJ_UINT32*)VAR_0->data;
        for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
            VAR_6[VAR_3] >>= VAR_2;
        }
    }
    VAR_0->bpp = VAR_1;
    VAR_0->prec = VAR_1;
}
