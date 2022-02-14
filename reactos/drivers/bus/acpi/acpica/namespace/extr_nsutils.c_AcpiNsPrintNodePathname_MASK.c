
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Pointer; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;

void
FUNC_4 (
    ACPI_NAMESPACE_NODE *VAR_2,
    const char *VAR_3)
{
    ACPI_BUFFER VAR_4;
    ACPI_STATUS VAR_5;


    if (!VAR_2)
    {
        FUNC_3 ("[NULL NAME]");
        return;
    }



    VAR_4.Length = VAR_0;

    VAR_5 = FUNC_2 (VAR_2, &VAR_4, VAR_1);
    if (FUNC_1 (VAR_5))
    {
        if (VAR_3)
        {
            FUNC_3 ("%s ", VAR_3);
        }

        FUNC_3 ("%s", (char *) VAR_4.Pointer);
        FUNC_0 (VAR_4.Pointer);
    }
}
