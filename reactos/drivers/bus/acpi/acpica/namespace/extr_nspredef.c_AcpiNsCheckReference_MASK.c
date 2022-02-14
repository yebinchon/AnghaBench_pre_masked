
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int NodeFlags; int FullPathname; } ;
struct TYPE_7__ {scalar_t__ Class; } ;
struct TYPE_8__ {TYPE_1__ Reference; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_EVALUATE_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_EVALUATE_INFO *VAR_4,
    ACPI_OPERAND_OBJECT *VAR_5)
{






    if (VAR_5->Reference.Class == VAR_0)
    {
        return (VAR_3);
    }

    FUNC_0 ((VAR_2, VAR_4->FullPathname, VAR_4->NodeFlags,
        "Return type mismatch - unexpected reference object type [%s] %2.2X",
        FUNC_1 (VAR_5),
        VAR_5->Reference.Class));

    return (VAR_1);
}
