
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
typedef int UINT16 ;
struct TYPE_3__ {scalar_t__* Parameters; } ;
typedef TYPE_1__ ACPI_EVALUATE_INFO ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_EVALUATE_INFO *VAR_0,
    UINT16 VAR_1)
{
    UINT32 VAR_2;


    if (VAR_0->Parameters)
    {


        for (VAR_2 = 0; VAR_0->Parameters[VAR_2]; VAR_2++)
        {


            (void) FUNC_0 (
                VAR_0->Parameters[VAR_2], VAR_1);
        }
    }
}
