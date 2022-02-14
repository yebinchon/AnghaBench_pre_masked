
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_context {scalar_t__ draw_buffers_mask; TYPE_1__* current_fbo; } ;
struct TYPE_2__ {scalar_t__ rt_mask; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_context*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct wined3d_context*,struct wined3d_state const*) ;
 scalar_t__ FUNC_2 (struct wined3d_context*,int ) ;

void FUNC_3(struct wined3d_context *VAR_1, const struct wined3d_state *VAR_2, DWORD VAR_3)
{
    DWORD VAR_4, *VAR_5;

    if (FUNC_2(VAR_1, VAR_0)) return;

    VAR_5 = VAR_1->current_fbo ? &VAR_1->current_fbo->rt_mask : &VAR_1->draw_buffers_mask;
    VAR_4 = FUNC_1(VAR_1, VAR_2);
    if (VAR_4 != *VAR_5)
    {
        FUNC_0(VAR_1, VAR_4);
        *VAR_5 = VAR_4;
    }
}
