
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ids; } ;
struct TYPE_7__ {int * stream; int dynamic; } ;
struct TYPE_8__ {TYPE_1__ object; TYPE_2__ string; } ;
struct TYPE_9__ {int asnType; TYPE_3__ asnValue; } ;
typedef TYPE_4__ AsnAny ;




 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(AsnAny *VAR_1)
{
    switch (VAR_1->asnType)
    {
    case 130:
    case 133:
    case 128:
    case 132:
    case 129:
    {
        if (VAR_1->asnValue.string.dynamic)
        {
            FUNC_1(FUNC_0(), 0, VAR_1->asnValue.string.stream);
            VAR_1->asnValue.string.stream = ((void*)0);
        }
        break;
    }
    case 131:
    {
        FUNC_1(FUNC_0(), 0, VAR_1->asnValue.object.ids);
        VAR_1->asnValue.object.ids = ((void*)0);
        break;
    }
    default: break;
    }
    VAR_1->asnType = VAR_0;
}
