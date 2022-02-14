
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; int flags; TYPE_3__* ctx; } ;
struct TYPE_8__ {int loop; } ;
struct control_frame {TYPE_4__ no; } ;
struct TYPE_7__ {int backend_data; TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ shader_version; } ;
typedef scalar_t__ BOOL ;


 struct control_frame* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,char const*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int,char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    BOOL VAR_2 = FUNC_4(VAR_0->ctx->reg_maps->shader_version.type);
    const struct control_frame *VAR_3 = FUNC_0(VAR_0->ctx->backend_data);
    char VAR_4[50];
    char VAR_5[50];
    const char *VAR_6 = FUNC_1(VAR_0->flags);

    FUNC_3(VAR_0, &VAR_0->src[0], 0, VAR_4);
    FUNC_3(VAR_0, &VAR_0->src[1], 1, VAR_5);

    if(VAR_2)
    {



        FUNC_2(VAR_1, "SUBC TA, %s, %s;\n", VAR_4, VAR_5);
        FUNC_2(VAR_1, "BRA loop_%u_end (%s.x);\n", VAR_3->no.loop, VAR_6);
    }
    else
    {
        FUNC_2(VAR_1, "SUBC TA, %s, %s;\n", VAR_4, VAR_5);
        FUNC_2(VAR_1, "BRK (%s.x);\n", VAR_6);
    }
}
