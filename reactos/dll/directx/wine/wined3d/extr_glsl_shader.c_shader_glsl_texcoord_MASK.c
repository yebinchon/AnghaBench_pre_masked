
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_9__* src; TYPE_8__* dst; TYPE_3__* ctx; } ;
struct glsl_src_param {int param_str; } ;
typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;
struct TYPE_17__ {TYPE_6__* idx; } ;
struct TYPE_19__ {int modifiers; TYPE_7__ reg; } ;
struct TYPE_15__ {TYPE_4__* idx; } ;
struct TYPE_18__ {TYPE_5__ reg; } ;
struct TYPE_16__ {int offset; } ;
struct TYPE_14__ {int offset; } ;
struct TYPE_13__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_11__ {int major; int minor; } ;
struct TYPE_12__ {TYPE_1__ shader_version; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,int ,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_9__*,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 int FUNC_3 (TYPE_9__*,int ,int ,char*) ;
 int FUNC_4 (TYPE_8__*,char*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_5)
{

    struct wined3d_string_buffer *VAR_6 = VAR_5->ctx->buffer;
    DWORD VAR_7 = FUNC_2(VAR_5->ctx->buffer, VAR_5);

    if (!(VAR_5->ctx->reg_maps->shader_version.major == 1 && VAR_5->ctx->reg_maps->shader_version.minor == 4))
    {
        char VAR_8[6];

        FUNC_4(&VAR_5->dst[0], VAR_8);
        FUNC_0(VAR_6, "clamp(ffp_texcoord[%u], 0.0, 1.0)%s);\n",
                VAR_5->dst[0].reg.idx[0].offset, VAR_8);
    }
    else
    {
        enum wined3d_shader_src_modifier VAR_9 = VAR_5->src[0].modifiers;
        DWORD VAR_10 = VAR_5->src[0].reg.idx[0].offset;
        char VAR_11[6];

        FUNC_3(&VAR_5->src[0], VAR_0, VAR_7, VAR_11);

        if (VAR_9 == VAR_2 || VAR_9 == VAR_1)
        {
            unsigned int VAR_12 = FUNC_5(VAR_7);
            struct glsl_src_param VAR_13;
            DWORD VAR_14 = VAR_9 == VAR_2 ? VAR_3 : VAR_4;

            FUNC_1(VAR_5, &VAR_5->src[0], VAR_14, &VAR_13);

            if (VAR_12 > 1)
                FUNC_0(VAR_6, "ffp_texcoord[%u]%s / vec%d(%s));\n", VAR_10, VAR_11, VAR_12, VAR_13.param_str);
            else
                FUNC_0(VAR_6, "ffp_texcoord[%u]%s / %s);\n", VAR_10, VAR_11, VAR_13.param_str);
        }
        else
        {
            FUNC_0(VAR_6, "ffp_texcoord[%u]%s);\n", VAR_10, VAR_11);
        }
    }
}
