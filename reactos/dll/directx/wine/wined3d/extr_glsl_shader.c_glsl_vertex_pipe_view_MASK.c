
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct TYPE_2__ {unsigned int user_clip_distances; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_context {int constant_update_mask; struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_2 (struct wined3d_context*,int ) ;
 scalar_t__ FUNC_3 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_4->gl_info;
    unsigned int VAR_8;

    VAR_4->constant_update_mask |= VAR_1
            | VAR_0
            | VAR_2;

    if (FUNC_3(VAR_7))
    {
        for (VAR_8 = 0; VAR_8 < VAR_7->limits.user_clip_distances; ++VAR_8)
        {
            if (!FUNC_2(VAR_4, FUNC_0(VAR_8)))
                FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_8));
        }
    }
    else
    {
        VAR_4->constant_update_mask |= VAR_3;
    }
}
