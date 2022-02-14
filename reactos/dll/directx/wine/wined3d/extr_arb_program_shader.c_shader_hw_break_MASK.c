
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; } ;
struct TYPE_8__ {int loop; } ;
struct control_frame {TYPE_4__ no; } ;
struct TYPE_7__ {TYPE_2__* reg_maps; int backend_data; struct wined3d_string_buffer* buffer; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ shader_version; } ;
typedef scalar_t__ BOOL ;


 struct control_frame* FUNC_0 (int ) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    const struct control_frame *VAR_2 = FUNC_0(VAR_0->ctx->backend_data);
    BOOL VAR_3 = FUNC_2(VAR_0->ctx->reg_maps->shader_version.type);

    if(VAR_3)
    {
        FUNC_1(VAR_1, "BRA loop_%u_end;\n", VAR_2->no.loop);
    }
    else
    {
        FUNC_1(VAR_1, "BRK;\n");
    }
}
