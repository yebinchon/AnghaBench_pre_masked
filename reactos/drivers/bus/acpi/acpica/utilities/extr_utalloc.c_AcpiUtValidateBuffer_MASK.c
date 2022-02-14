
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Length; int Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_BUFFER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

ACPI_STATUS
FUNC_0 (
    ACPI_BUFFER *VAR_5)
{



    if (!VAR_5)
    {
        return (VAR_3);
    }



    if ((VAR_5->Length == VAR_2) ||
        (VAR_5->Length == VAR_0) ||
        (VAR_5->Length == VAR_1))
    {
        return (VAR_4);
    }



    if (!VAR_5->Pointer)
    {
        return (VAR_3);
    }

    return (VAR_4);
}
