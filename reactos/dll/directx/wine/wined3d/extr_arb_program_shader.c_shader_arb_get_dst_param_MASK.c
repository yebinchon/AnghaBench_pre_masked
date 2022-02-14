
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_instruction {int dummy; } ;
struct wined3d_shader_dst_param {int reg; } ;
typedef int BOOL ;


 int FUNC_0 (struct wined3d_shader_instruction const*,int *,char*,int *) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_0,
        const struct wined3d_shader_dst_param *VAR_1, char *VAR_2)
{
    char VAR_3[255];
    char VAR_4[6];
    BOOL VAR_5;

    FUNC_0(VAR_0, &VAR_1->reg, VAR_3, &VAR_5);
    FUNC_3(VAR_2, VAR_3);

    FUNC_1(VAR_0, VAR_1, VAR_4);
    FUNC_2(VAR_2, VAR_4);
}
