
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


struct TYPE_11__ {size_t numresolutions; size_t minimum_num_resolutions; scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_12__ {int win_y1; int win_x1; int win_y0; int win_x0; TYPE_3__* image; TYPE_2__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_13__ {int dy; int dx; } ;
typedef TYPE_6__ opj_image_comp_t ;
struct TYPE_10__ {TYPE_6__* comps; } ;
struct TYPE_9__ {TYPE_1__* tiles; } ;
struct TYPE_8__ {TYPE_4__* comps; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (size_t,int ) ;

__attribute__((used)) static OPJ_BOOL FUNC_3(opj_tcd_t *VAR_0,
        OPJ_UINT32 VAR_1)
{
    opj_tcd_tilecomp_t* VAR_2 = &(VAR_0->tcd_image->tiles->comps[VAR_1]);
    opj_image_comp_t* VAR_3 = &(VAR_0->image->comps[VAR_1]);


    OPJ_UINT32 VAR_4 = FUNC_1(
                          (OPJ_UINT32)VAR_2->x0,
                          FUNC_0(VAR_0->win_x0, VAR_3->dx));
    OPJ_UINT32 VAR_5 = FUNC_1(
                          (OPJ_UINT32)VAR_2->y0,
                          FUNC_0(VAR_0->win_y0, VAR_3->dy));
    OPJ_UINT32 VAR_6 = FUNC_2(
                          (OPJ_UINT32)VAR_2->x1,
                          FUNC_0(VAR_0->win_x1, VAR_3->dx));
    OPJ_UINT32 VAR_7 = FUNC_2(
                          (OPJ_UINT32)VAR_2->y1,
                          FUNC_0(VAR_0->win_y1, VAR_3->dy));

    OPJ_UINT32 VAR_8 = VAR_2->numresolutions - VAR_2->minimum_num_resolutions;


    return (VAR_4 >= (OPJ_UINT32)VAR_2->x0 &&
            VAR_5 >= (OPJ_UINT32)VAR_2->y0 &&
            VAR_6 <= (OPJ_UINT32)VAR_2->x1 &&
            VAR_7 <= (OPJ_UINT32)VAR_2->y1 &&
            (VAR_8 >= 32 ||
             (((VAR_4 - (OPJ_UINT32)VAR_2->x0) >> VAR_8) == 0 &&
              ((VAR_5 - (OPJ_UINT32)VAR_2->y0) >> VAR_8) == 0 &&
              (((OPJ_UINT32)VAR_2->x1 - VAR_6) >> VAR_8) == 0 &&
              (((OPJ_UINT32)VAR_2->y1 - VAR_7) >> VAR_8) == 0)));
}
