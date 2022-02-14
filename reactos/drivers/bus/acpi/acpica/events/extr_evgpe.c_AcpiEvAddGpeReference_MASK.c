
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int RuntimeCount; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_EVENT_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_GPE_EVENT_INFO *VAR_4,
    BOOLEAN VAR_5)
{
    ACPI_STATUS VAR_6 = VAR_2;


    FUNC_1 (VAR_3);


    if (VAR_4->RuntimeCount == VAR_0)
    {
        FUNC_6 (VAR_1);
    }

    VAR_4->RuntimeCount++;
    if (VAR_4->RuntimeCount == 1)
    {


        if (VAR_5)
        {
            (void) FUNC_5 (VAR_4);
        }

        VAR_6 = FUNC_4 (VAR_4);
        if (FUNC_2 (VAR_6))
        {
            VAR_6 = FUNC_3 (VAR_4);
        }

        if (FUNC_0 (VAR_6))
        {
            VAR_4->RuntimeCount--;
        }
    }

    FUNC_6 (VAR_6);
}
