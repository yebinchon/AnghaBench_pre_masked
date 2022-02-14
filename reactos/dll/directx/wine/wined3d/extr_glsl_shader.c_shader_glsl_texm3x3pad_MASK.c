
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_tex_mx {int* texcoord_w; scalar_t__ current_row; } ;
struct wined3d_shader_instruction {int * src; TYPE_4__* dst; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_7__ {TYPE_2__* idx; } ;
struct TYPE_8__ {TYPE_3__ reg; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {struct wined3d_shader_tex_mx* tex_mx; struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,scalar_t__,int,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_3)
{
    DWORD VAR_4 = VAR_0 | VAR_1 | VAR_2;
    struct wined3d_string_buffer *VAR_5 = VAR_3->ctx->buffer;
    struct wined3d_shader_tex_mx *VAR_6 = VAR_3->ctx->tex_mx;
    DWORD VAR_7 = VAR_3->dst[0].reg.idx[0].offset;
    struct glsl_src_param VAR_8;

    FUNC_1(VAR_3, &VAR_3->src[0], VAR_4, &VAR_8);
    FUNC_0(VAR_5, "tmp0.%c = dot(T%u.xyz, %s);\n", 'x' + VAR_6->current_row, VAR_7, VAR_8.param_str);
    VAR_6->texcoord_w[VAR_6->current_row++] = VAR_7;
}
