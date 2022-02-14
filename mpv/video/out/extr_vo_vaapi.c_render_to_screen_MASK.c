
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vaapi_subpic {int id; int dst_h; int dst_w; int dst_y; int dst_x; int src_h; int src_w; int src_y; int src_x; } ;
struct vaapi_osd_part {struct vaapi_subpic subpic; scalar_t__ active; } ;
struct TYPE_12__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct TYPE_11__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct TYPE_7__ {int space; } ;
struct TYPE_8__ {int w; int h; TYPE_1__ color; } ;
struct priv {int scaling; int display; struct vaapi_osd_part* osd_parts; TYPE_6__ dst_rect; TYPE_5__ src_rect; TYPE_4__* vo; TYPE_2__ image_params; scalar_t__ osd_screen; struct mp_image* black_surface; int pool; } ;
struct mp_image {int dummy; } ;
typedef scalar_t__ VASurfaceID ;
typedef int VAStatus ;
struct TYPE_10__ {TYPE_3__* x11; } ;
struct TYPE_9__ {int window; } ;


 int FUNC_0 (struct priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct mp_image* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct mp_image*,int ,int ,int,int) ;
 struct mp_image* FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct mp_image**) ;
 int FUNC_5 (struct mp_image*) ;
 int FUNC_6 (int ,int ,scalar_t__*,int,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__*,int) ;
 int FUNC_8 (int ,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct mp_image*) ;
 scalar_t__ FUNC_11 (struct priv*,struct mp_image*,struct mp_image*) ;

__attribute__((used)) static bool FUNC_12(struct priv *VAR_6, struct mp_image *VAR_7)
{
    VAStatus VAR_8;

    VASurfaceID VAR_9 = FUNC_10(VAR_7);
    if (VAR_9 == VAR_4) {
        if (!VAR_6->black_surface) {
            int VAR_10 = VAR_6->image_params.w, VAR_11 = VAR_6->image_params.h;

            int VAR_12 = VAR_0;
            VAR_6->black_surface = FUNC_3(VAR_6->pool, VAR_1, VAR_10, VAR_11);
            if (VAR_6->black_surface) {
                struct mp_image *VAR_13 = FUNC_1(VAR_12, VAR_10, VAR_11);
                if (VAR_13) {
                    FUNC_2(VAR_13, 0, 0, VAR_10, VAR_11);
                    if (FUNC_11(VAR_6, VAR_6->black_surface, VAR_13) < 0)
                        FUNC_4(&VAR_6->black_surface);
                    FUNC_5(VAR_13);
                }
            }
        }
        VAR_9 = FUNC_10(VAR_6->black_surface);
    }

    if (VAR_9 == VAR_4)
        return 0;

    for (int VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
        struct vaapi_osd_part *VAR_15 = &VAR_6->osd_parts[VAR_14];
        if (VAR_15->active) {
            struct vaapi_subpic *VAR_16 = &VAR_15->subpic;
            int VAR_17 = 0;
            if (VAR_6->osd_screen)
                VAR_17 |= VAR_5;
            VAR_8 = FUNC_6(VAR_6->display,
                                           VAR_16->id, &VAR_9, 1,
                                           VAR_16->src_x, VAR_16->src_y,
                                           VAR_16->src_w, VAR_16->src_h,
                                           VAR_16->dst_x, VAR_16->dst_y,
                                           VAR_16->dst_w, VAR_16->dst_h,
                                           VAR_17);
            FUNC_0(VAR_6, "vaAssociateSubpicture()");
        }
    }

    int VAR_18 = FUNC_9(VAR_6->image_params.color.space) |
                VAR_6->scaling | VAR_3;
    VAR_8 = FUNC_8(VAR_6->display,
                          VAR_9,
                          VAR_6->vo->x11->window,
                          VAR_6->src_rect.x0,
                          VAR_6->src_rect.y0,
                          VAR_6->src_rect.x1 - VAR_6->src_rect.x0,
                          VAR_6->src_rect.y1 - VAR_6->src_rect.y0,
                          VAR_6->dst_rect.x0,
                          VAR_6->dst_rect.y0,
                          VAR_6->dst_rect.x1 - VAR_6->dst_rect.x0,
                          VAR_6->dst_rect.y1 - VAR_6->dst_rect.y0,
                          ((void*)0), 0,
                          VAR_18);
    FUNC_0(VAR_6, "vaPutSurface()");

    for (int VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
        struct vaapi_osd_part *VAR_20 = &VAR_6->osd_parts[VAR_19];
        if (VAR_20->active) {
            struct vaapi_subpic *VAR_21 = &VAR_20->subpic;
            VAR_8 = FUNC_7(VAR_6->display, VAR_21->id,
                                             &VAR_9, 1);
            FUNC_0(VAR_6, "vaDeassociateSubpicture()");
        }
    }

    return 1;
}
