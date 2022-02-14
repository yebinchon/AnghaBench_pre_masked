
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_7__ {int Value; } ;
struct TYPE_6__ {scalar_t__ Type; } ;
struct TYPE_8__ {TYPE_2__ Integer; TYPE_1__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

BOOLEAN
FUNC_2 (
    ACPI_OPERAND_OBJECT *VAR_6)
{

    FUNC_0 ();






    if ((!VAR_6) ||
        (FUNC_1 (VAR_6) != VAR_0) ||
        (VAR_6->Common.Type != VAR_1))
    {
        return (VAR_4);
    }

    if ((VAR_3 == 4) &&
        (VAR_6->Integer.Value > (UINT64) VAR_2))
    {




        VAR_6->Integer.Value &= (UINT64) VAR_2;
        return (VAR_5);
    }

    return (VAR_4);
}
