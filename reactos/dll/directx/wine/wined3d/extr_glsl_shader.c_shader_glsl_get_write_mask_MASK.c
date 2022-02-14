
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_dst_param {int reg; int write_mask; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static DWORD FUNC_2(const struct wined3d_shader_dst_param *VAR_1, char *VAR_2)
{
    DWORD VAR_3 = VAR_1->write_mask;

    if (FUNC_1(&VAR_1->reg))
    {
        VAR_3 = VAR_0;
        *VAR_2 = '\0';
    }
    else
    {
        FUNC_0(VAR_3, VAR_2);
    }

    return VAR_3;
}
