
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Pointer; } ;
struct TYPE_7__ {int Type; } ;
struct TYPE_9__ {TYPE_2__ String; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_2,
    ACPI_OPERAND_OBJECT **VAR_3)
{
    ACPI_OPERAND_OBJECT *VAR_4;
    const char *VAR_5;


    VAR_5 = FUNC_1 (VAR_2->Common.Type);

    VAR_4 = FUNC_0 (
        ((ACPI_SIZE) FUNC_4 (VAR_5) + 9));
    if (!VAR_4)
    {
        return (VAR_0);
    }

    FUNC_3 (VAR_4->String.Pointer, "[");
    FUNC_2 (VAR_4->String.Pointer, VAR_5);
    FUNC_2 (VAR_4->String.Pointer, " Object]");

    *VAR_3 = VAR_4;
    return (VAR_1);
}
