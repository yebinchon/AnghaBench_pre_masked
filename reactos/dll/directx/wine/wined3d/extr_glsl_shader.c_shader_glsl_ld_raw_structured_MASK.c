
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


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__* idx; } ;
struct wined3d_shader_src_param {int swizzle; TYPE_3__ reg; } ;
struct TYPE_8__ {int type; } ;
struct wined3d_shader_reg_maps {unsigned int tgsm_count; TYPE_4__* tgsm; TYPE_7__* uav_resource_info; int sampler_map; TYPE_7__* resource_info; TYPE_1__ shader_version; } ;
struct wined3d_shader_instruction {int src_count; scalar_t__ handler_idx; TYPE_5__* ctx; struct wined3d_shader_dst_param* dst; struct wined3d_shader_src_param* src; } ;
struct TYPE_13__ {int data_type; } ;
struct wined3d_shader_dst_param {unsigned int write_mask; TYPE_6__ reg; } ;
struct shader_glsl_ctx_priv {int string_buffers; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_14__ {unsigned int stride; } ;
struct TYPE_12__ {struct wined3d_string_buffer* buffer; struct shader_glsl_ctx_priv* backend_data; struct wined3d_shader_reg_maps* reg_maps; } ;
struct TYPE_11__ {unsigned int stride; } ;
struct TYPE_9__ {unsigned int offset; } ;


 unsigned int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,char const*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,struct wined3d_shader_src_param*,unsigned int,struct glsl_src_param*) ;
 int FUNC_4 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,int ) ;
 unsigned int FUNC_5 (int *,unsigned int,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 struct wined3d_string_buffer* FUNC_9 (int ) ;
 int FUNC_10 (int ,struct wined3d_string_buffer*) ;
 int FUNC_11 (struct wined3d_string_buffer*,char*) ;

__attribute__((used)) static void FUNC_12(const struct wined3d_shader_instruction *VAR_5)
{
    const char *VAR_6 = FUNC_6(VAR_5->ctx->reg_maps->shader_version.type);
    const struct wined3d_shader_src_param *VAR_7 = &VAR_5->src[VAR_5->src_count - 1];
    unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;
    const struct wined3d_shader_reg_maps *VAR_14 = VAR_5->ctx->reg_maps;
    struct shader_glsl_ctx_priv *VAR_15 = VAR_5->ctx->backend_data;
    struct wined3d_string_buffer *VAR_16 = VAR_5->ctx->buffer;
    struct glsl_src_param VAR_17, VAR_18;
    struct wined3d_string_buffer *VAR_19;
    struct wined3d_shader_dst_param VAR_20;
    const char *VAR_21, *VAR_22;

    VAR_10 = VAR_7->reg.idx[0].offset;
    if (VAR_7->reg.type == VAR_1)
    {
        if (VAR_10 >= FUNC_0(VAR_14->resource_info))
        {
            FUNC_1("Invalid resource index %u.\n", VAR_10);
            return;
        }
        VAR_12 = VAR_14->resource_info[VAR_10].stride;
        VAR_11 = FUNC_5(&VAR_14->sampler_map, VAR_10, VAR_4);
        VAR_21 = "texelFetch";
        VAR_22 = "sampler";
    }
    else if (VAR_7->reg.type == VAR_2)
    {
        if (VAR_10 >= FUNC_0(VAR_14->uav_resource_info))
        {
            FUNC_1("Invalid UAV index %u.\n", VAR_10);
            return;
        }
        VAR_12 = VAR_14->uav_resource_info[VAR_10].stride;
        VAR_11 = VAR_10;
        VAR_21 = "imageLoad";
        VAR_22 = "image";
    }
    else
    {
        if (VAR_10 >= VAR_14->tgsm_count)
        {
            FUNC_1("Invalid TGSM index %u.\n", VAR_10);
            return;
        }
        VAR_12 = VAR_14->tgsm[VAR_10].stride;
        VAR_11 = VAR_10;
        VAR_21 = ((void*)0);
        VAR_22 = "g";
    }

    VAR_19 = FUNC_9(VAR_15->string_buffers);
    if (VAR_5->handler_idx == VAR_0)
    {
        FUNC_3(VAR_5, &VAR_5->src[VAR_13++], VAR_3, &VAR_17);
        FUNC_2(VAR_19, "%s * %u + ", VAR_17.param_str, VAR_12);
    }
    FUNC_3(VAR_5, &VAR_5->src[VAR_13++], VAR_3, &VAR_18);
    FUNC_2(VAR_19, "%s / 4", VAR_18.param_str);

    VAR_20 = VAR_5->dst[0];
    if (FUNC_7(VAR_20.write_mask) > 1)
    {


        FUNC_2(VAR_16, "tmp0.x = intBitsToFloat(%s);\n", VAR_19->buffer);
        FUNC_11(VAR_19, "floatBitsToInt(tmp0.x)");
    }

    for (VAR_8 = 0; VAR_8 < 4; ++VAR_8)
    {
        VAR_20.write_mask = VAR_5->dst[0].write_mask & (VAR_3 << VAR_8);
        if (!FUNC_4(VAR_5->ctx->buffer, VAR_5, &VAR_20, VAR_20.reg.data_type))
            continue;

        VAR_9 = FUNC_8(VAR_7->swizzle, VAR_8);
        if (VAR_21)
            FUNC_2(VAR_16, "%s(%s_%s%u, %s + %u).x);\n",
                    VAR_21, VAR_6, VAR_22, VAR_11, VAR_19->buffer, VAR_9);
        else
            FUNC_2(VAR_16, "%s_%s%u[%s + %u]);\n",
                    VAR_6, VAR_22, VAR_11, VAR_19->buffer, VAR_9);
    }

    FUNC_10(VAR_15->string_buffers, VAR_19);
}
