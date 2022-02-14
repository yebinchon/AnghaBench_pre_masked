
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; unsigned int quorum; int o_down_since_time; int sentinels; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,TYPE_1__*,char*,...) ;

void FUNC_6(sentinelRedisInstance *VAR_4) {
    dictIterator *VAR_5;
    dictEntry *VAR_6;
    unsigned int VAR_7 = 0, VAR_8 = 0;

    if (VAR_4->flags & VAR_3) {

        VAR_7 = 1;

        VAR_5 = FUNC_0(VAR_4->sentinels);
        while((VAR_6 = FUNC_2(VAR_5)) != ((void*)0)) {
            sentinelRedisInstance *VAR_9 = FUNC_1(VAR_6);

            if (VAR_9->flags & VAR_1) VAR_7++;
        }
        FUNC_3(VAR_5);
        if (VAR_7 >= VAR_4->quorum) VAR_8 = 1;
    }


    if (VAR_8) {
        if ((VAR_4->flags & VAR_2) == 0) {
            FUNC_5(VAR_0,"+odown",VAR_4,"%@ #quorum %d/%d",
                VAR_7, VAR_4->quorum);
            VAR_4->flags |= VAR_2;
            VAR_4->o_down_since_time = FUNC_4();
        }
    } else {
        if (VAR_4->flags & VAR_2) {
            FUNC_5(VAR_0,"-odown",VAR_4,"%@");
            VAR_4->flags &= ~VAR_2;
        }
    }
}
