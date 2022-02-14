
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {int Length; int * Pointer; } ;
struct TYPE_5__ {TYPE_1__ Buffer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,void**) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3 (
    ACPI_OPERAND_OBJECT *VAR_2,
    UINT8 **VAR_3)
{
    ACPI_STATUS VAR_4;


    FUNC_0 (VAR_1);




    if (!VAR_2->Buffer.Length)
    {
        *VAR_3 = VAR_2->Buffer.Pointer;
        FUNC_2 (VAR_0);
    }



    VAR_4 = FUNC_1 (((void*)0), VAR_2->Buffer.Pointer,
        VAR_2->Buffer.Length, ((void*)0), (void **) VAR_3);

    FUNC_2 (VAR_4);
}
