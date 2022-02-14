
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numcomps; scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; TYPE_2__* comps; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_5__ {scalar_t__ h; scalar_t__ factor; scalar_t__ y0; scalar_t__ w; scalar_t__ x0; scalar_t__ dy; scalar_t__ dx; } ;
typedef TYPE_2__ opj_image_comp_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static OPJ_BOOL FUNC_3(opj_image_t* VAR_3,
        opj_event_mgr_t * VAR_4)
{
    OPJ_UINT32 VAR_5;
    OPJ_INT32 VAR_6, VAR_7;
    opj_image_comp_t* VAR_8 = ((void*)0);

    VAR_8 = VAR_3->comps;
    for (VAR_5 = 0; VAR_5 < VAR_3->numcomps; ++VAR_5) {
        OPJ_INT32 VAR_9, VAR_10;

        VAR_8->x0 = (OPJ_UINT32)FUNC_1((OPJ_INT32)VAR_3->x0,
                         (OPJ_INT32)VAR_8->dx);
        VAR_8->y0 = (OPJ_UINT32)FUNC_1((OPJ_INT32)VAR_3->y0,
                         (OPJ_INT32)VAR_8->dy);
        VAR_6 = FUNC_1((OPJ_INT32)VAR_3->x1, (OPJ_INT32)VAR_8->dx);
        VAR_7 = FUNC_1((OPJ_INT32)VAR_3->y1, (OPJ_INT32)VAR_8->dy);

        VAR_10 = FUNC_2(VAR_6, (OPJ_INT32)VAR_8->factor)
              - FUNC_2((OPJ_INT32)VAR_8->x0, (OPJ_INT32)VAR_8->factor);
        if (VAR_10 < 0) {
            FUNC_0(VAR_4, VAR_0,
                          "Size x of the decoded component image is incorrect (comp[%d].w=%d).\n",
                          VAR_5, VAR_10);
            return VAR_1;
        }
        VAR_8->w = (OPJ_UINT32)VAR_10;

        VAR_9 = FUNC_2(VAR_7, (OPJ_INT32)VAR_8->factor)
              - FUNC_2((OPJ_INT32)VAR_8->y0, (OPJ_INT32)VAR_8->factor);
        if (VAR_9 < 0) {
            FUNC_0(VAR_4, VAR_0,
                          "Size y of the decoded component image is incorrect (comp[%d].h=%d).\n",
                          VAR_5, VAR_9);
            return VAR_1;
        }
        VAR_8->h = (OPJ_UINT32)VAR_9;

        VAR_8++;
    }

    return VAR_2;
}
