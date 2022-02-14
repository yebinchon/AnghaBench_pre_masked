
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_OPERAND_OBJECT *VAR_2,
    UINT32 VAR_3,
    UINT8 *VAR_4)
{
    ACPI_STATUS VAR_5;
    UINT64 VAR_6;
    UINT32 VAR_7 = 0;
    UINT32 VAR_8;




    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    {
        VAR_5 = FUNC_1 (VAR_2, ((void*)0), VAR_0,
            VAR_7, 8, &VAR_6);
        if (FUNC_0 (VAR_5))
        {
            return (VAR_5);
        }

        *VAR_4 = (UINT8) VAR_6;
        VAR_4++;
        VAR_7++;
    }

    return (VAR_1);
}
