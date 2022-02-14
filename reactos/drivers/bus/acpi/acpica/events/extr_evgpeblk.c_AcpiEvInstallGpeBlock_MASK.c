
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {TYPE_1__* XruptBlock; struct TYPE_6__* Previous; struct TYPE_6__* Next; } ;
struct TYPE_5__ {TYPE_2__* GpeBlockListHead; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_XRUPT_INFO ;
typedef TYPE_2__ ACPI_GPE_BLOCK_INFO ;
typedef int ACPI_CPU_FLAGS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__**) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_GPE_BLOCK_INFO *VAR_3,
    UINT32 VAR_4)
{
    ACPI_GPE_BLOCK_INFO *VAR_5;
    ACPI_GPE_XRUPT_INFO *VAR_6;
    ACPI_STATUS VAR_7;
    ACPI_CPU_FLAGS VAR_8;


    FUNC_1 (VAR_2);


    VAR_7 = FUNC_5 (VAR_0);
    if (FUNC_0 (VAR_7))
    {
        FUNC_7 (VAR_7);
    }

    VAR_7 = FUNC_2 (VAR_4, &VAR_6);
    if (FUNC_0 (VAR_7))
    {
        goto UnlockAndExit;
    }



    VAR_8 = FUNC_3 (VAR_1);
    if (VAR_6->GpeBlockListHead)
    {
        VAR_5 = VAR_6->GpeBlockListHead;
        while (VAR_5->Next)
        {
            VAR_5 = VAR_5->Next;
        }

        VAR_5->Next = VAR_3;
        VAR_3->Previous = VAR_5;
    }
    else
    {
        VAR_6->GpeBlockListHead = VAR_3;
    }

    VAR_3->XruptBlock = VAR_6;
    FUNC_4 (VAR_1, VAR_8);


UnlockAndExit:
    (void) FUNC_6 (VAR_0);
    FUNC_7 (VAR_7);
}
