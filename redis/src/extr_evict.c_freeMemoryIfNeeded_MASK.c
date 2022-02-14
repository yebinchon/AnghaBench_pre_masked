
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct evictionPoolEntry {int dbid; scalar_t__ idle; int * key; int * cached; } ;
typedef int * sds ;
typedef int robj ;
struct TYPE_6__ {int id; int * expires; int * dict; } ;
typedef TYPE_1__ redisDb ;
typedef int mstime_t ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_7__ {int maxmemory_policy; int dbnum; scalar_t__ lazyfree_lazy_eviction; int stat_evictedkeys; TYPE_1__* db; int slaves; scalar_t__ repl_slave_ignore_maxmemory; scalar_t__ masterhost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct evictionPoolEntry* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 unsigned long FUNC_9 (int *) ;
 int FUNC_10 (int,int *,int *,struct evictionPoolEntry*) ;
 int FUNC_11 () ;
 int FUNC_12 (size_t*,int *,size_t*,int *) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int *,int ) ;
 int FUNC_19 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 TYPE_2__ VAR_13 ;
 int FUNC_22 (int) ;
 size_t FUNC_23 () ;

int FUNC_24(void) {
    int VAR_14 = 0;


    if (VAR_13.masterhost && VAR_13.repl_slave_ignore_maxmemory) return VAR_2;

    size_t VAR_15, VAR_16, VAR_17;
    mstime_t VAR_18, VAR_19;
    long long VAR_20;
    int VAR_21 = FUNC_17(VAR_13.slaves);




    if (FUNC_1()) return VAR_2;
    if (FUNC_12(&VAR_15,((void*)0),&VAR_16,((void*)0)) == VAR_2)
        return VAR_2;

    VAR_17 = 0;

    if (VAR_13.maxmemory_policy == VAR_9)
        goto cant_free;

    FUNC_16(VAR_18);
    while (VAR_17 < VAR_16) {
        int VAR_22, VAR_23, VAR_24;
        static unsigned int VAR_25 = 0;
        sds VAR_26 = ((void*)0);
        int VAR_27;
        redisDb *VAR_28;
        dict *VAR_29;
        dictEntry *VAR_30;

        if (VAR_13.maxmemory_policy & (VAR_8|VAR_7) ||
            VAR_13.maxmemory_policy == VAR_11)
        {
            struct evictionPoolEntry *VAR_31 = VAR_4;

            while(VAR_26 == ((void*)0)) {
                unsigned long VAR_32 = 0, VAR_33;




                for (VAR_24 = 0; VAR_24 < VAR_13.dbnum; VAR_24++) {
                    VAR_28 = VAR_13.db+VAR_24;
                    VAR_29 = (VAR_13.maxmemory_policy & VAR_6) ?
                            VAR_28->dict : VAR_28->expires;
                    if ((VAR_33 = FUNC_9(VAR_29)) != 0) {
                        FUNC_10(VAR_24, VAR_29, VAR_28->dict, VAR_31);
                        VAR_32 += VAR_33;
                    }
                }
                if (!VAR_32) break;


                for (VAR_23 = VAR_3-1; VAR_23 >= 0; VAR_23--) {
                    if (VAR_31[VAR_23].key == ((void*)0)) continue;
                    VAR_27 = VAR_31[VAR_23].dbid;

                    if (VAR_13.maxmemory_policy & VAR_6) {
                        VAR_30 = FUNC_6(VAR_13.db[VAR_31[VAR_23].dbid].dict,
                            VAR_31[VAR_23].key);
                    } else {
                        VAR_30 = FUNC_6(VAR_13.db[VAR_31[VAR_23].dbid].expires,
                            VAR_31[VAR_23].key);
                    }


                    if (VAR_31[VAR_23].key != VAR_31[VAR_23].cached)
                        FUNC_20(VAR_31[VAR_23].key);
                    VAR_31[VAR_23].key = ((void*)0);
                    VAR_31[VAR_23].idle = 0;



                    if (VAR_30) {
                        VAR_26 = FUNC_7(VAR_30);
                        break;
                    } else {

                    }
                }
            }
        }


        else if (VAR_13.maxmemory_policy == VAR_5 ||
                 VAR_13.maxmemory_policy == VAR_10)
        {



            for (VAR_24 = 0; VAR_24 < VAR_13.dbnum; VAR_24++) {
                VAR_22 = (++VAR_25) % VAR_13.dbnum;
                VAR_28 = VAR_13.db+VAR_22;
                VAR_29 = (VAR_13.maxmemory_policy == VAR_5) ?
                        VAR_28->dict : VAR_28->expires;
                if (FUNC_9(VAR_29) != 0) {
                    VAR_30 = FUNC_8(VAR_29);
                    VAR_26 = FUNC_7(VAR_30);
                    VAR_27 = VAR_22;
                    break;
                }
            }
        }


        if (VAR_26) {
            VAR_28 = VAR_13.db+VAR_27;
            robj *VAR_34 = FUNC_2(VAR_26,FUNC_21(VAR_26));
            FUNC_19(VAR_28,VAR_34,VAR_13.lazyfree_lazy_eviction);
            VAR_20 = (long long) FUNC_23();
            FUNC_16(VAR_19);
            if (VAR_13.lazyfree_lazy_eviction)
                FUNC_3(VAR_28,VAR_34);
            else
                FUNC_4(VAR_28,VAR_34);
            FUNC_14(VAR_19);
            FUNC_13("eviction-del",VAR_19);
            FUNC_15(VAR_18,VAR_19);
            VAR_20 -= (long long) FUNC_23();
            VAR_17 += VAR_20;
            VAR_13.stat_evictedkeys++;
            FUNC_18(VAR_12, "evicted",
                VAR_34, VAR_28->id);
            FUNC_5(VAR_34);
            VAR_14++;





            if (VAR_21) FUNC_11();
            if (VAR_13.lazyfree_lazy_eviction && !(VAR_14 % 16)) {
                if (FUNC_12(((void*)0),((void*)0),((void*)0),((void*)0)) == VAR_2) {

                    VAR_17 = VAR_16;
                }
            }
        } else {
            FUNC_14(VAR_18);
            FUNC_13("eviction-cycle",VAR_18);
            goto cant_free;
        }
    }
    FUNC_14(VAR_18);
    FUNC_13("eviction-cycle",VAR_18);
    return VAR_2;

cant_free:



    while(FUNC_0(VAR_0)) {
        if (((VAR_15 - FUNC_23()) + VAR_17) >= VAR_16)
            break;
        FUNC_22(1000);
    }
    return VAR_1;
}
