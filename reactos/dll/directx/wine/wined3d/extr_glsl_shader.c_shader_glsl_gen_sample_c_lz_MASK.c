
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int type; } ;
struct wined3d_shader_texel_offset {int u; int v; int w; } ;
struct wined3d_shader_instruction {TYPE_3__* dst; TYPE_2__* ctx; struct wined3d_shader_texel_offset texel_offset; } ;
struct glsl_sample_function {scalar_t__ offset_size; int data_type; int deriv_mask; } ;
struct TYPE_6__ {int write_mask; } ;
struct TYPE_5__ {struct wined3d_string_buffer* buffer; TYPE_1__* reg_maps; } ;
struct TYPE_4__ {struct wined3d_shader_version shader_version; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_3__*,int ) ;
 int FUNC_3 (struct wined3d_string_buffer*,int*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_2,
        unsigned int VAR_3, const struct glsl_sample_function *VAR_4,
        unsigned int VAR_5, const char *VAR_6, const char *VAR_7)
{
    const struct wined3d_shader_version *VAR_8 = &VAR_2->ctx->reg_maps->shader_version;
    unsigned int VAR_9 = FUNC_6(VAR_4->deriv_mask);
    const struct wined3d_shader_texel_offset *VAR_10 = &VAR_2->texel_offset;
    struct wined3d_string_buffer *VAR_11 = VAR_2->ctx->buffer;
    char VAR_12[6];

    FUNC_0("Emitting textureGrad() for sample_c_lz.\n");

    FUNC_5(VAR_1, VAR_0, VAR_2->dst[0].write_mask, VAR_12);
    FUNC_2(VAR_11, VAR_2, &VAR_2->dst[0], VAR_4->data_type);
    FUNC_1(VAR_11, "vec4(textureGrad%s(%s_sampler%u, vec%u(%s, %s), vec%u(0.0), vec%u(0.0)",
            VAR_4->offset_size ? "Offset" : "",
            FUNC_4(VAR_8->type), VAR_3,
            VAR_5, VAR_6, VAR_7, VAR_9, VAR_9);
    if (VAR_4->offset_size)
    {
        int VAR_13[4] = {VAR_10->u, VAR_10->v, VAR_10->w};
        FUNC_1(VAR_11, ", ");
        FUNC_3(VAR_11, VAR_13, VAR_4->offset_size);
    }
    FUNC_1(VAR_11, "))%s);\n", VAR_12);
}
