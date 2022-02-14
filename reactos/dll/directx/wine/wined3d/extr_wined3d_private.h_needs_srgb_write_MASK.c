
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {scalar_t__* render_states; } ;
struct wined3d_fb_state {TYPE_2__** render_targets; } ;
struct wined3d_context {TYPE_1__* d3d_info; } ;
struct TYPE_4__ {int format_flags; } ;
struct TYPE_3__ {int wined3d_creation_flags; } ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_context *VAR_3,
        const struct wined3d_state *VAR_4, const struct wined3d_fb_state *VAR_5)
{
    return (!(VAR_3->d3d_info->wined3d_creation_flags & VAR_2)
            || VAR_4->render_states[VAR_1])
            && VAR_5->render_targets[0] && VAR_5->render_targets[0]->format_flags & VAR_0;
}
