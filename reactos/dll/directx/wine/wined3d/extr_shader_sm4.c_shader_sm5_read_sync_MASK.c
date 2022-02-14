
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm4_data {int dummy; } ;
struct wined3d_shader_instruction {int flags; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wined3d_shader_instruction *VAR_2,
        DWORD VAR_3, DWORD VAR_4, const DWORD *VAR_5, unsigned int VAR_6,
        struct wined3d_sm4_data *VAR_7)
{
    VAR_2->flags = (VAR_4 & VAR_0) >> VAR_1;
}
