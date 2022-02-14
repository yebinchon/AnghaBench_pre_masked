
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_2__* ctx; TYPE_5__* src; } ;
struct TYPE_9__ {TYPE_3__* idx; } ;
struct TYPE_10__ {TYPE_4__ reg; } ;
struct TYPE_8__ {unsigned int offset; } ;
struct TYPE_7__ {int buffer; TYPE_1__* gl_info; } ;
struct TYPE_6__ {int * supported; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_2)
{
    unsigned int VAR_3 = VAR_2->handler_idx == VAR_1 ? 0 : VAR_2->src[0].reg.idx[0].offset;

    FUNC_1(VAR_2->ctx->buffer, "setup_gs_output(gs_out);\n");
    if (!VAR_2->ctx->gl_info->supported[VAR_0])
        FUNC_2(VAR_2->ctx->buffer);

    if (!VAR_3)
        FUNC_1(VAR_2->ctx->buffer, "EmitVertex();\n");
    else
        FUNC_0("Unhandled primitive stream %u.\n", VAR_3);
}
