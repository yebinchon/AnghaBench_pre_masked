
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_object {int dummy; } ;
struct drm_atomic_plane_state {int zpos; int crtc_h; int crtc_w; int crtc_y; int crtc_x; int src_h; int src_w; int src_y; int src_x; int crtc_id; int fb_id; } ;
typedef int drmModeAtomicReq ;


 scalar_t__ FUNC_0 (int *,struct drm_object*,char*,int ) ;

__attribute__((used)) static bool FUNC_1(drmModeAtomicReq *VAR_0,
                                           struct drm_object *VAR_1,
                                           const struct drm_atomic_plane_state *VAR_2)
{
    if (!VAR_1)
        return 1;

    bool VAR_3 = 1;

    if (0 > FUNC_0(VAR_0, VAR_1, "FB_ID", VAR_2->fb_id))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "CRTC_ID", VAR_2->crtc_id))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "SRC_X", VAR_2->src_x))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "SRC_Y", VAR_2->src_y))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "SRC_W", VAR_2->src_w))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "SRC_H", VAR_2->src_h))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "CRTC_X", VAR_2->crtc_x))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "CRTC_Y", VAR_2->crtc_y))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "CRTC_W", VAR_2->crtc_w))
        VAR_3 = 0;
    if (0 > FUNC_0(VAR_0, VAR_1, "CRTC_H", VAR_2->crtc_h))
        VAR_3 = 0;

    FUNC_0(VAR_0, VAR_1, "ZPOS", VAR_2->zpos);

    return VAR_3;
}
