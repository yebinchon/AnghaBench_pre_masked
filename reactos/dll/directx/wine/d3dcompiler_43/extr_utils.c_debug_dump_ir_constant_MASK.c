
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hlsl_type {int dimy; int dimx; int base_type; } ;
struct TYPE_5__ {int * b; int * u; int * i; int * d; scalar_t__* f; } ;
struct TYPE_6__ {TYPE_2__ value; } ;
struct TYPE_4__ {struct hlsl_type* data_type; } ;
struct hlsl_ir_constant {TYPE_3__ v; TYPE_1__ node; } ;


 int VAR_0 ;





 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct hlsl_type*) ;

__attribute__((used)) static void FUNC_2(const struct hlsl_ir_constant *VAR_1)
{
    struct hlsl_type *VAR_2 = VAR_1->node.data_type;
    unsigned int VAR_3, VAR_4;

    if (VAR_2->dimy != 1)
        FUNC_0("{");
    for (VAR_4 = 0; VAR_4 < VAR_2->dimy; ++VAR_4)
    {
        if (VAR_2->dimx != 1)
            FUNC_0("{");
        for (VAR_3 = 0; VAR_3 < VAR_2->dimx; ++VAR_3)
        {
            switch (VAR_2->base_type)
            {
                case 130:
                    FUNC_0("%g ", (double)VAR_1->v.value.f[VAR_4 * VAR_2->dimx + VAR_3]);
                    break;
                case 131:
                    FUNC_0("%g ", VAR_1->v.value.d[VAR_4 * VAR_2->dimx + VAR_3]);
                    break;
                case 129:
                    FUNC_0("%d ", VAR_1->v.value.i[VAR_4 * VAR_2->dimx + VAR_3]);
                    break;
                case 128:
                    FUNC_0("%u ", VAR_1->v.value.u[VAR_4 * VAR_2->dimx + VAR_3]);
                    break;
                case 132:
                    FUNC_0("%s ", VAR_1->v.value.b[VAR_4 * VAR_2->dimx + VAR_3] == VAR_0 ? "false" : "true");
                    break;
                default:
                    FUNC_0("Constants of type %s not supported\n", FUNC_1(VAR_2));
            }
        }
        if (VAR_2->dimx != 1)
            FUNC_0("}");
    }
    if (VAR_2->dimy != 1)
        FUNC_0("}");
}
