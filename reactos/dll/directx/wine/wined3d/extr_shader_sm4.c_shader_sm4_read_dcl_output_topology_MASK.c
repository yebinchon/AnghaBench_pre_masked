
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ primitive_type; } ;
struct wined3d_shader_instruction {TYPE_2__ declaration; } ;
typedef enum wined3d_sm4_output_primitive_type { ____Placeholder_wined3d_sm4_output_primitive_type } wined3d_sm4_output_primitive_type ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_4,
        DWORD VAR_5, DWORD VAR_6, const DWORD *VAR_7, unsigned int VAR_8,
        struct wined3d_sm4_data *VAR_9)
{
    enum wined3d_sm4_output_primitive_type VAR_10;

    VAR_10 = (VAR_6 & VAR_1) >> VAR_2;
    if (VAR_10 >= FUNC_0(VAR_3))
        VAR_4->declaration.primitive_type.type = VAR_0;
    else
        VAR_4->declaration.primitive_type.type = VAR_3[VAR_10];

    if (VAR_4->declaration.primitive_type.type == VAR_0)
        FUNC_1("Unhandled output primitive type %#x.\n", VAR_10);
}
