
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_2__ {int src; } ;
struct wined3d_shader_instruction {int flags; TYPE_1__ declaration; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_sm4_data*,int const**,int const*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct wined3d_shader_instruction *VAR_3,
        DWORD VAR_4, DWORD VAR_5, const DWORD *VAR_6, unsigned int VAR_7,
        struct wined3d_sm4_data *VAR_8)
{
    FUNC_0(VAR_8, &VAR_6, &VAR_6[VAR_7], VAR_1, &VAR_3->declaration.src);
    if (VAR_5 & VAR_2)
        VAR_3->flags |= VAR_0;
}
