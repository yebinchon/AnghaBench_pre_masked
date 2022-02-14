
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sds ;
struct TYPE_4__ {int expires; } ;
typedef TYPE_1__ redisDb ;
typedef int mstime_t ;
typedef int dictEntry ;
struct TYPE_5__ {int dbnum; TYPE_1__* db; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 TYPE_2__ VAR_0 ;
 int * VAR_1 ;

void FUNC_9(void) {
    if (VAR_1 == ((void*)0) ||
        FUNC_7(VAR_1) == 0) return;

    int VAR_2 = 0, VAR_3 = 0;
    mstime_t VAR_4 = FUNC_8();
    while(1) {
        dictEntry *VAR_5 = FUNC_4(VAR_1);
        sds VAR_6 = FUNC_3(VAR_5);
        uint64_t VAR_7 = FUNC_5(VAR_5);
        uint64_t VAR_8 = 0;



        int VAR_9 = 0;
        while(VAR_7 && VAR_9 < VAR_0.dbnum) {
            if ((VAR_7 & 1) != 0) {
                redisDb *VAR_10 = VAR_0.db+VAR_9;
                dictEntry *VAR_11 = FUNC_2(VAR_10->expires,VAR_6);
                int VAR_12 = 0;

                if (VAR_11 &&
                    FUNC_0(VAR_0.db+VAR_9,VAR_11,VAR_4))
                {
                    VAR_12 = 1;
                }





                if (VAR_11 && !VAR_12) {
                    VAR_3++;
                    VAR_8 |= (uint64_t)1 << VAR_9;
                }
            }
            VAR_9++;
            VAR_7 >>= 1;
        }




        if (VAR_8)
            FUNC_6(VAR_5,VAR_8);
        else
            FUNC_1(VAR_1,VAR_6);



        VAR_2++;
        if (VAR_3 > 3) break;
        if ((VAR_2 % 64) == 0 && FUNC_8()-VAR_4 > 1) break;
        if (FUNC_7(VAR_1) == 0) break;
    }
}
