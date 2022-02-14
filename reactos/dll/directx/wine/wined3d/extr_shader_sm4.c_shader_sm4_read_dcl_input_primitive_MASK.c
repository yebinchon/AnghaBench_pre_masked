
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_3__ {int patch_vertex_count; int type; } ;
struct TYPE_4__ {TYPE_1__ primitive_type; } ;
struct wined3d_shader_instruction {TYPE_2__ declaration; } ;
typedef enum wined3d_sm4_input_primitive_type { ____Placeholder_wined3d_sm4_input_primitive_type } wined3d_sm4_input_primitive_type ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_7,
        DWORD VAR_8, DWORD VAR_9, const DWORD *VAR_10, unsigned int VAR_11,
        struct wined3d_sm4_data *VAR_12)
{
    enum wined3d_sm4_input_primitive_type VAR_13;

    VAR_13 = (VAR_9 & VAR_2) >> VAR_3;
    if (VAR_4 <= VAR_13 && VAR_13 <= VAR_5)
    {
        VAR_7->declaration.primitive_type.type = VAR_0;
        VAR_7->declaration.primitive_type.patch_vertex_count = VAR_13 - VAR_4 + 1;
    }
    else if (VAR_13 >= FUNC_0(VAR_6))
    {
        VAR_7->declaration.primitive_type.type = VAR_1;
    }
    else
    {
        VAR_7->declaration.primitive_type.type = VAR_6[VAR_13];
    }

    if (VAR_7->declaration.primitive_type.type == VAR_1)
        FUNC_1("Unhandled input primitive type %#x.\n", VAR_13);
}
