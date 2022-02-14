
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


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_resource_info {scalar_t__ type; int data_type; } ;
struct TYPE_8__ {int type; } ;
struct wined3d_shader_reg_maps {int sampler_map; TYPE_1__ shader_version; } ;
struct TYPE_11__ {int u; int v; int w; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_4__ texel_offset; TYPE_7__* src; TYPE_6__* dst; TYPE_2__* ctx; } ;
struct wined3d_gl_info {int * supported; } ;
struct glsl_src_param {char* param_str; } ;
struct TYPE_12__ {TYPE_3__* idx; } ;
struct TYPE_14__ {int swizzle; TYPE_5__ reg; } ;
struct TYPE_13__ {int write_mask; } ;
struct TYPE_10__ {unsigned int offset; } ;
struct TYPE_9__ {struct wined3d_string_buffer* buffer; struct wined3d_gl_info* gl_info; struct wined3d_shader_reg_maps* reg_maps; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,TYPE_7__*,unsigned int,struct glsl_src_param*) ;
 int FUNC_5 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_6__*,int ) ;
 int FUNC_6 (struct wined3d_string_buffer*,int*,unsigned int) ;
 unsigned int FUNC_7 (int *,unsigned int,unsigned int) ;
 int FUNC_8 (scalar_t__,unsigned int*,unsigned int*) ;
 char* FUNC_9 (int ) ;
 struct wined3d_shader_resource_info* FUNC_10 (struct wined3d_shader_instruction const*,TYPE_5__*) ;
 unsigned int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_13 (struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_14(const struct wined3d_shader_instruction *VAR_7)
{
    unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    const struct wined3d_shader_reg_maps *VAR_13 = VAR_7->ctx->reg_maps;
    const char *VAR_14 = FUNC_9(VAR_13->shader_version.type);
    struct glsl_src_param VAR_15, VAR_16, VAR_17;
    const struct wined3d_gl_info *VAR_18 = VAR_7->ctx->gl_info;
    const struct wined3d_shader_resource_info *VAR_19;
    struct wined3d_string_buffer *VAR_20 = VAR_7->ctx->buffer;
    unsigned int VAR_21, VAR_22;
    char VAR_23[6];
    BOOL VAR_24;

    if (!VAR_18->supported[VAR_0])
    {
        FUNC_2("OpenGL implementation does not support textureGather.\n");
        return;
    }

    VAR_24 = VAR_7->handler_idx == VAR_3
            || VAR_7->handler_idx == VAR_4
            || FUNC_13(VAR_7);

    VAR_8 =
            (VAR_7->handler_idx == VAR_3 || VAR_7->handler_idx == VAR_4) ? 2 : 1;
    VAR_9 = VAR_7->src[VAR_8].reg.idx[0].offset;
    VAR_10 = VAR_7->src[VAR_8 + 1].reg.idx[0].offset;
    VAR_12 = FUNC_11(VAR_7->src[VAR_8 + 1].swizzle, 0);
    VAR_11 = FUNC_7(&VAR_13->sampler_map, VAR_9, VAR_10);

    if (!(VAR_19 = FUNC_10(VAR_7, &VAR_7->src[VAR_8].reg)))
        return;

    if (VAR_19->type >= FUNC_0(VAR_6))
    {
        FUNC_1("Unexpected resource type %#x.\n", VAR_19->type);
        return;
    }
    FUNC_8(VAR_19->type, &VAR_21, &VAR_22);

    FUNC_12(VAR_7->src[VAR_8].swizzle, VAR_1, VAR_7->dst[0].write_mask, VAR_23);
    FUNC_5(VAR_20, VAR_7, &VAR_7->dst[0], VAR_19->data_type);

    FUNC_4(VAR_7, &VAR_7->src[0], (1u << VAR_21) - 1, &VAR_15);

    FUNC_3(VAR_20, "textureGather%s(%s_sampler%u, %s",
            VAR_24 ? "Offset" : "", VAR_14, VAR_11, VAR_15.param_str);
    if (VAR_7->handler_idx == VAR_2 || VAR_7->handler_idx == VAR_4)
    {
        FUNC_4(VAR_7, &VAR_7->src[VAR_8 + 2], VAR_5, &VAR_16);
        FUNC_3(VAR_20, ", %s", VAR_16.param_str);
    }
    if (VAR_7->handler_idx == VAR_3 || VAR_7->handler_idx == VAR_4)
    {
        FUNC_4(VAR_7, &VAR_7->src[1], (1u << VAR_22) - 1, &VAR_17);
        FUNC_3(VAR_20, ", %s", VAR_17.param_str);
    }
    else if (VAR_24)
    {
        int VAR_25[4] = {VAR_7->texel_offset.u, VAR_7->texel_offset.v, VAR_7->texel_offset.w};
        FUNC_3(VAR_20, ", ");
        FUNC_6(VAR_20, VAR_25, VAR_22);
    }
    if (VAR_12)
        FUNC_3(VAR_20, ", %u", VAR_12);

    FUNC_3(VAR_20, ")%s);\n", VAR_23);
}
