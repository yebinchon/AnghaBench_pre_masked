
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vdp_functions {int (* video_mixer_render ) (void*,void*,int ,int ,int,void**,uintptr_t,int,void**,TYPE_2__*,uintptr_t,int *,TYPE_2__*,int ,int *) ;int (* video_mixer_destroy ) (void*) ;int (* video_surface_get_parameters ) (uintptr_t,scalar_t__*,scalar_t__*,scalar_t__*) ;int (* output_surface_render_output_surface ) (uintptr_t,TYPE_2__*,uintptr_t,TYPE_2__*,int *,int *,int) ;} ;
struct mp_vdpau_mixer_opts {int dummy; } ;
struct TYPE_10__ {int member_0; } ;
struct mp_vdpau_mixer_frame {uintptr_t current; void** future; void** past; int field; struct mp_vdpau_mixer_opts opts; TYPE_1__ member_0; } ;
struct mp_vdpau_mixer {void* video_mixer; int initialized; scalar_t__ current_w; scalar_t__ current_h; scalar_t__ current_chroma_type; int image_params; struct mp_vdpau_mixer_opts opts; scalar_t__ video_eq; int preemption_counter; TYPE_9__* ctx; } ;
struct mp_image {scalar_t__ imgfmt; int params; scalar_t__* planes; int h; int w; } ;
typedef int VdpStatus ;
struct TYPE_11__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ VdpRect ;
typedef uintptr_t VdpOutputSurface ;
typedef scalar_t__ VdpChromaType ;
struct TYPE_12__ {struct vdp_functions vdp; } ;


 int FUNC_0 (struct mp_vdpau_mixer*,char*) ;
 int FUNC_1 (struct mp_vdpau_mixer*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct mp_vdpau_mixer*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_9__*,int *) ;
 struct mp_vdpau_mixer_frame* FUNC_6 (struct mp_image*) ;
 int FUNC_7 (struct mp_vdpau_mixer_opts*,struct mp_vdpau_mixer_opts*) ;
 int FUNC_8 (uintptr_t,TYPE_2__*,uintptr_t,TYPE_2__*,int *,int *,int) ;
 int FUNC_9 (uintptr_t,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*,void*,int ,int ,int,void**,uintptr_t,int,void**,TYPE_2__*,uintptr_t,int *,TYPE_2__*,int ,int *) ;

int FUNC_12(struct mp_vdpau_mixer *VAR_6,
                          struct mp_vdpau_mixer_opts *VAR_7,
                          VdpOutputSurface VAR_8, VdpRect *VAR_9,
                          struct mp_image *VAR_10, VdpRect *VAR_11)
{
    struct vdp_functions *VAR_12 = &VAR_6->ctx->vdp;
    VdpStatus VAR_13;
    VdpRect VAR_14 = {0, 0, VAR_10->w, VAR_10->h};

    if (!VAR_11)
        VAR_11 = &VAR_14;

    int VAR_15 = FUNC_5(VAR_6->ctx, &VAR_6->preemption_counter);
    if (VAR_15 < 1) {
        VAR_6->video_mixer = VAR_3;
        if (VAR_15 < 0)
            return -1;
    }

    if (VAR_10->imgfmt == VAR_1) {
        VdpOutputSurface VAR_16 = (uintptr_t)VAR_10->planes[3];
        int VAR_17 = VAR_4;
        VAR_13 = VAR_12->output_surface_render_output_surface(VAR_8,
                                                           VAR_9,
                                                           VAR_16,
                                                           VAR_11,
                                                           ((void*)0), ((void*)0), VAR_17);
        FUNC_1(VAR_6, "Error when calling "
                          "vdp_output_surface_render_output_surface");
        return 0;
    }

    if (VAR_10->imgfmt != VAR_0)
        return -1;

    struct mp_vdpau_mixer_frame *VAR_18 = FUNC_6(VAR_10);
    struct mp_vdpau_mixer_frame VAR_19 = {0};
    if (!VAR_18) {
        VAR_18 = &VAR_19;
        VAR_18->current = (uintptr_t)VAR_10->planes[3];
        for (int VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
            VAR_18->past[VAR_20] = VAR_18->future[VAR_20] = VAR_3;
        VAR_18->field = VAR_5;
    }

    if (!VAR_7)
        VAR_7 = &VAR_18->opts;

    if (VAR_6->video_mixer == VAR_3)
        VAR_6->initialized = 0;

    if (VAR_6->video_eq && FUNC_3(VAR_6->video_eq))
        VAR_6->initialized = 0;

    VdpChromaType VAR_21;
    uint32_t VAR_22, VAR_23;

    VAR_13 = VAR_12->video_surface_get_parameters(VAR_18->current, &VAR_21,
                                               &VAR_22, &VAR_23);
    FUNC_0(VAR_6, "Error when calling vdp_video_surface_get_parameters");

    if (!VAR_6->initialized || !FUNC_7(VAR_7, &VAR_6->opts) ||
        !FUNC_4(&VAR_10->params, &VAR_6->image_params) ||
        VAR_6->current_w != VAR_22 || VAR_6->current_h != VAR_23 ||
        VAR_6->current_chroma_type != VAR_21)
    {
        VAR_6->opts = *VAR_7;
        VAR_6->image_params = VAR_10->params;
        if (VAR_6->video_mixer != VAR_3) {
            VAR_13 = VAR_12->video_mixer_destroy(VAR_6->video_mixer);
            FUNC_1(VAR_6, "Error when calling vdp_video_mixer_destroy");
        }
        VAR_6->video_mixer = VAR_3;
        VAR_6->initialized = 0;
        if (FUNC_2(VAR_6, VAR_21, VAR_22, VAR_23) < 0)
            return -1;
    }

    VAR_13 = VAR_12->video_mixer_render(VAR_6->video_mixer, VAR_3,
                                     0, VAR_18->field,
                                     VAR_2, VAR_18->past,
                                     VAR_18->current,
                                     VAR_2, VAR_18->future,
                                     VAR_11,
                                     VAR_8, ((void*)0), VAR_9,
                                     0, ((void*)0));
    FUNC_1(VAR_6, "Error when calling vdp_video_mixer_render");
    return 0;
}
