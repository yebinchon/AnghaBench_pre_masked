
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * WalkStateList; } ;
typedef int ACPI_WALK_STATE ;
typedef TYPE_1__ ACPI_THREAD_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

ACPI_WALK_STATE *
FUNC_2 (
    ACPI_THREAD_STATE *VAR_2)
{
    FUNC_1 (VAR_1);


    if (!VAR_2)
    {
        return (((void*)0));
    }

    FUNC_0 (*(VAR_0, "Current WalkState %p\n",
        VAR_2->WalkStateList));

    return (VAR_2->WalkStateList);
}
