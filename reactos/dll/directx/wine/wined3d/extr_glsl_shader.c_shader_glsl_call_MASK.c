
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_4__* src; TYPE_1__* ctx; } ;
struct TYPE_7__ {TYPE_2__* idx; } ;
struct TYPE_8__ {TYPE_3__ reg; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int buffer; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_shader_instruction *VAR_0)
{
    FUNC_0(VAR_0->ctx->buffer, "subroutine%u();\n", VAR_0->src[0].reg.idx[0].offset);
}
