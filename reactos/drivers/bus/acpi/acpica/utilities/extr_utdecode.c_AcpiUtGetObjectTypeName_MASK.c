
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Type; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

const char *
FUNC_6 (
    ACPI_OPERAND_OBJECT *VAR_4)
{
    FUNC_1 (VAR_3);


    if (!VAR_4)
    {
        FUNC_0 ((VAR_0, "Null Object Descriptor\n"));
        FUNC_5 ("[NULL Object Descriptor]");
    }



    if ((FUNC_2 (VAR_4) != VAR_2) &&
        (FUNC_2 (VAR_4) != VAR_1))
    {
        FUNC_0 ((VAR_0,
            "Invalid object descriptor type: 0x%2.2X [%s] (%p)\n",
            FUNC_2 (VAR_4),
            FUNC_3 (VAR_4), VAR_4));

        FUNC_5 ("Invalid object");
    }

    FUNC_5 (FUNC_4 (VAR_4->Common.Type));
}
