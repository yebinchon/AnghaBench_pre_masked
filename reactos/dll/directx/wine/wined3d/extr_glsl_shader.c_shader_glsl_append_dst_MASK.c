
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_2__* dst; } ;
struct TYPE_3__ {int data_type; } ;
struct TYPE_4__ {TYPE_1__ reg; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_2__*,int ) ;

__attribute__((used)) static DWORD FUNC_1(struct wined3d_string_buffer *VAR_0, const struct wined3d_shader_instruction *VAR_1)
{
    return FUNC_0(VAR_0, VAR_1, &VAR_1->dst[0], VAR_1->dst[0].reg.data_type);
}
