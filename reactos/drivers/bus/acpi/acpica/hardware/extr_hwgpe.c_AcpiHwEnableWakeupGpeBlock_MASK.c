
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_6__ {size_t RegisterCount; TYPE_1__* RegisterInfo; } ;
struct TYPE_5__ {int EnableForWake; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_GPE_XRUPT_INFO ;
typedef TYPE_1__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_2__ ACPI_GPE_BLOCK_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_GPE_XRUPT_INFO *VAR_1,
    ACPI_GPE_BLOCK_INFO *VAR_2,
    void *VAR_3)
{
    UINT32 VAR_4;
    ACPI_STATUS VAR_5;
    ACPI_GPE_REGISTER_INFO *VAR_6;




    for (VAR_4 = 0; VAR_4 < VAR_2->RegisterCount; VAR_4++)
    {
        VAR_6 = &VAR_2->RegisterInfo[VAR_4];





        VAR_5 = FUNC_1 (VAR_6->EnableForWake,
            VAR_6);
        if (FUNC_0 (VAR_5))
        {
            return (VAR_5);
        }
    }

    return (VAR_0);
}
