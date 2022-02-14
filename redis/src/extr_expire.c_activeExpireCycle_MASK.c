
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long avg_ttl; int expires; } ;
typedef TYPE_1__ redisDb ;
typedef int dictEntry ;
struct TYPE_5__ {int dbnum; int hz; double stat_expired_stale_perc; int stat_expired_time_cap_reached_count; TYPE_1__* db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,long long) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int ) ;
 long long FUNC_3 (int *) ;
 unsigned long FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (char*,long long) ;
 long long FUNC_7 () ;
 TYPE_2__ VAR_6 ;
 long long FUNC_8 () ;

void FUNC_9(int VAR_7) {


    static unsigned int VAR_8 = 0;
    static int VAR_9 = 0;
    static long long VAR_10 = 0;

    int VAR_11, VAR_12 = 0;
    int VAR_13 = VAR_4;
    long long VAR_14 = FUNC_8(), VAR_15, VAR_16;




    if (FUNC_1()) return;

    if (VAR_7 == VAR_0) {



        if (!VAR_9) return;
        if (VAR_14 < VAR_10 + VAR_1*2) return;
        VAR_10 = VAR_14;
    }
    if (VAR_13 > VAR_6.dbnum || VAR_9)
        VAR_13 = VAR_6.dbnum;





    VAR_15 = 1000000*VAR_3/VAR_6.hz/100;
    VAR_9 = 0;
    if (VAR_15 <= 0) VAR_15 = 1;

    if (VAR_7 == VAR_0)
        VAR_15 = VAR_1;




    long VAR_17 = 0;
    long VAR_18 = 0;

    for (VAR_11 = 0; VAR_11 < VAR_13 && VAR_9 == 0; VAR_11++) {
        int VAR_19;
        redisDb *VAR_20 = VAR_6.db+(VAR_8 % VAR_6.dbnum);




        VAR_8++;



        do {
            unsigned long VAR_21, VAR_22;
            long long VAR_23, VAR_24;
            int VAR_25;
            VAR_12++;


            if ((VAR_21 = FUNC_4(VAR_20->expires)) == 0) {
                VAR_20->avg_ttl = 0;
                break;
            }
            VAR_22 = FUNC_5(VAR_20->expires);
            VAR_23 = FUNC_7();




            if (VAR_21 && VAR_22 > VAR_5 &&
                (VAR_21*100/VAR_22 < 1)) break;



            VAR_19 = 0;
            VAR_24 = 0;
            VAR_25 = 0;

            if (VAR_21 > VAR_2)
                VAR_21 = VAR_2;

            while (VAR_21--) {
                dictEntry *VAR_26;
                long long VAR_27;

                if ((VAR_26 = FUNC_2(VAR_20->expires)) == ((void*)0)) break;
                VAR_27 = FUNC_3(VAR_26)-VAR_23;
                if (FUNC_0(VAR_20,VAR_26,VAR_23)) VAR_19++;
                if (VAR_27 > 0) {

                    VAR_24 += VAR_27;
                    VAR_25++;
                }
                VAR_17++;
            }
            VAR_18 += VAR_19;


            if (VAR_25) {
                long long VAR_28 = VAR_24/VAR_25;




                if (VAR_20->avg_ttl == 0) VAR_20->avg_ttl = VAR_28;
                VAR_20->avg_ttl = (VAR_20->avg_ttl/50)*49 + (VAR_28/50);
            }




            if ((VAR_12 & 0xf) == 0) {
                VAR_16 = FUNC_8()-VAR_14;
                if (VAR_16 > VAR_15) {
                    VAR_9 = 1;
                    VAR_6.stat_expired_time_cap_reached_count++;
                    break;
                }
            }


        } while (VAR_19 > VAR_2/4);
    }

    VAR_16 = FUNC_8()-VAR_14;
    FUNC_6("expire-cycle",VAR_16/1000);



    double VAR_29;
    if (VAR_17) {
        VAR_29 = (double)VAR_18/VAR_17;
    } else
        VAR_29 = 0;
    VAR_6.stat_expired_stale_perc = (VAR_29*0.05)+
                                     (VAR_6.stat_expired_stale_perc*0.95);
}
