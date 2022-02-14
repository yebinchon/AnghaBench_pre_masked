
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct distsamples {int member_0; char member_2; long long max; int count; int member_1; } ;
typedef int redisReply ;
struct TYPE_2__ {int interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct distsamples*,long long) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 long long FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void) {
    redisReply *VAR_5;
    long long VAR_6, VAR_7, VAR_8 = 0;
    long long VAR_9 =
        VAR_2.interval ? VAR_2.interval/1000 :
                          VAR_0;
    long long VAR_10 = FUNC_7();
    int VAR_11, VAR_12 = 0;

    struct distsamples VAR_13[] = {



        {10,0,'.'},
        {125,0,'-'},
        {250,0,'*'},
        {500,0,'#'},
        {1000,0,'1'},
        {2000,0,'2'},
        {3000,0,'3'},
        {4000,0,'4'},
        {5000,0,'5'},
        {6000,0,'6'},
        {7000,0,'7'},
        {8000,0,'8'},
        {9000,0,'9'},
        {10000,0,'A'},
        {20000,0,'B'},
        {30000,0,'C'},
        {40000,0,'D'},
        {50000,0,'E'},
        {100000,0,'F'},
        {200000,0,'G'},
        {300000,0,'H'},
        {400000,0,'I'},
        {500000,0,'J'},
        {1000000,0,'K'},
        {2000000,0,'L'},
        {4000000,0,'M'},
        {8000000,0,'N'},
        {16000000,0,'O'},
        {30000000,0,'P'},
        {60000000,0,'Q'},
        {0,0,'?'},
    };

    if (!VAR_3) FUNC_0(1);
    while(1) {
        VAR_6 = FUNC_7();
        VAR_5 = FUNC_3(VAR_3,"PING");
        if (VAR_5 == ((void*)0)) {
            FUNC_1(VAR_4,"\nI/O error\n");
            FUNC_0(1);
        }
        VAR_7 = FUNC_7()-VAR_6;
        FUNC_2(VAR_5);
        VAR_8++;


        for (VAR_11 = 0; ; VAR_11++) {
            if (VAR_13[VAR_11].max == 0 || VAR_7 <= VAR_13[VAR_11].max) {
                VAR_13[VAR_11].count++;
                break;
            }
        }


        if (VAR_8 && (FUNC_7()-VAR_10)/1000 > VAR_9) {
            if ((VAR_12++ % 20) == 0)
                FUNC_4();
            FUNC_5(VAR_13,VAR_8);
            VAR_10 = FUNC_7();
            VAR_8 = 0;
        }
        FUNC_6(VAR_1 * 1000);
    }
}
