
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* WalkStateList; } ;
struct TYPE_6__ {struct TYPE_6__* Next; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef TYPE_2__ ACPI_THREAD_STATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

ACPI_WALK_STATE *
FUNC_2 (
    ACPI_THREAD_STATE *VAR_1)
{
    ACPI_WALK_STATE *VAR_2;


    FUNC_0 (VAR_0);


    VAR_2 = VAR_1->WalkStateList;

    if (VAR_2)
    {


        VAR_1->WalkStateList = VAR_2->Next;






    }

    FUNC_1 (VAR_2);
}
