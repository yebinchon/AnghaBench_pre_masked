
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {size_t NumOperands; int ** Operands; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

ACPI_STATUS
FUNC_3 (
    UINT32 VAR_5,
    ACPI_WALK_STATE *VAR_6)
{
    UINT32 VAR_7;


    FUNC_2 (VAR_4);


    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {


        if (VAR_6->NumOperands == 0)
        {
            FUNC_1 ((VAR_1,
                "Object stack underflow! Count=%X State=%p #Ops=%u",
                VAR_5, VAR_6, VAR_6->NumOperands));
            return (VAR_3);
        }



        VAR_6->NumOperands--;
        VAR_6->Operands [VAR_6->NumOperands] = ((void*)0);
    }

    FUNC_0 ((VAR_0, "Count=%X State=%p #Ops=%u\n",
        VAR_5, VAR_6, VAR_6->NumOperands));

    return (VAR_2);
}
