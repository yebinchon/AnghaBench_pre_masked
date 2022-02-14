
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_4__ {int byte_stride; int reg; } ;
struct TYPE_3__ {TYPE_2__ structured_resource; } ;
struct wined3d_shader_instruction {int flags; TYPE_1__ declaration; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wined3d_sm4_data*,int const**,int const*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_3,
        DWORD VAR_4, DWORD VAR_5, const DWORD *VAR_6, unsigned int VAR_7,
        struct wined3d_sm4_data *VAR_8)
{
    FUNC_1(VAR_8, &VAR_6, &VAR_6[VAR_7], VAR_0,
            &VAR_3->declaration.structured_resource.reg);
    VAR_3->flags = (VAR_5 & VAR_1) >> VAR_2;
    VAR_3->declaration.structured_resource.byte_stride = *VAR_6;
    if (VAR_3->declaration.structured_resource.byte_stride % 4)
        FUNC_0("Byte stride %u is not multiple of 4.\n", VAR_3->declaration.structured_resource.byte_stride);
}
