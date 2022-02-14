
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
typedef enum wined3d_shader_input_sysval_semantic { ____Placeholder_wined3d_shader_input_sysval_semantic } wined3d_shader_input_sysval_semantic ;
struct TYPE_3__ {int sysval_semantic; int sysval_name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_1,
        enum wined3d_shader_input_sysval_semantic VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
    {
        if (VAR_0[VAR_3].sysval_semantic == VAR_2)
        {
            FUNC_1(VAR_1, "%s", VAR_0[VAR_3].sysval_name);
            return;
        }
    }

    FUNC_1(VAR_1, "unknown_shader_input_sysval_semantic(%#x)", VAR_2);
}
