
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdp_functions {int (* device_destroy ) (scalar_t__) ;int (* output_surface_destroy ) (scalar_t__) ;int (* video_surface_destroy ) (scalar_t__) ;} ;
struct mp_vdpau_ctx {scalar_t__ preemption_obj; scalar_t__ vdp_device; int preempt_lock; int pool_lock; int x11; scalar_t__ close_display; TYPE_1__* video_surfaces; struct vdp_functions vdp; } ;
struct AVHWDeviceContext {struct mp_vdpau_ctx* user_opaque; } ;
typedef int VdpStatus ;
struct TYPE_2__ {scalar_t__ surface; scalar_t__ osurface; int in_use; } ;


 int FUNC_0 (struct mp_vdpau_ctx*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mp_vdpau_ctx*) ;

__attribute__((used)) static void FUNC_9(struct AVHWDeviceContext *VAR_2)
{
    struct mp_vdpau_ctx *VAR_3 = VAR_2->user_opaque;

    struct vdp_functions *VAR_4 = &VAR_3->vdp;
    VdpStatus VAR_5;

    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

        FUNC_2(!VAR_3->video_surfaces[VAR_6].in_use);
        if (VAR_3->video_surfaces[VAR_6].surface != VAR_1) {
            VAR_5 = VAR_4->video_surface_destroy(VAR_3->video_surfaces[VAR_6].surface);
            FUNC_0(VAR_3, "Error when calling vdp_video_surface_destroy");
        }
        if (VAR_3->video_surfaces[VAR_6].osurface != VAR_1) {
            VAR_5 = VAR_4->output_surface_destroy(VAR_3->video_surfaces[VAR_6].osurface);
            FUNC_0(VAR_3, "Error when calling vdp_output_surface_destroy");
        }
    }

    if (VAR_3->preemption_obj != VAR_1) {
        VAR_5 = VAR_4->output_surface_destroy(VAR_3->preemption_obj);
        FUNC_0(VAR_3, "Error when calling vdp_output_surface_destroy");
    }

    if (VAR_4->device_destroy && VAR_3->vdp_device != VAR_1) {
        VAR_5 = VAR_4->device_destroy(VAR_3->vdp_device);
        FUNC_0(VAR_3, "Error when calling vdp_device_destroy");
    }

    if (VAR_3->close_display)
        FUNC_1(VAR_3->x11);

    FUNC_3(&VAR_3->pool_lock);
    FUNC_3(&VAR_3->preempt_lock);
    FUNC_8(VAR_3);
}
