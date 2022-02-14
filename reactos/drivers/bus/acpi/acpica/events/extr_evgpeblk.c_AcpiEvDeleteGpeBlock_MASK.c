
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* GpeBlockListHead; } ;
struct TYPE_11__ {struct TYPE_11__* EventInfo; struct TYPE_11__* RegisterInfo; scalar_t__ GpeCount; TYPE_2__* Previous; TYPE_1__* Next; TYPE_4__* XruptBlock; } ;
struct TYPE_10__ {TYPE_1__* Next; } ;
struct TYPE_9__ {TYPE_2__* Previous; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_GPE_BLOCK_INFO ;
typedef int ACPI_CPU_FLAGS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_GPE_BLOCK_INFO *VAR_4)
{
    ACPI_STATUS VAR_5;
    ACPI_CPU_FLAGS VAR_6;


    FUNC_2 (VAR_3);


    VAR_5 = FUNC_7 (VAR_0);
    if (FUNC_0 (VAR_5))
    {
        FUNC_9 (VAR_5);
    }



    VAR_5 = FUNC_4 (VAR_4->XruptBlock, VAR_4, ((void*)0));
    if (FUNC_0 (VAR_5))
    {
        FUNC_9 (VAR_5);
    }

    if (!VAR_4->Previous && !VAR_4->Next)
    {


        VAR_5 = FUNC_3 (VAR_4->XruptBlock);
        if (FUNC_0 (VAR_5))
        {
            goto UnlockAndExit;
        }
    }
    else
    {


        VAR_6 = FUNC_5 (VAR_2);
        if (VAR_4->Previous)
        {
            VAR_4->Previous->Next = VAR_4->Next;
        }
        else
        {
            VAR_4->XruptBlock->GpeBlockListHead = VAR_4->Next;
        }

        if (VAR_4->Next)
        {
            VAR_4->Next->Previous = VAR_4->Previous;
        }

        FUNC_6 (VAR_2, VAR_6);
    }

    VAR_1 -= VAR_4->GpeCount;



    FUNC_1 (VAR_4->RegisterInfo);
    FUNC_1 (VAR_4->EventInfo);
    FUNC_1 (VAR_4);

UnlockAndExit:
    VAR_5 = FUNC_8 (VAR_0);
    FUNC_9 (VAR_5);
}
