
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Pointer; int Flags; int Length; } ;
typedef TYPE_1__ ACPI_TABLE_DESC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2 (
    ACPI_TABLE_DESC *VAR_2)
{

    FUNC_0 (VAR_0);




    if (!VAR_2->Pointer)
    {
        VAR_1;
    }

    FUNC_1 (VAR_2->Pointer, VAR_2->Length,
        VAR_2->Flags);
    VAR_2->Pointer = ((void*)0);

    VAR_1;
}
