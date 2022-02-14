
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int type; } ;
struct wined3d_shader_instruction {scalar_t__ flags; TYPE_8__* src; TYPE_9__* dst; TYPE_7__* ctx; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct glsl_src_param {char* param_str; } ;
typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
typedef enum wined3d_shader_register_type { ____Placeholder_wined3d_shader_register_type } wined3d_shader_register_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_14__ {int data_type; } ;
struct TYPE_22__ {TYPE_1__ reg; } ;
struct TYPE_16__ {int type; TYPE_2__* idx; } ;
struct TYPE_21__ {TYPE_3__ reg; } ;
struct TYPE_20__ {TYPE_6__* reg_maps; struct wined3d_string_buffer* buffer; struct wined3d_gl_info* gl_info; } ;
struct TYPE_19__ {TYPE_5__* uav_resource_info; int sampler_map; TYPE_4__* resource_info; struct wined3d_shader_version shader_version; } ;
struct TYPE_18__ {int type; } ;
struct TYPE_17__ {int type; } ;
struct TYPE_15__ {unsigned int offset; } ;
struct TYPE_13__ {int resinfo_size; } ;
typedef int DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_11__* VAR_8 ;
 int FUNC_4 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_5 (struct wined3d_shader_instruction const*,TYPE_8__*,int ,struct glsl_src_param*) ;
 int FUNC_6 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_9__*,int) ;
 unsigned int FUNC_7 (int *,unsigned int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_8__*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_10(const struct wined3d_shader_instruction *VAR_9)
{
    const struct wined3d_shader_version *VAR_10 = &VAR_9->ctx->reg_maps->shader_version;
    const struct wined3d_gl_info *VAR_11 = VAR_9->ctx->gl_info;
    struct wined3d_string_buffer *VAR_12 = VAR_9->ctx->buffer;
    enum wined3d_shader_resource_type VAR_13;
    enum wined3d_shader_register_type VAR_14;
    unsigned int VAR_15, VAR_16, VAR_17;
    enum wined3d_data_type VAR_18;
    struct glsl_src_param VAR_19;
    BOOL VAR_20;
    char VAR_21[6];
    DWORD VAR_22;

    VAR_18 = VAR_9->dst[0].reg.data_type;
    if (VAR_9->flags == VAR_2)
        VAR_18 = VAR_6;
    else if (VAR_9->flags)
        FUNC_2("Unhandled flags %#x.\n", VAR_9->flags);

    VAR_14 = VAR_9->src[1].reg.type;
    VAR_15 = VAR_9->src[1].reg.idx[0].offset;
    FUNC_5(VAR_9, &VAR_9->src[0], VAR_5, &VAR_19);
    if (VAR_14 == VAR_3)
    {
        VAR_13 = VAR_9->ctx->reg_maps->resource_info[VAR_15].type;
        VAR_16 = FUNC_7(&VAR_9->ctx->reg_maps->sampler_map,
                VAR_15, VAR_7);
    }
    else
    {
        VAR_13 = VAR_9->ctx->reg_maps->uav_resource_info[VAR_15].type;
        VAR_16 = VAR_15;
    }

    if (VAR_13 >= FUNC_0(VAR_8))
    {
        FUNC_1("Unexpected resource type %#x.\n", VAR_13);
        return;
    }

    VAR_22 = FUNC_6(VAR_12, VAR_9, &VAR_9->dst[0], VAR_18);
    FUNC_9(&VAR_9->src[1], VAR_1, VAR_22, VAR_21);

    if (VAR_18 == VAR_6)
        FUNC_4(VAR_12, "uvec4(");
    else
        FUNC_4(VAR_12, "vec4(");

    if (VAR_14 == VAR_3)
    {
        FUNC_4(VAR_12, "textureSize(%s_sampler%u",
                FUNC_8(VAR_10->type), VAR_16);
    }
    else
    {
        FUNC_4(VAR_12, "imageSize(%s_image%u",
                FUNC_8(VAR_10->type), VAR_16);
    }

    VAR_20 = FUNC_3(VAR_13) && VAR_14 != VAR_4;
    if (VAR_20)
        FUNC_4(VAR_12, ", %s", VAR_19.param_str);
    FUNC_4(VAR_12, "), ");

    for (VAR_17 = 0; VAR_17 < 3 - VAR_8[VAR_13].resinfo_size; ++VAR_17)
        FUNC_4(VAR_12, "0, ");

    if (VAR_20)
    {
        if (VAR_11->supported[VAR_0])
        {
            FUNC_4(VAR_12, "textureQueryLevels(%s_sampler%u)",
                    FUNC_8(VAR_10->type), VAR_16);
        }
        else
        {
            FUNC_2("textureQueryLevels is not supported, returning 1 level.\n");
            FUNC_4(VAR_12, "1");
        }
    }
    else
    {
        FUNC_4(VAR_12, "1");
    }

    FUNC_4(VAR_12, ")%s);\n", VAR_21);
}
