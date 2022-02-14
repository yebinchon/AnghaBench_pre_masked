
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ crtc; } ;
struct drm_atomic_context {int drmprime_video_plane; int draw_plane; int connector; int crtc; TYPE_2__ old_state; int fd; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_atomic_context*) ;

void FUNC_3(struct drm_atomic_context *VAR_0)
{
    FUNC_0(VAR_0->fd, &VAR_0->old_state.crtc.mode);
    FUNC_1(VAR_0->crtc);
    FUNC_1(VAR_0->connector);
    FUNC_1(VAR_0->draw_plane);
    FUNC_1(VAR_0->drmprime_video_plane);
    FUNC_2(VAR_0);
}
