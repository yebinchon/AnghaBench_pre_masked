
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdp_functions {int (* video_mixer_destroy ) (scalar_t__) ;} ;
struct mp_vdpau_mixer {scalar_t__ video_mixer; TYPE_1__* ctx; } ;
typedef int VdpStatus ;
struct TYPE_2__ {struct vdp_functions vdp; } ;


 int FUNC_0 (struct mp_vdpau_mixer*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mp_vdpau_mixer*) ;

void FUNC_3(struct mp_vdpau_mixer *VAR_1)
{
    struct vdp_functions *VAR_2 = &VAR_1->ctx->vdp;
    VdpStatus VAR_3;
    if (VAR_1->video_mixer != VAR_0) {
        VAR_3 = VAR_2->video_mixer_destroy(VAR_1->video_mixer);
        FUNC_0(VAR_1, "Error when calling vdp_video_mixer_destroy");
    }
    FUNC_2(VAR_1);
}
