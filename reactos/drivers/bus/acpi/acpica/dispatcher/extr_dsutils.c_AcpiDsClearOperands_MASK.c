
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_4__ {size_t NumOperands; int ** Operands; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2 (
    ACPI_WALK_STATE *VAR_2)
{
    UINT32 VAR_3;


    FUNC_0 (VAR_0, VAR_2);




    for (VAR_3 = 0; VAR_3 < VAR_2->NumOperands; VAR_3++)
    {




        FUNC_1 (VAR_2->Operands[VAR_3]);
        VAR_2->Operands[VAR_3] = ((void*)0);
    }

    VAR_2->NumOperands = 0;
    VAR_1;
}
