
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {float x; float y; float width; float height; } ;
struct wined3d_state {int* render_states; int * transforms; TYPE_4__ viewport; TYPE_3__* fb; } ;
struct wined3d_matrix {float member_0; float member_1; float member_2; float member_3; float member_4; float member_5; float member_6; float member_7; float member_8; float member_9; float member_10; float member_11; float member_12; float member_13; float member_14; float member_15; } ;
struct wined3d_context {scalar_t__ last_was_rhw; TYPE_2__* d3d_info; scalar_t__ render_offscreen; TYPE_1__* gl_info; } ;
typedef enum wined3d_depth_buffer_type { ____Placeholder_wined3d_depth_buffer_type } wined3d_depth_buffer_type ;
struct TYPE_7__ {scalar_t__ depth_stencil; } ;
struct TYPE_6__ {int wined3d_creation_flags; } ;
struct TYPE_5__ {int* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wined3d_matrix*,struct wined3d_matrix const*,int *) ;

void FUNC_1(const struct wined3d_context *VAR_5, const struct wined3d_state *VAR_6,
        struct wined3d_matrix *VAR_7)
{
    BOOL VAR_8 = VAR_5->gl_info->supported[VAR_0];
    BOOL VAR_9 = !VAR_8 && VAR_5->render_offscreen;
    float VAR_10;
    if (!VAR_8 && VAR_5->d3d_info->wined3d_creation_flags & VAR_1)
        VAR_10 = 63.0f / 64.0f;
    else
        VAR_10 = -1.0f / 64.0f;

    if (VAR_5->last_was_rhw)
    {

        float VAR_11 = VAR_6->viewport.x;
        float VAR_12 = VAR_6->viewport.y;
        float VAR_13 = VAR_6->viewport.width;
        float VAR_14 = VAR_6->viewport.height;
        float VAR_15 = 2.0f / VAR_13;
        float VAR_16 = (VAR_10 - (2.0f * VAR_11) - VAR_13) / VAR_13;
        float VAR_17 = VAR_9 ? 2.0f / VAR_14 : 2.0f / -VAR_14;
        float VAR_18 = VAR_9
                ? (VAR_10 - (2.0f * VAR_12) - VAR_14) / VAR_14
                : (VAR_10 - (2.0f * VAR_12) - VAR_14) / -VAR_14;
        enum wined3d_depth_buffer_type VAR_19 = VAR_6->fb->depth_stencil ?
                VAR_6->render_states[VAR_2] : VAR_4;
        float VAR_20 = VAR_19 ? VAR_8 ? 1.0f : 2.0f : 0.0f;
        float VAR_21 = VAR_19 ? VAR_8 ? 0.0f : -1.0f : 0.0f;
        const struct wined3d_matrix VAR_22 =
        {
             VAR_15, 0.0f, 0.0f, 0.0f,
                0.0f, VAR_17, 0.0f, 0.0f,
                0.0f, 0.0f, VAR_20, 0.0f,
            VAR_16, VAR_18, VAR_21, 1.0f,
        };

        *VAR_7 = VAR_22;
    }
    else
    {
        float VAR_23 = VAR_9 ? -1.0f : 1.0f;
        float VAR_24 = VAR_10 / VAR_6->viewport.width;
        float VAR_25 = VAR_9
                ? VAR_10 / VAR_6->viewport.height
                : -VAR_10 / VAR_6->viewport.height;
        float VAR_26 = VAR_8 ? 1.0f : 2.0f;
        float VAR_27 = VAR_8 ? 0.0f : -1.0f;
        const struct wined3d_matrix VAR_28 =
        {
                1.0f, 0.0f, 0.0f, 0.0f,
                0.0f, VAR_23, 0.0f, 0.0f,
                0.0f, 0.0f, VAR_26, 0.0f,
            VAR_24, VAR_25, VAR_27, 1.0f,
        };

        FUNC_0(VAR_7, &VAR_28, &VAR_6->transforms[VAR_3]);
    }
}
