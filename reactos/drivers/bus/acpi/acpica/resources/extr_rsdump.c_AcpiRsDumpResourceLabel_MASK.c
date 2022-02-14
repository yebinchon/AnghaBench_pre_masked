
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* StringPtr; } ;
typedef TYPE_1__ ACPI_RESOURCE_LABEL ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (
    char *VAR_0,
    ACPI_RESOURCE_LABEL *VAR_1)
{
    FUNC_0 ();

    FUNC_1 (VAR_0,
        VAR_1->StringPtr ?
            VAR_1->StringPtr : "[Not Specified]");
}
