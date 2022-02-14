
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int redisReply ;
struct TYPE_2__ {int interval; scalar_t__ output; scalar_t__ latency_history; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (long long,long long,double,long long) ;
 long long FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int * FUNC_6 (int ,char*) ;
 int VAR_5 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void) {
    redisReply *VAR_6;
    long long VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    long long VAR_13 =
        VAR_3.interval ? VAR_3.interval/1000 :
                          VAR_0;
    double VAR_14;
    long long VAR_15 = FUNC_4();



    if (VAR_3.interval == 0) {
        VAR_3.interval = 1000;
    } else {
        VAR_3.interval /= 1000;
    }

    if (!VAR_4) FUNC_0(1);
    while(1) {
        VAR_7 = FUNC_4();
        VAR_6 = FUNC_6(VAR_4,"PING");
        if (VAR_6 == ((void*)0)) {
            FUNC_1(VAR_5,"\nI/O error\n");
            FUNC_0(1);
        }
        VAR_8 = FUNC_4()-VAR_7;
        FUNC_2(VAR_6);
        VAR_12++;
        if (VAR_12 == 1) {
            VAR_9 = VAR_10 = VAR_11 = VAR_8;
            VAR_14 = (double) VAR_8;
        } else {
            if (VAR_8 < VAR_9) VAR_9 = VAR_8;
            if (VAR_8 > VAR_10) VAR_10 = VAR_8;
            VAR_11 += VAR_8;
            VAR_14 = (double) VAR_11/VAR_12;
        }

        if (VAR_3.output == VAR_2) {
            FUNC_5("\x1b[0G\x1b[2K");
            FUNC_3(VAR_9,VAR_10,VAR_14,VAR_12);
        } else {
            if (VAR_3.latency_history) {
                FUNC_3(VAR_9,VAR_10,VAR_14,VAR_12);
            } else if (FUNC_4()-VAR_15 > VAR_3.interval) {
                FUNC_3(VAR_9,VAR_10,VAR_14,VAR_12);
                FUNC_0(0);
            }
        }

        if (VAR_3.latency_history && FUNC_4()-VAR_15 > VAR_13)
        {
            FUNC_5(" -- %.2f seconds range\n", (float)(FUNC_4()-VAR_15)/1000);
            VAR_15 = FUNC_4();
            VAR_9 = VAR_10 = VAR_11 = VAR_12 = 0;
        }
        FUNC_7(VAR_1 * 1000);
    }
}
