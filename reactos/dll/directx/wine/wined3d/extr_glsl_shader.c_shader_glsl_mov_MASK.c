
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_5__* dst; TYPE_3__* ctx; int * src; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_4__ reg; } ;
struct TYPE_8__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; struct wined3d_gl_info* gl_info; } ;
struct TYPE_6__ {int major; scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ shader_version; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,unsigned int,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 int FUNC_3 (struct wined3d_gl_info const*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_4->ctx->gl_info;
    struct wined3d_string_buffer *VAR_6 = VAR_4->ctx->buffer;
    struct glsl_src_param VAR_7;
    DWORD VAR_8;

    VAR_8 = FUNC_2(VAR_6, VAR_4);
    FUNC_1(VAR_4, &VAR_4->src[0], VAR_8, &VAR_7);



    if (VAR_4->ctx->reg_maps->shader_version.major == 1
            && VAR_4->ctx->reg_maps->shader_version.type == VAR_3
            && VAR_4->dst[0].reg.type == VAR_2)
    {

        unsigned int VAR_9 = FUNC_4(VAR_8);
        if (VAR_9 > 1) {
            FUNC_0(VAR_6, "ivec%d(floor(%s)));\n", VAR_9, VAR_7.param_str);
        } else {
            FUNC_0(VAR_6, "int(floor(%s)));\n", VAR_7.param_str);
        }
    }
    else if (VAR_4->handler_idx == VAR_1)
    {
        unsigned int VAR_10 = FUNC_4(VAR_8);

        if (FUNC_3(VAR_5) >= 130 || VAR_5->supported[VAR_0])
        {
            if (VAR_10 > 1)
                FUNC_0(VAR_6, "ivec%d(round(%s)));\n", VAR_10, VAR_7.param_str);
            else
                FUNC_0(VAR_6, "int(round(%s)));\n", VAR_7.param_str);
        }
        else
        {
            if (VAR_10 > 1)
                FUNC_0(VAR_6, "ivec%d(floor(abs(%s) + vec%d(0.5)) * sign(%s)));\n",
                        VAR_10, VAR_7.param_str, VAR_10, VAR_7.param_str);
            else
                FUNC_0(VAR_6, "int(floor(abs(%s) + 0.5) * sign(%s)));\n",
                        VAR_7.param_str, VAR_7.param_str);
        }
    }
    else
    {
        FUNC_0(VAR_6, "%s);\n", VAR_7.param_str);
    }
}
