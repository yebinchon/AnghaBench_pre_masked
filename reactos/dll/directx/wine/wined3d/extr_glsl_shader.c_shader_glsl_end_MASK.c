
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_parser_state {int current_loop_depth; int current_loop_reg; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_1__* ctx; } ;
struct TYPE_2__ {int buffer; struct wined3d_shader_parser_state* state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_shader_parser_state *VAR_3 = VAR_2->ctx->state;

    FUNC_0(VAR_2->ctx->buffer, "}\n");

    if (VAR_2->handler_idx == VAR_0)
    {
        --VAR_3->current_loop_depth;
        --VAR_3->current_loop_reg;
    }

    if (VAR_2->handler_idx == VAR_1)
    {
        --VAR_3->current_loop_depth;
    }
}
