
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_3__ {int last_register; int first_register; } ;
struct TYPE_4__ {TYPE_1__ index_range; } ;
struct wined3d_shader_instruction {TYPE_2__ declaration; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_sm4_data*,int const**,int const*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct wined3d_shader_instruction *VAR_1,
        DWORD VAR_2, DWORD VAR_3, const DWORD *VAR_4, unsigned int VAR_5,
        struct wined3d_sm4_data *VAR_6)
{
    FUNC_0(VAR_6, &VAR_4, &VAR_4[VAR_5], VAR_0,
            &VAR_1->declaration.index_range.first_register);
    VAR_1->declaration.index_range.last_register = *VAR_4;
}
