
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float height; } ;
struct wined3d_state {TYPE_1__ viewport; scalar_t__* render_states; } ;
struct wined3d_context {int dummy; } ;
typedef scalar_t__ DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

void FUNC_0(const struct wined3d_context *VAR_5, const struct wined3d_state *VAR_6,
        float *VAR_7, float *VAR_8)
{



    union
    {
        DWORD d;
        float f;
    } VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_8[0] = 1.0f;
    VAR_8[1] = 0.0f;
    VAR_8[2] = 0.0f;

    VAR_9.d = VAR_6->render_states[VAR_4];
    VAR_10.d = VAR_6->render_states[VAR_1];
    VAR_11.d = VAR_6->render_states[VAR_2];
    VAR_12.d = VAR_6->render_states[VAR_3];

    if (VAR_6->render_states[VAR_0])
    {
        float VAR_13 = VAR_6->viewport.height * VAR_6->viewport.height;

        VAR_8[0] = VAR_10.f / VAR_13;
        VAR_8[1] = VAR_11.f / VAR_13;
        VAR_8[2] = VAR_12.f / VAR_13;
    }
    *VAR_7 = VAR_9.f;
}
