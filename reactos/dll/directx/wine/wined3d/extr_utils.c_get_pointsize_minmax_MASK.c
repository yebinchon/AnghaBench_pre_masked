
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int * render_states; } ;
struct wined3d_context {int dummy; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(const struct wined3d_context *VAR_2, const struct wined3d_state *VAR_3,
        float *VAR_4, float *VAR_5)
{
    union
    {
        DWORD d;
        float f;
    } VAR_6, VAR_7;

    VAR_6.d = VAR_3->render_states[VAR_1];
    VAR_7.d = VAR_3->render_states[VAR_0];

    if (VAR_6.f > VAR_7.f)
        VAR_6.f = VAR_7.f;

    *VAR_4 = VAR_6.f;
    *VAR_5 = VAR_7.f;
}
