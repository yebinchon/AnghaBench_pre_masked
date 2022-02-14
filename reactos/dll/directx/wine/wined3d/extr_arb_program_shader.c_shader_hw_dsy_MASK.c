
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_2__* dst; int * src; TYPE_1__* ctx; } ;
struct TYPE_4__ {int reg; } ;
struct TYPE_3__ {struct wined3d_string_buffer* buffer; } ;
typedef int BOOL ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_2__*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,char*,int *) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,int *,int ,char*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    char VAR_2[50];
    char VAR_3[50];
    char VAR_4[50];
    BOOL VAR_5;

    FUNC_1(VAR_0, &VAR_0->dst[0], VAR_3);
    FUNC_4(VAR_0, &VAR_0->src[0], 0, VAR_2);
    FUNC_3(VAR_0, &VAR_0->dst[0].reg, VAR_4, &VAR_5);

    FUNC_0(VAR_1, "DDY %s, %s;\n", VAR_3, VAR_2);
    FUNC_0(VAR_1, "MUL%s %s, %s, ycorrection.y;\n", FUNC_2(VAR_0), VAR_3, VAR_4);
}
