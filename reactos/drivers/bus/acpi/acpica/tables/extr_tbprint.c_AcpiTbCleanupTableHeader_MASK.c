
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int AslCompilerId; int OemTableId; int OemId; int Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_TABLE_HEADER *VAR_3,
    ACPI_TABLE_HEADER *VAR_4)
{

    FUNC_1 (VAR_3, VAR_4, sizeof (ACPI_TABLE_HEADER));

    FUNC_0 (VAR_3->Signature, VAR_0);
    FUNC_0 (VAR_3->OemId, VAR_1);
    FUNC_0 (VAR_3->OemTableId, VAR_2);
    FUNC_0 (VAR_3->AslCompilerId, VAR_0);
}
