
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int record; } ;
struct TYPE_4__ {int index; int array; } ;
struct TYPE_6__ {TYPE_2__ record; TYPE_1__ array; } ;
struct hlsl_ir_deref {int type; TYPE_3__ v; } ;





 int FUNC_0 (struct hlsl_ir_deref*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hlsl_ir_deref *VAR_0)
{
    switch (VAR_0->type)
    {
        case 128:

            break;
        case 130:
            FUNC_1(VAR_0->v.array.array);
            FUNC_1(VAR_0->v.array.index);
            break;
        case 129:
            FUNC_1(VAR_0->v.record.record);
            break;
    }
    FUNC_0(VAR_0);
}
