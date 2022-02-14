
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* dst; TYPE_2__* ctx; } ;
struct color_fixup_desc {int dummy; } ;
struct TYPE_6__ {int data_type; } ;
struct TYPE_5__ {int buffer; } ;
struct TYPE_4__ {int write_mask; TYPE_3__ reg; } ;
typedef int BOOL ;


 int FUNC_0 (int ,char*,int ,struct color_fixup_desc) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int *,struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_0, struct color_fixup_desc VAR_1)
{
    char VAR_2[256];
    BOOL VAR_3;

    FUNC_1(&VAR_0->dst[0].reg, VAR_0->dst[0].reg.data_type, VAR_2, &VAR_3, VAR_0);
    FUNC_0(VAR_0->ctx->buffer, VAR_2, VAR_0->dst[0].write_mask, VAR_1);
}
