
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* Name; } ;
struct TYPE_8__ {TYPE_1__ Info; } ;
typedef TYPE_2__ ACPI_PREDEFINED_INFO ;


 scalar_t__ FUNC_0 (char*,scalar_t__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__ const*) ;

const ACPI_PREDEFINED_INFO *
FUNC_2 (
    char *VAR_1)
{
    const ACPI_PREDEFINED_INFO *VAR_2;




    if (VAR_1[0] != '_')
    {
        return (((void*)0));
    }



    VAR_2 = VAR_0;
    while (VAR_2->Info.Name[0])
    {
        if (FUNC_0 (VAR_1, VAR_2->Info.Name))
        {
            return (VAR_2);
        }

        VAR_2 = FUNC_1 (VAR_2);
    }

    return (((void*)0));
}
