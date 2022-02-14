
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {scalar_t__ Type; int Flags; } ;
struct TYPE_6__ {int Value; } ;
struct TYPE_8__ {TYPE_2__ Common; TYPE_1__ Reference; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;

ACPI_STATUS
FUNC_9 (
    ACPI_OPERAND_OBJECT *VAR_8)
{
    ACPI_STATUS VAR_9 = VAR_5;
    ACPI_OPERAND_OBJECT *VAR_10 = VAR_8;
    UINT32 VAR_11;


    FUNC_1 (VAR_7);







    FUNC_4 ((VAR_3,
        "Received request to unload an ACPI table"));
    FUNC_0 ((VAR_3, VAR_4,
        "AML Unload operator is not supported"));
    if ((!VAR_8) ||
        (FUNC_2 (VAR_8) != VAR_0) ||
        (VAR_8->Common.Type != VAR_1) ||
        (!(VAR_8->Common.Flags & VAR_6)))
    {
        FUNC_8 (VAR_2);
    }



    VAR_11 = VAR_10->Reference.Value;





    FUNC_6 ();
    VAR_9 = FUNC_7 (VAR_11);
    FUNC_5 ();





    if (FUNC_3 (VAR_9))
    {
        VAR_8->Common.Flags &= ~VAR_6;
    }
    FUNC_8 (VAR_9);
}
