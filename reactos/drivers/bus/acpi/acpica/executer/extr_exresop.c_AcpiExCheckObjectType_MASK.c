
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; } ;
struct TYPE_4__ {TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_OBJECT_TYPE VAR_7,
    ACPI_OBJECT_TYPE VAR_8,
    void *VAR_9)
{
    FUNC_1 ();


    if (VAR_7 == VAR_0)
    {


        return (VAR_5);
    }

    if (VAR_7 == VAR_2)
    {





        if ((VAR_8 == VAR_1) &&
            (((ACPI_OPERAND_OBJECT *) VAR_9)->Common.Flags &
                VAR_6))
        {
            return (VAR_5);
        }
    }

    if (VAR_7 != VAR_8)
    {
        FUNC_0 ((VAR_4,
            "Needed type [%s], found [%s] %p",
            FUNC_2 (VAR_7),
            FUNC_2 (VAR_8), VAR_9));

        return (VAR_3);
    }

    return (VAR_5);
}
