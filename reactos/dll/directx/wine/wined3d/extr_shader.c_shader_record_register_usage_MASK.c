
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_register {int type; TYPE_4__* idx; } ;
struct wined3d_shader_reg_maps {unsigned int texcoord; unsigned int address; unsigned int temporary; int input_rel_addressing; unsigned int input_registers; int fog; int point_size; int vpos; int usesfacing; int min_rel_offset; int max_rel_offset; unsigned int integer_constants; unsigned int boolean_constants; unsigned int rt_mask; int vocp; int constf; int usesrelconstF; } ;
struct TYPE_5__ {unsigned int input_reg_used; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;
struct wined3d_shader {TYPE_3__* limits; TYPE_2__ u; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;
struct TYPE_8__ {unsigned int offset; int rel_addr; } ;
struct TYPE_7__ {int constant_int; unsigned int constant_bool; int constant_float; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static BOOL FUNC_4(struct wined3d_shader *VAR_3, struct wined3d_shader_reg_maps *VAR_4,
        const struct wined3d_shader_register *VAR_5, enum wined3d_shader_type VAR_6, unsigned int VAR_7)
{
    switch (VAR_5->type)
    {
        case 128:
            if (VAR_6 == VAR_2)
                VAR_4->texcoord |= 1u << VAR_5->idx[0].offset;
            else
                VAR_4->address |= 1u << VAR_5->idx[0].offset;
            break;

        case 129:
            VAR_4->temporary |= 1u << VAR_5->idx[0].offset;
            break;

        case 133:
            if (VAR_5->idx[0].rel_addr)
                VAR_4->input_rel_addressing = 1;
            if (VAR_6 == VAR_2)
            {




                if (VAR_5->idx[0].rel_addr)
                    VAR_3->u.ps.input_reg_used = ~0u;
                else
                    VAR_3->u.ps.input_reg_used |= 1u << VAR_5->idx[0].offset;
            }
            else
            {
                VAR_4->input_registers |= 1u << VAR_5->idx[0].offset;
            }
            break;

        case 130:
            if (VAR_5->idx[0].offset == 1)
                VAR_4->fog = 1;
            if (VAR_5->idx[0].offset == 2)
                VAR_4->point_size = 1;
            break;

        case 132:
            if (VAR_6 == VAR_2)
            {
                if (!VAR_5->idx[0].offset)
                    VAR_4->vpos = 1;
                else if (VAR_5->idx[0].offset == 1)
                    VAR_4->usesfacing = 1;
            }
            break;

        case 136:
            if (VAR_5->idx[0].rel_addr)
            {
                if (VAR_5->idx[0].offset < VAR_4->min_rel_offset)
                    VAR_4->min_rel_offset = VAR_5->idx[0].offset;
                if (VAR_5->idx[0].offset > VAR_4->max_rel_offset)
                    VAR_4->max_rel_offset = VAR_5->idx[0].offset;
                VAR_4->usesrelconstF = VAR_1;
            }
            else
            {
                if (VAR_5->idx[0].offset >= FUNC_2(VAR_3->limits->constant_float, VAR_7))
                {
                    FUNC_1("Shader using float constant %u which is not supported.\n", VAR_5->idx[0].offset);
                    return VAR_0;
                }
                else
                {
                    FUNC_3(VAR_4->constf, VAR_5->idx[0].offset, 1, 0x1);
                }
            }
            break;

        case 134:
            if (VAR_5->idx[0].offset >= VAR_3->limits->constant_int)
            {
                FUNC_1("Shader using integer constant %u which is not supported.\n", VAR_5->idx[0].offset);
                return VAR_0;
            }
            else
            {
                VAR_4->integer_constants |= (1u << VAR_5->idx[0].offset);
            }
            break;

        case 135:
            if (VAR_5->idx[0].offset >= VAR_3->limits->constant_bool)
            {
                FUNC_1("Shader using bool constant %u which is not supported.\n", VAR_5->idx[0].offset);
                return VAR_0;
            }
            else
            {
                VAR_4->boolean_constants |= (1u << VAR_5->idx[0].offset);
            }
            break;

        case 137:
            VAR_4->rt_mask |= (1u << VAR_5->idx[0].offset);
            break;

        case 131:
            VAR_4->vocp = 1;
            break;

        default:
            FUNC_0("Not recording register of type %#x and [%#x][%#x].\n",
                    VAR_5->type, VAR_5->idx[0].offset, VAR_5->idx[1].offset);
            break;
    }
    return VAR_1;
}
