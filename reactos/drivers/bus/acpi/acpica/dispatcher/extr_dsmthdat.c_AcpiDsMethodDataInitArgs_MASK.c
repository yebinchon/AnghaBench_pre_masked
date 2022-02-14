
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int **) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,size_t,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT **VAR_5,
    UINT32 VAR_6,
    ACPI_WALK_STATE *VAR_7)
{
    ACPI_STATUS VAR_8;
    UINT32 VAR_9 = 0;


    FUNC_2 (VAR_4, VAR_5);


    if (!VAR_5)
    {
        FUNC_0 ((VAR_0,
            "No parameter list passed to method\n"));
        FUNC_4 (VAR_3);
    }



    while ((VAR_9 < VAR_1) &&
           (VAR_9 < VAR_6) &&
            VAR_5[VAR_9])
    {





        VAR_8 = FUNC_3 (
            VAR_2, VAR_9, VAR_5[VAR_9], VAR_7);
        if (FUNC_1 (VAR_8))
        {
            FUNC_4 (VAR_8);
        }

        VAR_9++;
    }

    FUNC_0 ((VAR_0, "%u args passed to method\n", VAR_9));
    FUNC_4 (VAR_3);
}
