
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* ExternalName; char* InternalName; int Length; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_NAMESTRING_INFO ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    const char *VAR_4,
    char **VAR_5)
{
    char *VAR_6;
    ACPI_NAMESTRING_INFO VAR_7;
    ACPI_STATUS VAR_8;


    FUNC_3 (VAR_3);


    if ((!VAR_4) ||
        (*VAR_4 == 0) ||
        (!VAR_5))
    {
        FUNC_6 (VAR_0);
    }



    VAR_7.ExternalName = VAR_4;
    FUNC_5 (&VAR_7);



    VAR_6 = FUNC_0 (VAR_7.Length);
    if (!VAR_6)
    {
        FUNC_6 (VAR_1);
    }



    VAR_7.InternalName = VAR_6;
    VAR_8 = FUNC_4 (&VAR_7);
    if (FUNC_1 (VAR_8))
    {
        FUNC_2 (VAR_6);
        FUNC_6 (VAR_8);
    }

    *VAR_5 = VAR_6;
    FUNC_6 (VAR_2);
}
