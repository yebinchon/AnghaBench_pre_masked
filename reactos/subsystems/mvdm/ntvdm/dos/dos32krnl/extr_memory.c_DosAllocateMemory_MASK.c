
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_8__ {int AllocStrategy; scalar_t__ CurrentPsp; int LastErrorCode; } ;
struct TYPE_7__ {scalar_t__ FirstMcb; int UmbChainStart; scalar_t__ UmbLinked; } ;
struct TYPE_6__ {scalar_t__ OwnerPsp; scalar_t__ Size; char BlockType; int Name; } ;
typedef TYPE_1__* PDOS_MCB ;
typedef scalar_t__ BOOLEAN ;




 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ,int) ;
 TYPE_1__* FUNC_5 (int) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;

WORD FUNC_7(WORD VAR_8, WORD *VAR_9)
{
    WORD VAR_10 = 0, VAR_11 = VAR_6->FirstMcb, VAR_12 = 0;
    PDOS_MCB VAR_13;
    BOOLEAN VAR_14 = VAR_4;

    FUNC_0("DosAllocateMemory: Size 0x%04X\n", VAR_8);

    FUNC_3();

    if (VAR_6->UmbLinked && VAR_6->UmbChainStart != 0xFFFF &&
        (VAR_5->AllocStrategy & (VAR_0 | VAR_1)))
    {

        VAR_11 = VAR_6->UmbChainStart;
        VAR_14 = VAR_7;
    }

    while (VAR_7)
    {

        VAR_13 = FUNC_5(VAR_11);


        if (!FUNC_6(VAR_13))
        {
            FUNC_1("The DOS memory arena is corrupted!\n");
            VAR_5->LastErrorCode = VAR_2;
            return 0;
        }


        if (VAR_13->OwnerPsp != 0) goto Next;


        FUNC_2(VAR_11);


        if (VAR_13->Size > VAR_12) VAR_12 = VAR_13->Size;


        if (VAR_13->Size < VAR_8) goto Next;

        switch (VAR_5->AllocStrategy & ~(VAR_0 | VAR_1))
        {
            case 129:
            {

                VAR_10 = VAR_11;
                goto Done;
            }

            case 130:
            {

                if ((VAR_10 == 0) || (VAR_13->Size < FUNC_5(VAR_10)->Size))
                {
                    VAR_10 = VAR_11;
                }

                break;
            }

            case 128:
            {

                VAR_10 = VAR_11;
                break;
            }
        }

Next:

        if (VAR_13->BlockType == 'Z')
        {

            if ((VAR_10 == 0) && VAR_14 && (VAR_5->AllocStrategy & VAR_1))
            {

                VAR_11 = VAR_6->FirstMcb;
                VAR_14 = VAR_4;
                continue;
            }

            break;
        }


        VAR_11 += VAR_13->Size + 1;
    }

Done:
    FUNC_3();


    if (VAR_10 == 0)
    {
        FUNC_0("DosAllocateMemory FAILED. Maximum available: 0x%04X\n", VAR_12);
        VAR_5->LastErrorCode = VAR_3;
        if (VAR_9) *VAR_9 = VAR_12;
        return 0;
    }


    VAR_13 = FUNC_5(VAR_10);


    if (VAR_13->Size > VAR_8)
    {

        if ((VAR_5->AllocStrategy & ~(VAR_0 | VAR_1)) != 128)
        {
            PDOS_MCB VAR_15 = FUNC_5(VAR_10 + VAR_8 + 1);


            VAR_15->BlockType = VAR_13->BlockType;
            VAR_15->Size = VAR_13->Size - VAR_8 - 1;
            VAR_15->OwnerPsp = 0;


            VAR_13->BlockType = 'M';
            VAR_13->Size = VAR_8;
        }
        else
        {

            PDOS_MCB VAR_16 = VAR_13;


            VAR_10 += VAR_13->Size - VAR_8;
            VAR_13 = FUNC_5(VAR_10);


            VAR_13->BlockType = VAR_16->BlockType;
            VAR_13->Size = VAR_8;
            VAR_13->OwnerPsp = 0;


            VAR_16->BlockType = 'M';
            VAR_16->Size -= VAR_8 + 1;
        }
    }


    VAR_13->OwnerPsp = VAR_5->CurrentPsp;
    FUNC_4(VAR_13->Name, FUNC_5(VAR_5->CurrentPsp - 1)->Name, sizeof(VAR_13->Name));

    FUNC_3();


    return VAR_10 + 1;
}
