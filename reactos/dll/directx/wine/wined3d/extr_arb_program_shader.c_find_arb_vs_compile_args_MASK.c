
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wined3d_state {TYPE_7__* vs_consts_i; scalar_t__* vs_consts_b; scalar_t__* render_states; struct wined3d_shader** shader; } ;
struct TYPE_13__ {unsigned int local_bool_consts; int integer_constants; int local_int_consts; } ;
struct wined3d_shader {TYPE_6__ reg_maps; struct arb_pshader_private* backend_data; struct wined3d_device* device; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_device {struct wined3d_adapter* adapter; } ;
struct TYPE_9__ {int ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_2__ limits; int vs_clipping; } ;
struct TYPE_8__ {int swizzle_map; } ;
struct wined3d_context {scalar_t__* tex_unit_map; TYPE_1__ stream_info; struct wined3d_d3d_info* d3d_info; struct wined3d_gl_info* gl_info; } ;
struct wined3d_adapter {int * fragment_pipe; } ;
struct TYPE_12__ {scalar_t__* samplers; } ;
struct TYPE_10__ {int clip_texcoord; unsigned char clipplane_mask; unsigned int bools; } ;
struct TYPE_11__ {TYPE_3__ boolclip; scalar_t__ boolclip_compare; } ;
struct arb_vs_compile_args {scalar_t__** loop_ctrl; TYPE_5__ vertex; TYPE_4__ clip; int ps_signature; int super; } ;
struct arb_pshader_private {int clipplane_emulation; int input_signature_idx; } ;
typedef int WORD ;
struct TYPE_14__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct wined3d_context const*) ;
 int FUNC_1 (struct wined3d_state const*,struct wined3d_shader const*,int ,int *,struct wined3d_context const*) ;
 int FUNC_2 (scalar_t__**,int ,int) ;
 scalar_t__ FUNC_3 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_state *VAR_8,
        const struct wined3d_context *VAR_9, const struct wined3d_shader *VAR_10,
        struct arb_vs_compile_args *VAR_11)
{
    const struct wined3d_device *VAR_12 = VAR_10->device;
    const struct wined3d_adapter *VAR_13 = VAR_12->adapter;
    const struct wined3d_gl_info *VAR_14 = VAR_9->gl_info;
    const struct wined3d_d3d_info *VAR_15 = VAR_9->d3d_info;
    int VAR_16;
    WORD VAR_17;

    FUNC_1(VAR_8, VAR_10, VAR_9->stream_info.swizzle_map, &VAR_11->super, VAR_9);

    VAR_11->clip.boolclip_compare = 0;
    if (FUNC_3(VAR_8))
    {
        const struct wined3d_shader *VAR_18 = VAR_8->shader[VAR_6];
        const struct arb_pshader_private *VAR_19 = VAR_18->backend_data;
        VAR_11->ps_signature = VAR_19->input_signature_idx;

        VAR_11->clip.boolclip.clip_texcoord = VAR_19->clipplane_emulation + 1;
    }
    else
    {
        VAR_11->ps_signature = ~0;
        if (!VAR_15->vs_clipping && VAR_13->fragment_pipe == &VAR_7)
            VAR_11->clip.boolclip.clip_texcoord = FUNC_0(VAR_9) ? VAR_15->limits.ffp_blend_stages : 0;

    }

    if (VAR_11->clip.boolclip.clip_texcoord)
    {
        if (VAR_8->render_states[VAR_4])
            VAR_11->clip.boolclip.clipplane_mask = (unsigned char)VAR_8->render_states[VAR_5];

    }


    VAR_11->clip.boolclip.bools = VAR_10->reg_maps.local_bool_consts;

    for (VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16)
    {
        if (VAR_8->vs_consts_b[VAR_16])
            VAR_11->clip.boolclip.bools |= (1u << VAR_16);
    }

    VAR_11->vertex.samplers[0] = VAR_9->tex_unit_map[VAR_0 + 0];
    VAR_11->vertex.samplers[1] = VAR_9->tex_unit_map[VAR_0 + 1];
    VAR_11->vertex.samplers[2] = VAR_9->tex_unit_map[VAR_0 + 2];
    VAR_11->vertex.samplers[3] = 0;


    VAR_17 = ~VAR_10->reg_maps.integer_constants | VAR_10->reg_maps.local_int_consts;

    if (VAR_17 == 0xffff || VAR_14->supported[VAR_1])
    {
        FUNC_2(VAR_11->loop_ctrl, 0, sizeof(VAR_11->loop_ctrl));
        return;
    }

    for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16)
    {
        if (VAR_17 & (1u << VAR_16))
        {
            VAR_11->loop_ctrl[VAR_16][0] = 0;
            VAR_11->loop_ctrl[VAR_16][1] = 0;
            VAR_11->loop_ctrl[VAR_16][2] = 0;
        }
        else
        {
            VAR_11->loop_ctrl[VAR_16][0] = VAR_8->vs_consts_i[VAR_16].x;
            VAR_11->loop_ctrl[VAR_16][1] = VAR_8->vs_consts_i[VAR_16].y;
            VAR_11->loop_ctrl[VAR_16][2] = VAR_8->vs_consts_i[VAR_16].z;
        }
    }
}
