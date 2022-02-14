
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_3__* src; TYPE_6__* ctx; } ;
struct TYPE_12__ {int buffer; TYPE_5__* reg_maps; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_11__ {TYPE_4__ shader_version; } ;
struct TYPE_8__ {TYPE_1__* idx; } ;
struct TYPE_9__ {TYPE_2__ reg; } ;
struct TYPE_7__ {int offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*,int ) ;
 int FUNC_1 (int ,struct wined3d_shader_instruction const*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_1)
{
    const char *VAR_2 = FUNC_2(VAR_1->ctx->reg_maps->shader_version.type);
    const char *VAR_3;

    if (VAR_1->handler_idx == VAR_0)
        VAR_3 = "atomicCounterIncrement";
    else
        VAR_3 = "atomicCounterDecrement";

    FUNC_1(VAR_1->ctx->buffer, VAR_1);
    FUNC_0(VAR_1->ctx->buffer, "%s(%s_counter%u));\n", VAR_3, VAR_2, VAR_1->src[0].reg.idx[0].offset);
}
