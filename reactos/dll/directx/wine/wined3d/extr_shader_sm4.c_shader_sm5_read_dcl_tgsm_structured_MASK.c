
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_4__ {int byte_stride; int structure_count; int reg; } ;
struct TYPE_3__ {TYPE_2__ tgsm_structured; } ;
struct wined3d_shader_instruction {TYPE_1__ declaration; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct wined3d_sm4_data*,int const**,int const*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_1,
        DWORD VAR_2, DWORD VAR_3, const DWORD *VAR_4, unsigned int VAR_5,
        struct wined3d_sm4_data *VAR_6)
{
    FUNC_1(VAR_6, &VAR_4, &VAR_4[VAR_5], VAR_0,
            &VAR_1->declaration.tgsm_structured.reg);
    VAR_1->declaration.tgsm_structured.byte_stride = *VAR_4++;
    VAR_1->declaration.tgsm_structured.structure_count = *VAR_4;
    if (VAR_1->declaration.tgsm_structured.byte_stride % 4)
        FUNC_0("Byte stride %u is not multiple of 4.\n", VAR_1->declaration.tgsm_structured.byte_stride);
}
