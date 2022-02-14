
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_3__ {int z; int y; int x; } ;
struct TYPE_4__ {TYPE_1__ thread_group_size; } ;
struct wined3d_shader_instruction {TYPE_2__ declaration; } ;
typedef int DWORD ;



__attribute__((used)) static void FUNC_0(struct wined3d_shader_instruction *VAR_0,
        DWORD VAR_1, DWORD VAR_2, const DWORD *VAR_3, unsigned int VAR_4,
        struct wined3d_sm4_data *VAR_5)
{
    VAR_0->declaration.thread_group_size.x = *VAR_3++;
    VAR_0->declaration.thread_group_size.y = *VAR_3++;
    VAR_0->declaration.thread_group_size.z = *VAR_3++;
}
