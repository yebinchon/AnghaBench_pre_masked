
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct opj_cp {scalar_t__ tx0; scalar_t__ ty0; unsigned int tw; unsigned int tdx; unsigned int th; unsigned int tdy; } ;
struct TYPE_4__ {scalar_t__ numcomps; TYPE_2__* comps; int y1; int x1; int y0; int x0; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_5__ {scalar_t__ y0; scalar_t__ x0; scalar_t__ h; scalar_t__ w; int factor; int dy; int dx; } ;
typedef TYPE_2__ opj_image_comp_t ;
typedef scalar_t__ OPJ_UINT32 ;


 int FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(opj_image_t * VAR_0,
                                  const struct opj_cp * VAR_1)
{
    OPJ_UINT32 VAR_2, VAR_3, VAR_4;
    OPJ_UINT32 VAR_5, VAR_6, VAR_7, VAR_8;
    OPJ_UINT32 VAR_9, VAR_10, VAR_11, VAR_12;
    opj_image_comp_t* VAR_13 = ((void*)0);

    VAR_5 = FUNC_3(VAR_1->tx0, VAR_0->x0);
    VAR_6 = FUNC_3(VAR_1->ty0, VAR_0->y0);
    VAR_7 = VAR_1->tx0 + (VAR_1->tw - 1U) *
           VAR_1->tdx;
    VAR_8 = VAR_1->ty0 + (VAR_1->th - 1U) * VAR_1->tdy;
    VAR_7 = FUNC_4(FUNC_0(VAR_7, VAR_1->tdx),
                        VAR_0->x1);
    VAR_8 = FUNC_4(FUNC_0(VAR_8, VAR_1->tdy),
                        VAR_0->y1);

    VAR_13 = VAR_0->comps;
    for (VAR_2 = 0; VAR_2 < VAR_0->numcomps; ++VAR_2) {
        VAR_9 = FUNC_1(VAR_5, VAR_13->dx);
        VAR_10 = FUNC_1(VAR_6, VAR_13->dy);
        VAR_11 = FUNC_1(VAR_7, VAR_13->dx);
        VAR_12 = FUNC_1(VAR_8, VAR_13->dy);
        VAR_3 = FUNC_2(VAR_11 - VAR_9, VAR_13->factor);
        VAR_4 = FUNC_2(VAR_12 - VAR_10, VAR_13->factor);
        VAR_13->w = VAR_3;
        VAR_13->h = VAR_4;
        VAR_13->x0 = VAR_9;
        VAR_13->y0 = VAR_10;
        ++VAR_13;
    }
}
