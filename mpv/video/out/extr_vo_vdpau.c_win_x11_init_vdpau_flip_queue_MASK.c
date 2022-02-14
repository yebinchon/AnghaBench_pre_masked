
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo_x11_state {int window; } ;
struct vo {struct vo_x11_state* x11; struct vdpctx* priv; } ;
struct TYPE_4__ {scalar_t__ a; double r; double g; double b; } ;
struct vdpctx {scalar_t__ flip_target; scalar_t__ flip_queue; int user_fps; scalar_t__ composite_detect; TYPE_1__ colorkey; int vdp_device; struct vdp_functions* vdp; } ;
struct vdp_functions {int (* presentation_queue_set_background_color ) (scalar_t__,TYPE_2__*) ;int (* presentation_queue_create ) (int ,scalar_t__,scalar_t__*) ;int (* presentation_queue_target_create_x11 ) (int ,int ,scalar_t__*) ;} ;
typedef int VdpStatus ;
struct TYPE_5__ {double red; double green; double blue; int alpha; } ;
typedef TYPE_2__ VdpColor ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*) ;
 int FUNC_2 (struct vo*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_5 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct vo*) ;

__attribute__((used)) static int FUNC_7(struct vo *VAR_1)
{
    struct vdpctx *VAR_2 = VAR_1->priv;
    struct vdp_functions *VAR_3 = VAR_2->vdp;
    struct vo_x11_state *VAR_4 = VAR_1->x11;
    VdpStatus VAR_5;

    if (VAR_2->flip_target == VAR_0) {
        VAR_5 = VAR_3->presentation_queue_target_create_x11(VAR_2->vdp_device,
                                                           VAR_4->window,
                                                           &VAR_2->flip_target);
        FUNC_0(VAR_1, "Error when calling "
                        "vdp_presentation_queue_target_create_x11");
    }







    if (VAR_2->flip_queue == VAR_0) {
        VAR_5 = VAR_3->presentation_queue_create(VAR_2->vdp_device, VAR_2->flip_target,
                                                &VAR_2->flip_queue);
        FUNC_0(VAR_1, "Error when calling vdp_presentation_queue_create");
    }

    if (VAR_2->colorkey.a > 0) {
        VdpColor VAR_6 = {
            .red = VAR_2->colorkey.r / 255.0,
            .green = VAR_2->colorkey.g / 255.0,
            .blue = VAR_2->colorkey.b / 255.0,
            .alpha = 0,
        };
        VAR_5 = VAR_3->presentation_queue_set_background_color(VAR_2->flip_queue,
                                                              &VAR_6);
        FUNC_1(VAR_1, "Error setting colorkey");
    }

    if (VAR_2->composite_detect && FUNC_6(VAR_1)) {
        FUNC_2(VAR_1, "Compositing window manager detected. Assuming timing info "
                "is inaccurate.\n");
        VAR_2->user_fps = -1;
    }

    return 0;
}
