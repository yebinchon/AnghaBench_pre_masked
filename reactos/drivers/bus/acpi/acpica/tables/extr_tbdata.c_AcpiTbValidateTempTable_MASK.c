
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; int Pointer; } ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

ACPI_STATUS
FUNC_1 (
    ACPI_TABLE_DESC *VAR_1)
{

    if (!VAR_1->Pointer && !VAR_0)
    {
        VAR_1->Length = sizeof (ACPI_TABLE_HEADER);
    }

    return (FUNC_0 (VAR_1));
}
