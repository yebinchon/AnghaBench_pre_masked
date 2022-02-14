
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_4__* ctx; TYPE_3__* src; } ;
struct TYPE_8__ {int buffer; } ;
struct TYPE_6__ {TYPE_1__* idx; } ;
struct TYPE_7__ {TYPE_2__ reg; } ;
struct TYPE_5__ {unsigned int offset; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_1)
{
    unsigned int VAR_2 = VAR_1->handler_idx == VAR_0 ? 0 : VAR_1->src[0].reg.idx[0].offset;

    if (!VAR_2)
        FUNC_1(VAR_1->ctx->buffer, "EndPrimitive();\n");
    else
        FUNC_0("Unhandled primitive stream %u.\n", VAR_2);
}
