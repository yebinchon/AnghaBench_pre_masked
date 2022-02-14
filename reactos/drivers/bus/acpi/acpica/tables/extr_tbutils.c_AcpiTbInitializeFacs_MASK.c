
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Facs; scalar_t__ XFacs; } ;
typedef int ACPI_TABLE_FACS ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;

ACPI_STATUS
FUNC_2 (
    void)
{
    ACPI_TABLE_FACS *VAR_8;




    if (VAR_5)
    {
        VAR_2 = ((void*)0);
        return (VAR_1);
    }
    else if (VAR_3.XFacs &&
         (!VAR_3.Facs || !VAR_6))
    {
        (void) FUNC_1 (VAR_7,
            FUNC_0 (VAR_0, &VAR_8));
        VAR_2 = VAR_8;
    }
    else if (VAR_3.Facs)
    {
        (void) FUNC_1 (VAR_4,
            FUNC_0 (VAR_0, &VAR_8));
        VAR_2 = VAR_8;
    }



    return (VAR_1);
}
