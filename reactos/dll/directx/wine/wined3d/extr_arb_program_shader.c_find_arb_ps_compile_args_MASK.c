
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__* ps_consts_i; scalar_t__* render_states; scalar_t__* ps_consts_b; } ;
struct TYPE_5__ {unsigned int local_bool_consts; int integer_constants; int local_int_consts; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_d3d_info {int vs_clipping; } ;
struct TYPE_4__ {int position_transformed; } ;
struct wined3d_context {TYPE_1__ stream_info; struct wined3d_d3d_info* d3d_info; struct wined3d_gl_info* gl_info; } ;
struct arb_ps_compile_args {unsigned int bools; int clip; scalar_t__** loop_ctrl; int super; } ;
typedef int WORD ;
struct TYPE_6__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct wined3d_state const*,struct wined3d_shader const*,int ,int *,struct wined3d_context const*) ;
 int FUNC_1 (scalar_t__**,int ,int) ;
 scalar_t__ FUNC_2 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_state *VAR_5,
        const struct wined3d_context *VAR_6, const struct wined3d_shader *VAR_7,
        struct arb_ps_compile_args *VAR_8)
{
    const struct wined3d_gl_info *VAR_9 = VAR_6->gl_info;
    const struct wined3d_d3d_info *VAR_10 = VAR_6->d3d_info;
    int VAR_11;
    WORD VAR_12;

    FUNC_0(VAR_5, VAR_7, VAR_6->stream_info.position_transformed, &VAR_8->super, VAR_6);


    VAR_8->bools = VAR_7->reg_maps.local_bool_consts;

    for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11)
    {
        if (VAR_5->ps_consts_b[VAR_11])
            VAR_8->bools |= ( 1u << VAR_11);
    }





    if (!VAR_10->vs_clipping && FUNC_2(VAR_5)
            && VAR_5->render_states[VAR_3]
            && VAR_5->render_states[VAR_4])
        VAR_8->clip = 1;
    else
        VAR_8->clip = 0;


    VAR_12 = ~VAR_7->reg_maps.integer_constants | VAR_7->reg_maps.local_int_consts;
    if (VAR_12 == 0xffff || VAR_9->supported[VAR_0])
    {
        FUNC_1(VAR_8->loop_ctrl, 0, sizeof(VAR_8->loop_ctrl));
        return;
    }

    for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
    {
        if (VAR_12 & (1u << VAR_11))
        {
            VAR_8->loop_ctrl[VAR_11][0] = 0;
            VAR_8->loop_ctrl[VAR_11][1] = 0;
            VAR_8->loop_ctrl[VAR_11][2] = 0;
        }
        else
        {
            VAR_8->loop_ctrl[VAR_11][0] = VAR_5->ps_consts_i[VAR_11].x;
            VAR_8->loop_ctrl[VAR_11][1] = VAR_5->ps_consts_i[VAR_11].y;
            VAR_8->loop_ctrl[VAR_11][2] = VAR_5->ps_consts_i[VAR_11].z;
        }
    }
}
