
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {size_t numresolutions; scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_6__ opj_tcd_tilecomp_t ;
struct TYPE_16__ {int win_y1; int win_x1; int win_y0; int win_x0; TYPE_5__* image; TYPE_4__* tcd_image; TYPE_2__* tcp; } ;
typedef TYPE_7__ opj_tcd_t ;
struct TYPE_17__ {int dy; int dx; } ;
typedef TYPE_8__ opj_image_comp_t ;
struct TYPE_14__ {TYPE_8__* comps; } ;
struct TYPE_13__ {TYPE_3__* tiles; } ;
struct TYPE_12__ {TYPE_6__* comps; } ;
struct TYPE_11__ {TYPE_1__* tccps; } ;
struct TYPE_10__ {int qmfbid; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (size_t,size_t) ;
 size_t FUNC_3 (size_t,int ) ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,size_t,int) ;

OPJ_BOOL FUNC_6(opj_tcd_t *VAR_0,
        OPJ_UINT32 VAR_1,
        OPJ_UINT32 VAR_2,
        OPJ_UINT32 VAR_3,
        OPJ_UINT32 VAR_4,
        OPJ_UINT32 VAR_5,
        OPJ_UINT32 VAR_6,
        OPJ_UINT32 VAR_7)
{
    OPJ_UINT32 VAR_8 = (VAR_0->tcp->tccps[VAR_1].qmfbid == 1) ? 2 : 3;
    opj_tcd_tilecomp_t *VAR_9 = &(VAR_0->tcd_image->tiles->comps[VAR_1]);
    opj_image_comp_t* VAR_10 = &(VAR_0->image->comps[VAR_1]);


    OPJ_UINT32 VAR_11 = FUNC_3(
                          (OPJ_UINT32)VAR_9->x0,
                          FUNC_1(VAR_0->win_x0, VAR_10->dx));
    OPJ_UINT32 VAR_12 = FUNC_3(
                          (OPJ_UINT32)VAR_9->y0,
                          FUNC_1(VAR_0->win_y0, VAR_10->dy));
    OPJ_UINT32 VAR_13 = FUNC_4(
                          (OPJ_UINT32)VAR_9->x1,
                          FUNC_1(VAR_0->win_x1, VAR_10->dx));
    OPJ_UINT32 VAR_14 = FUNC_4(
                          (OPJ_UINT32)VAR_9->y1,
                          FUNC_1(VAR_0->win_y1, VAR_10->dy));

    OPJ_UINT32 VAR_15 = (VAR_2 == 0) ?
                    VAR_9->numresolutions - 1 :
                    VAR_9->numresolutions - VAR_2;


    OPJ_UINT32 VAR_16 = VAR_3 & 1;
    OPJ_UINT32 VAR_17 = VAR_3 >> 1;
    OPJ_UINT32 VAR_18 = (VAR_15 == 0) ? VAR_11 :
                      (VAR_11 <= (1U << (VAR_15 - 1)) * VAR_16) ? 0 :
                      FUNC_2(VAR_11 - (1U << (VAR_15 - 1)) * VAR_16, VAR_15);
    OPJ_UINT32 VAR_19 = (VAR_15 == 0) ? VAR_12 :
                      (VAR_12 <= (1U << (VAR_15 - 1)) * VAR_17) ? 0 :
                      FUNC_2(VAR_12 - (1U << (VAR_15 - 1)) * VAR_17, VAR_15);
    OPJ_UINT32 VAR_20 = (VAR_15 == 0) ? VAR_13 :
                      (VAR_13 <= (1U << (VAR_15 - 1)) * VAR_16) ? 0 :
                      FUNC_2(VAR_13 - (1U << (VAR_15 - 1)) * VAR_16, VAR_15);
    OPJ_UINT32 VAR_21 = (VAR_15 == 0) ? VAR_14 :
                      (VAR_14 <= (1U << (VAR_15 - 1)) * VAR_17) ? 0 :
                      FUNC_2(VAR_14 - (1U << (VAR_15 - 1)) * VAR_17, VAR_15);
    OPJ_BOOL VAR_22;

    if (VAR_18 < VAR_8) {
        VAR_18 = 0;
    } else {
        VAR_18 -= VAR_8;
    }
    if (VAR_19 < VAR_8) {
        VAR_19 = 0;
    } else {
        VAR_19 -= VAR_8;
    }
    VAR_20 = FUNC_0(VAR_20, VAR_8);
    VAR_21 = FUNC_0(VAR_21, VAR_8);

    VAR_22 = VAR_4 < VAR_20 && VAR_5 < VAR_21 && VAR_6 > VAR_18 &&
                 VAR_7 > VAR_19;







    return VAR_22;
}
