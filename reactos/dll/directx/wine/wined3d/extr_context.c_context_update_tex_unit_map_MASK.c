
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ graphics_samplers; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_1 (struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_2 (struct wined3d_context*,scalar_t__,struct wined3d_state const*) ;
 int FUNC_3 (struct wined3d_context*,struct wined3d_state const*) ;
 scalar_t__ FUNC_4 (struct wined3d_state const*) ;
 scalar_t__ FUNC_5 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_1, const struct wined3d_state *VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;
    BOOL VAR_4 = FUNC_5(VAR_2);
    BOOL VAR_5 = FUNC_4(VAR_2);

    if (!VAR_5)
        FUNC_3(VAR_1, VAR_2);






    if (VAR_3->limits.graphics_samplers >= VAR_0)
        return;

    if (VAR_5)
        FUNC_1(VAR_1, VAR_2);
    else
        FUNC_0(VAR_1, VAR_2);

    if (VAR_4)
        FUNC_2(VAR_1, VAR_5, VAR_2);
}
