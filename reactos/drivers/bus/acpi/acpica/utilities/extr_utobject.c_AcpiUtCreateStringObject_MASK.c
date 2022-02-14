
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_7__ {char* Pointer; scalar_t__ Length; } ;
struct TYPE_8__ {TYPE_1__ String; } ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;

ACPI_OPERAND_OBJECT *
FUNC_6 (
    ACPI_SIZE VAR_3)
{
    ACPI_OPERAND_OBJECT *VAR_4;
    char *VAR_5;


    FUNC_2 (VAR_2, VAR_3);




    VAR_4 = FUNC_3 (VAR_0);
    if (!VAR_4)
    {
        FUNC_5 (((void*)0));
    }





    VAR_5 = FUNC_0 (VAR_3 + 1);
    if (!VAR_5)
    {
        FUNC_1 ((VAR_1, "Could not allocate size %u",
            (UINT32) VAR_3));

        FUNC_4 (VAR_4);
        FUNC_5 (((void*)0));
    }



    VAR_4->String.Pointer = VAR_5;
    VAR_4->String.Length = (UINT32) VAR_3;



    FUNC_5 (VAR_4);
}
