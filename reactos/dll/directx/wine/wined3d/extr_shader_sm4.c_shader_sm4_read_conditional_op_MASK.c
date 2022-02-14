
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm4_data {int * src_param; } ;
struct wined3d_shader_instruction {int flags; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wined3d_sm4_data*,int const**,int const*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct wined3d_shader_instruction *VAR_4,
        DWORD VAR_5, DWORD VAR_6, const DWORD *VAR_7, unsigned int VAR_8,
        struct wined3d_sm4_data *VAR_9)
{
    FUNC_0(VAR_9, &VAR_7, &VAR_7[VAR_8], VAR_0, &VAR_9->src_param[0]);
    VAR_4->flags = (VAR_6 & VAR_3) ?
            VAR_1 : VAR_2;
}
