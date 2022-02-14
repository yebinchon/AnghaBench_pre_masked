
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prec; int bpp; scalar_t__* data; scalar_t__ sgnd; scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_1__ opj_image_comp_t ;
typedef int OPJ_UINT64 ;
typedef int OPJ_UINT32 ;
typedef size_t OPJ_SIZE_T ;
typedef int OPJ_INT64 ;
typedef scalar_t__ OPJ_INT32 ;



__attribute__((used)) static void FUNC_0(opj_image_comp_t* VAR_0,
                               OPJ_UINT32 VAR_1)
{
    OPJ_SIZE_T VAR_2, VAR_3;

    VAR_3 = (OPJ_SIZE_T)VAR_0->w * (OPJ_SIZE_T)VAR_0->h;
    if (VAR_0->sgnd) {
        OPJ_INT64 VAR_4 = (OPJ_INT64)(1U << (VAR_1 - 1));
        OPJ_INT64 VAR_5 = (OPJ_INT64)(1U << (VAR_0->prec - 1));
        OPJ_INT32* VAR_6 = VAR_0->data;
        for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
            VAR_6[VAR_2] = (OPJ_INT32)(((OPJ_INT64)VAR_6[VAR_2] * VAR_4) / VAR_5);
        }
    } else {
        OPJ_UINT64 VAR_7 = (OPJ_UINT64)((1U << VAR_1) - 1U);
        OPJ_UINT64 VAR_8 = (OPJ_UINT64)((1U << VAR_0->prec) - 1U);
        OPJ_UINT32* VAR_9 = (OPJ_UINT32*)VAR_0->data;
        for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
            VAR_9[VAR_2] = (OPJ_UINT32)(((OPJ_UINT64)VAR_9[VAR_2] * VAR_7) / VAR_8);
        }
    }
    VAR_0->prec = VAR_1;
    VAR_0->bpp = VAR_1;
}
