
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; TYPE_2__* dst; int dst_count; } ;
struct glsl_dst_param {int mask_str; int reg_name; } ;
struct TYPE_4__ {int modifiers; } ;
struct TYPE_3__ {int buffer; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_2__*,struct glsl_dst_param*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_3)
{
    struct glsl_dst_param VAR_4;
    DWORD VAR_5;

    if (!VAR_3->dst_count) return;

    VAR_5 = VAR_3->dst[0].modifiers;
    if (!VAR_5) return;

    FUNC_2(VAR_3, &VAR_3->dst[0], &VAR_4);

    if (VAR_5 & VAR_2)
    {

        FUNC_1(VAR_3->ctx->buffer, "%s%s = clamp(%s%s, 0.0, 1.0);\n", VAR_4.reg_name,
                VAR_4.mask_str, VAR_4.reg_name, VAR_4.mask_str);
    }

    if (VAR_5 & VAR_0)
    {
        FUNC_0("_centroid modifier not handled\n");
    }

    if (VAR_5 & VAR_1)
    {

    }
}
