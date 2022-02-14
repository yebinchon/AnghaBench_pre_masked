
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_7__ {scalar_t__ Type; int ReferenceCount; } ;
struct TYPE_6__ {scalar_t__ Count; TYPE_3__** Elements; } ;
struct TYPE_8__ {TYPE_2__ Common; TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__**) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_EVALUATE_INFO *VAR_3,
    ACPI_OPERAND_OBJECT **VAR_4)
{
    ACPI_STATUS VAR_5;
    ACPI_OPERAND_OBJECT *VAR_6 = *VAR_4;
    ACPI_OPERAND_OBJECT **VAR_7;
    ACPI_OPERAND_OBJECT *VAR_8;
    UINT16 VAR_9;
    UINT32 VAR_10;




    if (VAR_6->Common.Type == VAR_1)
    {
        VAR_5 = FUNC_1 (VAR_3, VAR_4);
        return (VAR_5);
    }



    if (VAR_6->Common.Type != VAR_0)
    {
        return (VAR_2);
    }



    VAR_7 = VAR_6->Package.Elements;
    for (VAR_10 = 0; VAR_10 < VAR_6->Package.Count; VAR_10++)
    {
        VAR_8 = *VAR_7;
        VAR_9 = VAR_8->Common.ReferenceCount;

        VAR_5 = FUNC_1 (VAR_3, VAR_7);
        if (FUNC_0 (VAR_5))
        {
            return (VAR_5);
        }

        if (VAR_8 != *VAR_7)
        {


            (*VAR_7)->Common.ReferenceCount =
                VAR_9;
        }

        VAR_7++;
    }

    return (VAR_2);
}
