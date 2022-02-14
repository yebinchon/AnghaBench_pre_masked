
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdp_functions {scalar_t__ (* video_mixer_set_attribute_values ) (int ,int,int *,void const**) ;int (* get_error_string ) (scalar_t__) ;} ;
struct mp_vdpau_mixer {int video_mixer; TYPE_1__* ctx; } ;
typedef int VdpVideoMixerAttribute ;
typedef scalar_t__ VdpStatus ;
struct TYPE_2__ {struct vdp_functions vdp; } ;


 int FUNC_0 (struct mp_vdpau_mixer*,char*,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int,int *,void const**) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mp_vdpau_mixer *VAR_1,
                               VdpVideoMixerAttribute VAR_2,
                               const void *VAR_3, char *VAR_4)
{
    struct vdp_functions *VAR_5 = &VAR_1->ctx->vdp;
    VdpStatus VAR_6;

    VAR_6 = VAR_5->video_mixer_set_attribute_values(VAR_1->video_mixer, 1,
                                                   &VAR_2, &VAR_3);
    if (VAR_6 != VAR_0) {
        FUNC_0(VAR_1, "Error setting video mixer attribute %s: %s\n", VAR_4,
               VAR_5->get_error_string(VAR_6));
        return -1;
    }
    return 0;
}
