
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_version {int major; } ;
struct wined3d_shader_instruction {TYPE_4__* ctx; } ;
struct TYPE_8__ {int buffer; TYPE_3__* state; TYPE_2__* shader; } ;
struct TYPE_7__ {int in_subroutine; } ;
struct TYPE_5__ {struct wined3d_shader_version shader_version; } ;
struct TYPE_6__ {TYPE_1__ reg_maps; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_0)
{
    const struct wined3d_shader_version *VAR_1 = &VAR_0->ctx->shader->reg_maps.shader_version;

    if (VAR_1->major >= 4 && !VAR_0->ctx->state->in_subroutine)
    {
        FUNC_1(VAR_0->ctx);
        FUNC_0(VAR_0->ctx->buffer, "return;\n");
    }
}
