
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Value; } ;
struct TYPE_7__ {TYPE_4__* Next; } ;
struct TYPE_10__ {TYPE_2__ Common; TYPE_1__ Scope; } ;
struct TYPE_9__ {TYPE_4__* ScopeInfo; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef TYPE_4__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

void
FUNC_4 (
    ACPI_WALK_STATE *VAR_2)
{
    ACPI_GENERIC_STATE *VAR_3;

    FUNC_1 (VAR_1);


    while (VAR_2->ScopeInfo)
    {


        VAR_3 = VAR_2->ScopeInfo;
        VAR_2->ScopeInfo = VAR_3->Scope.Next;

        FUNC_0 ((VAR_0,
            "Popped object type (%s)\n",
            FUNC_3 (VAR_3->Common.Value)));

        FUNC_2 (VAR_3);
    }
}
