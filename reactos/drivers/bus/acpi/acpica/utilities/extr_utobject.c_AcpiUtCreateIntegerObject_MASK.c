
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_6__ {int Value; } ;
struct TYPE_7__ {TYPE_1__ Integer; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

ACPI_OPERAND_OBJECT *
FUNC_3 (
    UINT64 VAR_2)
{
    ACPI_OPERAND_OBJECT *VAR_3;


    FUNC_0 (VAR_1);




    VAR_3 = FUNC_1 (VAR_0);
    if (!VAR_3)
    {
        FUNC_2 (((void*)0));
    }

    VAR_3->Integer.Value = VAR_2;
    FUNC_2 (VAR_3);
}
