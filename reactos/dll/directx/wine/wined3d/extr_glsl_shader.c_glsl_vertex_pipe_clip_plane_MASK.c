
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ user_clip_distances; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_context {int constant_update_mask; struct wined3d_gl_info* gl_info; } ;
typedef scalar_t__ UINT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, DWORD VAR_3)
{
    const struct wined3d_gl_info *VAR_4 = VAR_1->gl_info;
    UINT VAR_5 = VAR_3 - FUNC_0(0);

    if (VAR_5 >= VAR_4->limits.user_clip_distances)
        return;

    VAR_1->constant_update_mask |= VAR_0;
}
