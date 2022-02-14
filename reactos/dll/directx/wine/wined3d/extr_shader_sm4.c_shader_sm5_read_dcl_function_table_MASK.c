
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_2__ {int index; } ;
struct wined3d_shader_instruction {TYPE_1__ declaration; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int const) ;

__attribute__((used)) static void FUNC_1(struct wined3d_shader_instruction *VAR_0,
        DWORD VAR_1, DWORD VAR_2, const DWORD *VAR_3, unsigned int VAR_4,
        struct wined3d_sm4_data *VAR_5)
{
    VAR_0->declaration.index = *VAR_3++;
    FUNC_0("Ignoring set of function bodies (count %u).\n", *VAR_3);
}
