
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int quorum; scalar_t__ s_down_since_time; scalar_t__ o_down_since_time; TYPE_2__* addr; int slaves; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_17__ {char* ip; int port; } ;
typedef TYPE_2__ sentinelAddr ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (int *,int ,char*,int,int ,TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (int ,char*,TYPE_1__*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_2__**) ;
 TYPE_2__** FUNC_12 (TYPE_2__**,int) ;

int FUNC_13(sentinelRedisInstance *VAR_5, char *VAR_6, int VAR_7) {
    sentinelAddr *VAR_8, *VAR_9;
    sentinelAddr **VAR_10 = ((void*)0);
    int VAR_11 = 0, VAR_12;
    dictIterator *VAR_13;
    dictEntry *VAR_14;

    VAR_9 = FUNC_0(VAR_6,VAR_7);
    if (VAR_9 == ((void*)0)) return VAR_0;



    VAR_13 = FUNC_2(VAR_5->slaves);
    while((VAR_14 = FUNC_4(VAR_13)) != ((void*)0)) {
        sentinelRedisInstance *VAR_15 = FUNC_3(VAR_14);

        if (FUNC_7(VAR_15->addr,VAR_9)) continue;
        VAR_10 = FUNC_12(VAR_10,sizeof(sentinelAddr*)*(VAR_11+1));
        VAR_10[VAR_11++] = FUNC_0(VAR_15->addr->ip,
                                                 VAR_15->addr->port);
    }
    FUNC_5(VAR_13);




    if (!FUNC_7(VAR_9,VAR_5->addr)) {
        VAR_10 = FUNC_12(VAR_10,sizeof(sentinelAddr*)*(VAR_11+1));
        VAR_10[VAR_11++] = FUNC_0(VAR_5->addr->ip,
                                                 VAR_5->addr->port);
    }


    FUNC_10(VAR_5,VAR_3);
    VAR_8 = VAR_5->addr;
    VAR_5->addr = VAR_9;
    VAR_5->o_down_since_time = 0;
    VAR_5->s_down_since_time = 0;


    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        sentinelRedisInstance *VAR_16;

        VAR_16 = FUNC_1(((void*)0),VAR_4,VAR_10[VAR_12]->ip,
                    VAR_10[VAR_12]->port, VAR_5->quorum, VAR_5);
        FUNC_6(VAR_10[VAR_12]);
        if (VAR_16) FUNC_8(VAR_2,"+slave",VAR_16,"%@");
    }
    FUNC_11(VAR_10);



    FUNC_6(VAR_8);
    FUNC_9();
    return VAR_1;
}
