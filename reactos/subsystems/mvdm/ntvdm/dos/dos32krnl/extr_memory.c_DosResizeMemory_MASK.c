
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_6__ {void* LastErrorCode; } ;
struct TYPE_5__ {scalar_t__ OwnerPsp; scalar_t__ Size; char BlockType; } ;
typedef TYPE_1__* PDOS_MCB ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;

BOOLEAN FUNC_6(WORD VAR_6, WORD VAR_7, WORD *VAR_8)
{
    BOOLEAN VAR_9 = VAR_5;
    WORD VAR_10 = VAR_6 - 1, VAR_11 = 0, VAR_12;
    PDOS_MCB VAR_13 = FUNC_4(VAR_10), VAR_14;

    FUNC_0("DosResizeMemory: BlockData 0x%04X, NewSize 0x%04X\n",
           VAR_6, VAR_7);

    FUNC_3();


    if (VAR_6 == 0 || !FUNC_5(VAR_13) || VAR_13->OwnerPsp == 0)
    {
        VAR_4->LastErrorCode = VAR_1;
        VAR_9 = VAR_3;
        goto Done;
    }

    VAR_11 = VAR_13->Size;


    if (VAR_7 > VAR_13->Size)
    {

        if (VAR_13->BlockType == 'Z')
        {
            FUNC_0("Cannot expand memory block 0x%04X: this is the last block (size 0x%04X)!\n", VAR_10, VAR_13->Size);
            VAR_4->LastErrorCode = VAR_2;
            VAR_9 = VAR_3;
            goto Done;
        }


        VAR_12 = VAR_10 + VAR_13->Size + 1;
        VAR_14 = FUNC_4(VAR_12);


        if (!FUNC_5(VAR_14))
        {
            FUNC_1("The DOS memory arena is corrupted!\n");
            VAR_4->LastErrorCode = VAR_0;
            return VAR_3;
        }


        if (VAR_14->OwnerPsp != 0)
        {
            FUNC_0("Cannot expand memory block 0x%04X: next segment is not free!\n", VAR_10);
            VAR_4->LastErrorCode = VAR_2;
            VAR_9 = VAR_3;
            goto Done;
        }


        FUNC_2(VAR_12);


        VAR_11 += VAR_14->Size + 1;

        if (VAR_11 < VAR_7)
        {
            FUNC_0("Cannot expand memory block 0x%04X: insufficient free segments available!\n", VAR_10);
            VAR_4->LastErrorCode = VAR_2;
            VAR_9 = VAR_3;
            goto Done;
        }


        VAR_13->Size = VAR_11;
        VAR_13->BlockType = VAR_14->BlockType;


        VAR_14->BlockType = 'I';


        if (VAR_13->Size > VAR_7)
        {
            FUNC_0("Block too large, reducing size from 0x%04X to 0x%04X\n",
                   VAR_13->Size, VAR_7);


            VAR_14 = FUNC_4(VAR_10 + VAR_7 + 1);


            VAR_14->BlockType = VAR_13->BlockType;
            VAR_14->Size = VAR_13->Size - VAR_7 - 1;
            VAR_14->OwnerPsp = 0;


            VAR_13->BlockType = 'M';
            VAR_13->Size = VAR_7;
        }
    }
    else if (VAR_7 < VAR_13->Size)
    {
        FUNC_0("Shrinking block from 0x%04X to 0x%04X\n",
               VAR_13->Size, VAR_7);


        VAR_12 = VAR_10 + VAR_7 + 1;
        VAR_14 = FUNC_4(VAR_12);
        VAR_14->BlockType = VAR_13->BlockType;
        VAR_14->Size = VAR_13->Size - VAR_7 - 1;
        VAR_14->OwnerPsp = 0;


        VAR_13->BlockType = 'M';
        VAR_13->Size = VAR_7;


        FUNC_2(VAR_12);
    }

Done:

    if (!VAR_9)
    {
        FUNC_0("DosResizeMemory FAILED. Maximum available: 0x%04X\n", VAR_11);


        if (VAR_8) *VAR_8 = VAR_11;
    }

    FUNC_3();

    return VAR_9;
}
