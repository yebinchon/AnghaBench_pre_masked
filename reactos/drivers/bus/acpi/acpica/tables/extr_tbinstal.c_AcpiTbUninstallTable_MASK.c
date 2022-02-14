
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Flags; scalar_t__ Address; } ;
typedef TYPE_1__ ACPI_TABLE_DESC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5 (
    ACPI_TABLE_DESC *VAR_4)
{

    FUNC_1 (VAR_2);




    if (!VAR_4->Address)
    {
        VAR_3;
    }

    FUNC_4 (VAR_4);

    if ((VAR_4->Flags & VAR_1) ==
        VAR_0)
    {
        FUNC_0 (FUNC_2 (VAR_4->Address));
    }

    VAR_4->Address = FUNC_3 (((void*)0));
    VAR_3;
}
