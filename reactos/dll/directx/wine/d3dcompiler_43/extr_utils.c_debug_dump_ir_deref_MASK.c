
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* field; int record; } ;
struct TYPE_7__ {int index; int array; } ;
struct TYPE_8__ {TYPE_2__ record; TYPE_3__ array; int var; } ;
struct hlsl_ir_deref {int type; TYPE_4__ v; } ;
struct TYPE_5__ {int name; } ;





 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct hlsl_ir_deref *VAR_0)
{
    switch (VAR_0->type)
    {
        case 128:
            FUNC_0("deref(");
            FUNC_2(VAR_0->v.var);
            FUNC_0(")");
            break;
        case 130:
            FUNC_1(VAR_0->v.array.array);
            FUNC_0("[");
            FUNC_1(VAR_0->v.array.index);
            FUNC_0("]");
            break;
        case 129:
            FUNC_1(VAR_0->v.record.record);
            FUNC_0(".%s", FUNC_3(VAR_0->v.record.field->name));
            break;
    }
}
