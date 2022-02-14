
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
typedef void* UINT16 ;
struct TYPE_18__ {int SciInterrupt; } ;
struct TYPE_17__ {int GpeCount; int RegisterCount; int BlockBaseNumber; struct TYPE_17__* EventInfo; struct TYPE_17__* RegisterInfo; void* Initialized; TYPE_2__* Node; int SpaceId; int Address; } ;
struct TYPE_16__ {void* ExecuteByOwnerId; TYPE_2__* GpeDevice; TYPE_4__* GpeBlock; } ;
struct TYPE_14__ {int Ascii; } ;
struct TYPE_15__ {TYPE_1__ Name; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;
typedef TYPE_3__ ACPI_GPE_WALK_INFO ;
typedef TYPE_4__ ACPI_GPE_BLOCK_INFO ;


 TYPE_4__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int VAR_8 ;
 void* VAR_9 ;
 TYPE_7__ VAR_10 ;
 int FUNC_7 (int ,TYPE_2__*,int ,int ,int ,int *,TYPE_3__*,int *) ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_8 (int ) ;

ACPI_STATUS
FUNC_9 (
    ACPI_NAMESPACE_NODE *VAR_13,
    UINT64 VAR_14,
    UINT8 VAR_15,
    UINT32 VAR_16,
    UINT16 VAR_17,
    UINT32 VAR_18,
    ACPI_GPE_BLOCK_INFO **VAR_19)
{
    ACPI_STATUS VAR_20;
    ACPI_GPE_BLOCK_INFO *VAR_21;
    ACPI_GPE_WALK_INFO VAR_22;


    FUNC_4 (VAR_11);


    if (!VAR_16)
    {
        FUNC_8 (VAR_6);
    }



    VAR_21 = FUNC_0 (sizeof (ACPI_GPE_BLOCK_INFO));
    if (!VAR_21)
    {
        FUNC_8 (VAR_5);
    }



    VAR_21->Address = VAR_14;
    VAR_21->SpaceId = VAR_15;
    VAR_21->Node = VAR_13;
    VAR_21->GpeCount = (UINT16) (VAR_16 * VAR_1);
    VAR_21->Initialized = VAR_12;
    VAR_21->RegisterCount = VAR_16;
    VAR_21->BlockBaseNumber = VAR_17;





    VAR_20 = FUNC_5 (VAR_21);
    if (FUNC_2 (VAR_20))
    {
        FUNC_3 (VAR_21);
        FUNC_8 (VAR_20);
    }



    VAR_20 = FUNC_6 (VAR_21, VAR_18);
    if (FUNC_2 (VAR_20))
    {
        FUNC_3 (VAR_21->RegisterInfo);
        FUNC_3 (VAR_21->EventInfo);
        FUNC_3 (VAR_21);
        FUNC_8 (VAR_20);
    }

    VAR_9 = VAR_12;



    VAR_22.GpeBlock = VAR_21;
    VAR_22.GpeDevice = VAR_13;
    VAR_22.ExecuteByOwnerId = VAR_12;

    (void) FUNC_7 (VAR_3, VAR_13,
        VAR_4, VAR_2,
        VAR_8, ((void*)0), &VAR_22, ((void*)0));



    if (VAR_19)
    {
        (*VAR_19) = VAR_21;
    }

    FUNC_1 ((VAR_0,
        "    Initialized GPE %02X to %02X [%4.4s] %u regs on interrupt 0x%X%s\n",
        (UINT32) VAR_21->BlockBaseNumber,
        (UINT32) (VAR_21->BlockBaseNumber + (VAR_21->GpeCount - 1)),
        VAR_13->Name.Ascii, VAR_21->RegisterCount, VAR_18,
        VAR_18 == VAR_10.SciInterrupt ? " (SCI)" : ""));



    VAR_7 += VAR_21->GpeCount;
    FUNC_8 (VAR_6);
}
