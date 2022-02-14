
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_10__ {int Value; } ;
struct TYPE_9__ {int Node; } ;
struct TYPE_12__ {TYPE_2__ Common; TYPE_1__ Scope; } ;
struct TYPE_11__ {TYPE_4__* ScopeInfo; scalar_t__ ScopeDepth; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__**) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    ACPI_WALK_STATE *VAR_5)
{
    ACPI_GENERIC_STATE *VAR_6;
    ACPI_GENERIC_STATE *VAR_7;


    FUNC_2 (VAR_4);





    VAR_6 = FUNC_6 (&VAR_5->ScopeInfo);
    if (!VAR_6)
    {
        FUNC_7 (VAR_3);
    }

    VAR_5->ScopeDepth--;

    FUNC_0 ((VAR_0,
        "[%.2d] Popped scope [%4.4s] (%s), New scope -> ",
        (UINT32) VAR_5->ScopeDepth,
        FUNC_4 (VAR_6->Scope.Node),
        FUNC_5 (VAR_6->Common.Value)));

    VAR_7 = VAR_5->ScopeInfo;
    if (VAR_7)
    {
        FUNC_1 ((VAR_0, "[%4.4s] (%s)\n",
            FUNC_4 (VAR_7->Scope.Node),
            FUNC_5 (VAR_7->Common.Value)));
    }
    else
    {
        FUNC_1 ((VAR_0, "%s\n", VAR_1));
    }

    FUNC_3 (VAR_6);
    FUNC_7 (VAR_2);
}
