
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evictionPoolEntry {unsigned long long idle; int dbid; int * cached; int * key; } ;
typedef void* sds ;
typedef int robj ;
typedef int pool ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_2__ {int maxmemory_samples; int maxmemory_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int * FUNC_1 (int *,void*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int **,int) ;
 int * FUNC_4 (int *) ;
 unsigned long long FUNC_5 (int *) ;
 int FUNC_6 (int *,void*,int) ;
 int FUNC_7 (struct evictionPoolEntry*,struct evictionPoolEntry*,int) ;
 int * FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_12 (char*) ;

void FUNC_13(int VAR_7, dict *VAR_8, dict *VAR_9, struct evictionPoolEntry *VAR_10) {
    int VAR_11, VAR_12, VAR_13;
    dictEntry *VAR_14[VAR_6.maxmemory_samples];

    VAR_13 = FUNC_3(VAR_8,VAR_14,VAR_6.maxmemory_samples);
    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
        unsigned long long VAR_15;
        sds VAR_16;
        robj *VAR_17;
        dictEntry *VAR_18;

        VAR_18 = VAR_14[VAR_11];
        VAR_16 = FUNC_2(VAR_18);




        if (VAR_6.maxmemory_policy != VAR_4) {
            if (VAR_8 != VAR_9) VAR_18 = FUNC_1(VAR_9, VAR_16);
            VAR_17 = FUNC_4(VAR_18);
        }




        if (VAR_6.maxmemory_policy & VAR_3) {
            VAR_15 = FUNC_5(VAR_17);
        } else if (VAR_6.maxmemory_policy & VAR_2) {







            VAR_15 = 255-FUNC_0(VAR_17);
        } else if (VAR_6.maxmemory_policy == VAR_4) {

            VAR_15 = VAR_5 - (long)FUNC_4(VAR_18);
        } else {
            FUNC_12("Unknown eviction policy in evictionPoolPopulate()");
        }




        VAR_12 = 0;
        while (VAR_12 < VAR_1 &&
               VAR_10[VAR_12].key &&
               VAR_10[VAR_12].idle < VAR_15) VAR_12++;
        if (VAR_12 == 0 && VAR_10[VAR_1-1].key != ((void*)0)) {


            continue;
        } else if (VAR_12 < VAR_1 && VAR_10[VAR_12].key == ((void*)0)) {

        } else {


            if (VAR_10[VAR_1-1].key == ((void*)0)) {




                sds VAR_19 = VAR_10[VAR_1-1].cached;
                FUNC_7(VAR_10+VAR_12+1,VAR_10+VAR_12,
                    sizeof(VAR_10[0])*(VAR_1-VAR_12-1));
                VAR_10[VAR_12].cached = VAR_19;
            } else {

                VAR_12--;


                sds VAR_20 = VAR_10[0].cached;
                if (VAR_10[0].key != VAR_10[0].cached) FUNC_9(VAR_10[0].key);
                FUNC_7(VAR_10,VAR_10+1,sizeof(VAR_10[0])*VAR_12);
                VAR_10[VAR_12].cached = VAR_20;
            }
        }





        int VAR_21 = FUNC_10(VAR_16);
        if (VAR_21 > VAR_0) {
            VAR_10[VAR_12].key = FUNC_8(VAR_16);
        } else {
            FUNC_6(VAR_10[VAR_12].cached,VAR_16,VAR_21+1);
            FUNC_11(VAR_10[VAR_12].cached,VAR_21);
            VAR_10[VAR_12].key = VAR_10[VAR_12].cached;
        }
        VAR_10[VAR_12].idle = VAR_15;
        VAR_10[VAR_12].dbid = VAR_7;
    }
}
