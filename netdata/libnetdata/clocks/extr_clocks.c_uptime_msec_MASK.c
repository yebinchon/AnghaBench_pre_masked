
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ collected_number ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,long long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;

static inline collected_number FUNC_6(char *VAR_1){
    static int VAR_2 = -1;

    if(FUNC_4(VAR_2 == -1)) {
        collected_number VAR_3 = FUNC_5();
        collected_number VAR_4 = FUNC_3(VAR_1);

        long long VAR_5 = (long long)VAR_3 - (long long)VAR_4;
        if(VAR_5 < 0) VAR_5 = -VAR_5;

        if(VAR_5 <= 1000 && VAR_3 != 0) {
            FUNC_2(VAR_0);
            FUNC_1("Using now_boottime_usec() for uptime (dt is %lld ms)", VAR_5);
            VAR_2 = 1;
        }
        else if(VAR_4 != 0) {
            FUNC_1("Using /proc/uptime for uptime (dt is %lld ms)", VAR_5);
            VAR_2 = 0;
        }
        else {
            FUNC_0("Cannot find any way to read uptime on this system.");
            return 1;
        }
    }

    collected_number VAR_6;
    if(VAR_2)
        VAR_6 = FUNC_5();
    else
        VAR_6 = FUNC_3(VAR_1);

    return VAR_6;
}
