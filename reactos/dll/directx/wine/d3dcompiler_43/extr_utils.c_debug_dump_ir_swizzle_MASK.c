
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* data_type; } ;
struct hlsl_ir_swizzle {unsigned int swizzle; TYPE_3__ node; TYPE_4__* val; } ;
struct TYPE_8__ {TYPE_1__* data_type; } ;
struct TYPE_6__ {unsigned int dimx; } ;
struct TYPE_5__ {int dimy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(const struct hlsl_ir_swizzle *VAR_0)
{
    unsigned int VAR_1;

    FUNC_1(VAR_0->val);
    FUNC_0(".");
    if (VAR_0->val->data_type->dimy > 1)
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->node.data_type->dimx; ++VAR_1)
            FUNC_0("_m%u%u", (VAR_0->swizzle >> VAR_1 * 8) & 0xf, (VAR_0->swizzle >> (VAR_1 * 8 + 4)) & 0xf);
    }
    else
    {
        static const char VAR_2[] = {'x', 'y', 'z', 'w'};

        for (VAR_1 = 0; VAR_1 < VAR_0->node.data_type->dimx; ++VAR_1)
            FUNC_0("%c", VAR_2[(VAR_0->swizzle >> VAR_1 * 2) & 0x3]);
    }
}
