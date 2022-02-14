
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_2__ {int dst; } ;
struct wined3d_shader_instruction {int flags; TYPE_1__ declaration; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct wined3d_sm4_data*,int const**,int const*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_4,
        DWORD VAR_5, DWORD VAR_6, const DWORD *VAR_7, unsigned int VAR_8,
        struct wined3d_sm4_data *VAR_9)
{
    VAR_4->flags = (VAR_6 & VAR_2) >> VAR_3;
    if (VAR_4->flags & ~VAR_1)
        FUNC_0("Unhandled sampler mode %#x.\n", VAR_4->flags);
    FUNC_1(VAR_9, &VAR_7, &VAR_7[VAR_8], VAR_0, &VAR_4->declaration.dst);
}
