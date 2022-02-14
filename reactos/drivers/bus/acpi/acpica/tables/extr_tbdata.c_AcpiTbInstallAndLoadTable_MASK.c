
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_PHYSICAL_ADDRESS VAR_3,
    UINT8 VAR_4,
    BOOLEAN VAR_5,
    UINT32 *VAR_6)
{
    ACPI_STATUS VAR_7;
    UINT32 VAR_8;


    FUNC_1 (VAR_2);




    VAR_7 = FUNC_2 (VAR_3, VAR_4, VAR_1,
        VAR_5, &VAR_8);
    if (FUNC_0 (VAR_7))
    {
        goto Exit;
    }

    VAR_7 = FUNC_3 (VAR_8, VAR_0);

Exit:
    *VAR_6 = VAR_8;
    FUNC_4 (VAR_7);
}
