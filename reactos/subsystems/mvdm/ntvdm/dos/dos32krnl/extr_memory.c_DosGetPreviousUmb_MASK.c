
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_8__ {int LastErrorCode; } ;
struct TYPE_7__ {int UmbChainStart; } ;
struct TYPE_6__ {char BlockType; scalar_t__ Size; } ;
typedef TYPE_1__* PDOS_MCB ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

WORD FUNC_3(WORD VAR_4)
{
    PDOS_MCB VAR_5;
    WORD VAR_6, VAR_7 = 0;

    if (VAR_2->UmbChainStart == 0xFFFF)
        return 0;


    VAR_6 = VAR_2->UmbChainStart;
    while (VAR_3)
    {

        VAR_5 = FUNC_1(VAR_6);


        if (!FUNC_2(VAR_5))
        {
            FUNC_0("The UMB DOS memory arena is corrupted!\n");
            VAR_1->LastErrorCode = VAR_0;
            return 0;
        }


        if (VAR_6 >= VAR_4) break;

        VAR_7 = VAR_6;


        if (VAR_5->BlockType == 'Z') break;


        VAR_6 += VAR_5->Size + 1;
    }

    return VAR_7;
}
