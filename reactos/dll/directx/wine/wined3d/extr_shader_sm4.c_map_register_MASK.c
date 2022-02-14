
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct wined3d_sm4_data {unsigned int* output_map; TYPE_1__ shader_version; } ;
struct wined3d_shader_register {TYPE_2__* idx; int type; } ;
struct TYPE_4__ {unsigned int offset; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static void FUNC_2(const struct wined3d_sm4_data *VAR_2, struct wined3d_shader_register *VAR_3)
{
    switch (VAR_2->shader_version.type)
    {
        case 128:
            if (VAR_3->type == VAR_1)
            {
                unsigned int VAR_4 = VAR_3->idx[0].offset;

                if (VAR_4 >= FUNC_0(VAR_2->output_map))
                {
                    FUNC_1("Invalid output index %u.\n", VAR_4);
                    break;
                }

                VAR_3->type = VAR_0;
                VAR_3->idx[0].offset = VAR_2->output_map[VAR_4];
            }
            break;

        default:
            break;
    }
}
