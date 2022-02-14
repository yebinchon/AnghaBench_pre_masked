
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _u8 ;
typedef size_t _u32 ;
typedef size_t _u16 ;
typedef int _SlReturnVal_t ;
struct TYPE_6__ {int DoubleSyncPattern; } ;
struct TYPE_5__ {int Short; } ;
struct TYPE_4__ {int FD; int TxSeqNum; } ;


 scalar_t__ FUNC_0 (int*,int ) ;
 int FUNC_1 (int ,int*,size_t) ;
 int FUNC_2 (int ,int*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (size_t,int*) ;
 size_t VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;

_SlReturnVal_t FUNC_6(_u8 *VAR_7, _u8 *VAR_8)
{
     _u32 VAR_9 = 0;
    _u8 VAR_10;



    FUNC_2(VAR_6->FD, (_u8 *)&VAR_5.Short, VAR_2);



    FUNC_1(VAR_6->FD, &VAR_7[0], 4);
    FUNC_5(VAR_9,VAR_7);


    while ( ! FUNC_0(VAR_7, VAR_6->TxSeqNum) )
    {

        FUNC_3(VAR_9 < VAR_1);


        if(0 == (VAR_9 % (_u32)VAR_2))
        {
            FUNC_1(VAR_6->FD, &VAR_7[4], 4);
            FUNC_5(VAR_9,VAR_7);
        }


        for(VAR_10 = 0; VAR_10< 7; VAR_10++)
        {
            VAR_7[VAR_10] = VAR_7[VAR_10+1];
        }
        VAR_7[7] = 0;

        VAR_9++;
    }


    VAR_9 %= VAR_2;

    if(VAR_9 > 0)
    {
        *(_u32 *)&VAR_7[0] = *(_u32 *)&VAR_7[4];
        FUNC_1(VAR_6->FD, &VAR_7[VAR_2 - VAR_9], (_u16)VAR_9);
    }
    else
    {
        FUNC_1(VAR_6->FD, &VAR_7[0], 4);
    }


    while ( FUNC_0(VAR_7, VAR_6->TxSeqNum) )
    {
        FUNC_4(VAR_3.DoubleSyncPattern);
        FUNC_1(VAR_6->FD, &VAR_7[0], VAR_2);
    }
    VAR_6->TxSeqNum++;


    FUNC_1(VAR_6->FD, &VAR_7[VAR_2], VAR_4);



    *VAR_8 = (_u8)((VAR_9 > 0) ? (VAR_2 - VAR_9) : 0);

    return VAR_0;
}
