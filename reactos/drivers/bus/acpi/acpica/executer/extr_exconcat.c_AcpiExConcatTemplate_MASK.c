
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_8__ {int* Pointer; } ;
struct TYPE_9__ {TYPE_1__ Buffer; } ;
typedef int AML_RESOURCE_END_TAG ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int**) ;
 int VAR_3 ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_OPERAND_OBJECT *VAR_5,
    ACPI_OPERAND_OBJECT **VAR_6,
    ACPI_WALK_STATE *VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_OPERAND_OBJECT *VAR_9;
    UINT8 *VAR_10;
    UINT8 *VAR_11;
    ACPI_SIZE VAR_12;
    ACPI_SIZE VAR_13;
    ACPI_SIZE VAR_14;


    FUNC_1 (VAR_3);
    VAR_8 = FUNC_4 (VAR_4, &VAR_11);
    if (FUNC_0 (VAR_8))
    {
        FUNC_6 (VAR_8);
    }

    VAR_12 = FUNC_2 (VAR_11, VAR_4->Buffer.Pointer);



    VAR_8 = FUNC_4 (VAR_5, &VAR_11);
    if (FUNC_0 (VAR_8))
    {
        FUNC_6 (VAR_8);
    }

    VAR_13 = FUNC_2 (VAR_11, VAR_5->Buffer.Pointer);



    VAR_14 = VAR_12 + VAR_13 + sizeof (AML_RESOURCE_END_TAG);



    VAR_9 = FUNC_3 (VAR_14);
    if (!VAR_9)
    {
        FUNC_6 (VAR_1);
    }





    VAR_10 = VAR_9->Buffer.Pointer;
    FUNC_5 (VAR_10, VAR_4->Buffer.Pointer, VAR_12);
    FUNC_5 (VAR_10 + VAR_12, VAR_5->Buffer.Pointer, VAR_13);



    VAR_10[VAR_14 - 1] = 0;
    VAR_10[VAR_14 - 2] = VAR_0 | 1;



    *VAR_6 = VAR_9;
    FUNC_6 (VAR_2);
}
