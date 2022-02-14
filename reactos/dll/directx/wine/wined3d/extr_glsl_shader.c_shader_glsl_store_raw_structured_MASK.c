
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
struct TYPE_8__ {int type; } ;
struct wined3d_shader_reg_maps {unsigned int tgsm_count; TYPE_7__* uav_resource_info; TYPE_5__* tgsm; TYPE_1__ shader_version; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; int * src; TYPE_6__* dst; TYPE_2__* ctx; } ;
struct shader_glsl_ctx_priv {int string_buffers; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_14__ {unsigned int stride; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__* idx; } ;
struct TYPE_13__ {unsigned int write_mask; TYPE_4__ reg; } ;
struct TYPE_12__ {unsigned int stride; } ;
struct TYPE_10__ {unsigned int offset; } ;
struct TYPE_9__ {struct wined3d_string_buffer* buffer; struct shader_glsl_ctx_priv* backend_data; struct wined3d_shader_reg_maps* reg_maps; } ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 unsigned int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,char const*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,unsigned int,struct glsl_src_param*) ;
 char* FUNC_4 (int ) ;
 struct wined3d_string_buffer* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct wined3d_string_buffer*) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_3)
{
    const char *VAR_4 = FUNC_4(VAR_3->ctx->reg_maps->shader_version.type);
    const struct wined3d_shader_reg_maps *VAR_5 = VAR_3->ctx->reg_maps;
    struct shader_glsl_ctx_priv *VAR_6 = VAR_3->ctx->backend_data;
    struct wined3d_string_buffer *VAR_7 = VAR_3->ctx->buffer;
    struct glsl_src_param VAR_8, VAR_9, VAR_10;
    unsigned int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
    struct wined3d_string_buffer *VAR_15;
    DWORD VAR_16;
    BOOL VAR_17;

    VAR_12 = VAR_3->dst[0].reg.idx[0].offset;
    VAR_17 = VAR_3->dst[0].reg.type == VAR_1;
    if (VAR_17)
    {
        if (VAR_12 >= VAR_5->tgsm_count)
        {
            FUNC_1("Invalid TGSM index %u.\n", VAR_12);
            return;
        }
        VAR_13 = VAR_5->tgsm[VAR_12].stride;
    }
    else
    {
        if (VAR_12 >= FUNC_0(VAR_5->uav_resource_info))
        {
            FUNC_1("Invalid UAV index %u.\n", VAR_12);
            return;
        }
        VAR_13 = VAR_5->uav_resource_info[VAR_12].stride;
    }

    VAR_15 = FUNC_5(VAR_6->string_buffers);
    if (VAR_3->handler_idx == VAR_0)
    {
        FUNC_3(VAR_3, &VAR_3->src[VAR_14++], VAR_2, &VAR_8);
        FUNC_2(VAR_15, "%s * %u + ", VAR_8.param_str, VAR_13);
    }
    FUNC_3(VAR_3, &VAR_3->src[VAR_14++], VAR_2, &VAR_9);
    FUNC_2(VAR_15, "%s / 4", VAR_9.param_str);

    for (VAR_11 = 0; VAR_11 < 4; ++VAR_11)
    {
        if (!(VAR_16 = VAR_3->dst[0].write_mask & (VAR_2 << VAR_11)))
            continue;

        FUNC_3(VAR_3, &VAR_3->src[VAR_14], VAR_16, &VAR_10);

        if (VAR_17)
            FUNC_2(VAR_7, "%s_g%u[%s + %u] = %s;\n",
                    VAR_4, VAR_12, VAR_15->buffer, VAR_11, VAR_10.param_str);
        else
            FUNC_2(VAR_7, "imageStore(%s_image%u, %s + %u, uvec4(%s, 0, 0, 0));\n",
                    VAR_4, VAR_12, VAR_15->buffer, VAR_11, VAR_10.param_str);
    }

    FUNC_6(VAR_6->string_buffers, VAR_15);
}
