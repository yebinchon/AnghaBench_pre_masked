
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; int * dst; TYPE_3__* ctx; } ;
struct TYPE_6__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int,char*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    char VAR_2[50];
    char VAR_3[3][50];


    if(FUNC_5(VAR_0->ctx->reg_maps->shader_version.type)) {
        FUNC_4(VAR_0);
        return;
    }

    FUNC_1(VAR_0, &VAR_0->dst[0], VAR_2);
    FUNC_3(VAR_0, &VAR_0->src[0], 0, VAR_3[0]);
    FUNC_3(VAR_0, &VAR_0->src[1], 1, VAR_3[1]);
    FUNC_3(VAR_0, &VAR_0->src[2], 2, VAR_3[2]);

    FUNC_0(VAR_1, "SUB TA, %s, %s;\n", VAR_3[1], VAR_3[2]);
    FUNC_0(VAR_1, "MAD%s %s, %s, TA, %s;\n", FUNC_2(VAR_0),
                   VAR_2, VAR_3[0], VAR_3[2]);
}
