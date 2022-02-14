
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {scalar_t__ CurrentTableCount; scalar_t__ MaxTableCount; int * Tables; } ;
typedef int ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;

ACPI_STATUS
FUNC_2 (
    UINT32 *VAR_2,
    ACPI_TABLE_DESC **VAR_3)
{
    ACPI_STATUS VAR_4;
    UINT32 VAR_5;




    if (VAR_1.CurrentTableCount >=
        VAR_1.MaxTableCount)
    {
        VAR_4 = FUNC_1();
        if (FUNC_0 (VAR_4))
        {
            return (VAR_4);
        }
    }

    VAR_5 = VAR_1.CurrentTableCount;
    VAR_1.CurrentTableCount++;

    if (VAR_2)
    {
        *VAR_2 = VAR_5;
    }
    if (VAR_3)
    {
        *VAR_3 = &VAR_1.Tables[VAR_5];
    }

    return (VAR_0);
}
