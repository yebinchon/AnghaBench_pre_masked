
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm1_data {int dummy; } ;
struct wined3d_shader_src_param {int dummy; } ;
struct wined3d_shader_dst_param {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_sm1_data*,int const*,int*,int*) ;
 int FUNC_1 (int,struct wined3d_shader_src_param*,struct wined3d_shader_dst_param*) ;
 int FUNC_2 (int,int *,struct wined3d_shader_src_param*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_sm1_data *VAR_1, const DWORD **VAR_2,
        struct wined3d_shader_dst_param *VAR_3, struct wined3d_shader_src_param *VAR_4)
{
    DWORD VAR_5, VAR_6;

    *VAR_2 += FUNC_0(VAR_1, *VAR_2, &VAR_5, &VAR_6);
    if (VAR_5 & VAR_0)
    {
        FUNC_2(VAR_6, ((void*)0), VAR_4);
        FUNC_1(VAR_5, VAR_4, VAR_3);
    }
    else
    {
        FUNC_1(VAR_5, ((void*)0), VAR_3);
    }
}
