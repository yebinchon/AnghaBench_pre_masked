
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm4_data {int dummy; } ;
struct wined3d_shader_src_param {int dummy; } ;
struct wined3d_shader_register_index {scalar_t__ offset; struct wined3d_shader_src_param* rel_addr; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wined3d_shader_src_param* FUNC_1 (struct wined3d_sm4_data*) ;
 int FUNC_2 (struct wined3d_sm4_data*,int const**,int const*,int ,struct wined3d_shader_src_param*) ;

__attribute__((used)) static BOOL FUNC_3(struct wined3d_sm4_data *VAR_5, const DWORD **VAR_6, const DWORD *VAR_7,
        DWORD VAR_8, struct wined3d_shader_register_index *VAR_9)
{
    if (VAR_8 & VAR_4)
    {
        struct wined3d_shader_src_param *VAR_10 = FUNC_1(VAR_5);

        if (!(VAR_9->rel_addr = VAR_10))
        {
            FUNC_0("Failed to get src param for relative addressing.\n");
            return VAR_0;
        }

        if (VAR_8 & VAR_3)
            VAR_9->offset = *(*VAR_6)++;
        else
            VAR_9->offset = 0;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_2, VAR_10);
    }
    else
    {
        VAR_9->rel_addr = ((void*)0);
        VAR_9->offset = *(*VAR_6)++;
    }

    return VAR_1;
}
