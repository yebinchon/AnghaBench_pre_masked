
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_signature_element {int mask; int register_idx; int component_type; int sysval_semantic; scalar_t__ stream_idx; int semantic_idx; int semantic_name; } ;
struct TYPE_5__ {TYPE_1__* idx; } ;
struct TYPE_6__ {int write_mask; TYPE_2__ reg; } ;
struct wined3d_shader_semantic {TYPE_3__ reg; int usage; int usage_idx; } ;
struct TYPE_4__ {int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_signature_element *VAR_1,
        const struct wined3d_shader_semantic *VAR_2)
{
    VAR_1->semantic_name = FUNC_0(VAR_2->usage);
    VAR_1->semantic_idx = VAR_2->usage_idx;
    VAR_1->stream_idx = 0;
    VAR_1->sysval_semantic = FUNC_1(VAR_2->usage);
    VAR_1->component_type = VAR_0;
    VAR_1->register_idx = VAR_2->reg.reg.idx[0].offset;
    VAR_1->mask = VAR_2->reg.write_mask;
}
