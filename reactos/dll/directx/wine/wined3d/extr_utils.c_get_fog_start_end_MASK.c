
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int * render_states; } ;
struct wined3d_context {int fog_source; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;



 float VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

void FUNC_1(const struct wined3d_context *VAR_5, const struct wined3d_state *VAR_6,
        float *VAR_7, float *VAR_8)
{
    union
    {
        DWORD d;
        float f;
    } VAR_9;

    switch (VAR_5->fog_source)
    {
        case 128:
            *VAR_7 = 1.0f;
            *VAR_8 = 0.0f;
            break;

        case 130:
            *VAR_7 = 255.0f;
            *VAR_8 = 0.0f;
            break;

        case 129:
            VAR_9.d = VAR_6->render_states[VAR_3];
            *VAR_7 = VAR_9.f;
            VAR_9.d = VAR_6->render_states[VAR_2];
            *VAR_8 = VAR_9.f;




            if (VAR_6->render_states[VAR_4] == VAR_1 && *VAR_7 == *VAR_8)
            {
                *VAR_7 = -VAR_0;
                *VAR_8 = 0.0f;
            }
            break;

        default:

            FUNC_0("Unexpected fog coordinate source.\n");
            *VAR_7 = 0.0f;
            *VAR_8 = 0.0f;
    }
}
