
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Next; struct TYPE_5__* RegisterInfo; struct TYPE_5__* EventInfo; struct TYPE_5__* GpeBlockListHead; } ;
typedef TYPE_1__ ACPI_GPE_XRUPT_INFO ;
typedef TYPE_1__ ACPI_GPE_BLOCK_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (
    void)
{
    ACPI_GPE_BLOCK_INFO *VAR_1;
    ACPI_GPE_BLOCK_INFO *VAR_2;
    ACPI_GPE_XRUPT_INFO *VAR_3;
    ACPI_GPE_XRUPT_INFO *VAR_4;




    VAR_3 = VAR_0;
    while (VAR_3)
    {
        VAR_1 = VAR_3->GpeBlockListHead;
        while (VAR_1)
        {
            VAR_2 = VAR_1->Next;
            FUNC_0 (VAR_1->EventInfo);
            FUNC_0 (VAR_1->RegisterInfo);
            FUNC_0 (VAR_1);

            VAR_1 = VAR_2;
        }
        VAR_4 = VAR_3->Next;
        FUNC_0 (VAR_3);
        VAR_3 = VAR_4;
    }
}
