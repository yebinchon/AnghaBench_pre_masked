
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_src_param {int swizzle; int reg; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_src_param *VAR_0,
        BOOL VAR_1, DWORD VAR_2, char *VAR_3)
{
    if (FUNC_1(&VAR_0->reg))
        *VAR_3 = '\0';
    else
        FUNC_0(VAR_0->swizzle, VAR_1, VAR_2, VAR_3);
}
