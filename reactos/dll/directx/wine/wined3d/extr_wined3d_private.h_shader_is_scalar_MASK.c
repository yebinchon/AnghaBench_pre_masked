
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_register {int type; int immconst_type; TYPE_1__* idx; } ;
struct TYPE_2__ {int offset; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_shader_register *VAR_3)
{
    switch (VAR_3->type)
    {
        case 128:

            if (VAR_3->idx[0].offset)
                return VAR_1;

            return VAR_0;

        case 136:
        case 135:
        case 134:
        case 137:
        case 132:
        case 130:
        case 129:
            return VAR_1;

        case 131:
            switch (VAR_3->idx[0].offset)
            {
                case 0:
                    return VAR_0;
                case 1:
                    return VAR_1;
                default:
                    return VAR_0;
            }

        case 133:
            return VAR_3->immconst_type == VAR_2;

        default:
            return VAR_0;
    }
}
