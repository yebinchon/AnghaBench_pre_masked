
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int **,int ,scalar_t__) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_EVALUATE_INFO *VAR_1,
    ACPI_OPERAND_OBJECT **VAR_2,
    UINT8 VAR_3,
    UINT32 VAR_4,
    UINT8 VAR_5,
    UINT32 VAR_6,
    UINT32 VAR_7)
{
    ACPI_OPERAND_OBJECT **VAR_8 = VAR_2;
    ACPI_STATUS VAR_9;
    UINT32 VAR_10;







    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    {
        VAR_9 = FUNC_1 (VAR_1, VAR_8,
            VAR_3, VAR_10 + VAR_7);
        if (FUNC_0 (VAR_9))
        {
            return (VAR_9);
        }

        VAR_8++;
    }

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    {
        VAR_9 = FUNC_1 (VAR_1, VAR_8,
            VAR_5, (VAR_10 + VAR_4 + VAR_7));
        if (FUNC_0 (VAR_9))
        {
            return (VAR_9);
        }

        VAR_8++;
    }

    return (VAR_0);
}
