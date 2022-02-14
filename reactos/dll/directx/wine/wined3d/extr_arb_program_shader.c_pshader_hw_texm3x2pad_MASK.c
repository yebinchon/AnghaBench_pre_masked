
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_register {TYPE_3__* idx; } ;
struct wined3d_shader_instruction {int * src; TYPE_2__* dst; TYPE_1__* ctx; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_5__ {struct wined3d_shader_register reg; } ;
struct TYPE_4__ {struct wined3d_string_buffer* buffer; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,scalar_t__,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_register*,char*,int *) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,char*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    DWORD VAR_1 = VAR_0->dst[0].reg.idx[0].offset;
    struct wined3d_string_buffer *VAR_2 = VAR_0->ctx->buffer;
    char VAR_3[50], VAR_4[50];
    BOOL VAR_5;
    struct wined3d_shader_register VAR_6 = VAR_0->dst[0].reg;

    FUNC_2(VAR_0, &VAR_0->src[0], 0, VAR_3);



    VAR_6.idx[0].offset = VAR_1 + 1;
    FUNC_1(VAR_0, &VAR_6, VAR_4, &VAR_5);
    FUNC_0(VAR_2, "DP3 %s.x, fragment.texcoord[%u], %s;\n", VAR_4, VAR_1, VAR_3);
}
