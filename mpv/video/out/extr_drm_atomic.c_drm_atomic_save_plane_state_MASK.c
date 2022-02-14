
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_object {int dummy; } ;
struct drm_atomic_plane_state {int zpos; int crtc_h; int crtc_w; int crtc_y; int crtc_x; int src_h; int src_w; int src_y; int src_x; int crtc_id; int fb_id; } ;


 scalar_t__ FUNC_0 (struct drm_object*,char*,int *) ;

__attribute__((used)) static bool FUNC_1(struct drm_object *VAR_0,
                                        struct drm_atomic_plane_state *VAR_1)
{
    if (!VAR_0)
        return 1;

    bool VAR_2 = 1;

    if (0 > FUNC_0(VAR_0, "FB_ID", &VAR_1->fb_id))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "CRTC_ID", &VAR_1->crtc_id))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "SRC_X", &VAR_1->src_x))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "SRC_Y", &VAR_1->src_y))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "SRC_W", &VAR_1->src_w))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "SRC_H", &VAR_1->src_h))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "CRTC_X", &VAR_1->crtc_x))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "CRTC_Y", &VAR_1->crtc_y))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "CRTC_W", &VAR_1->crtc_w))
        VAR_2 = 0;
    if (0 > FUNC_0(VAR_0, "CRTC_H", &VAR_1->crtc_h))
        VAR_2 = 0;

    FUNC_0(VAR_0, "ZPOS", &VAR_1->zpos);

    return VAR_2;
}
