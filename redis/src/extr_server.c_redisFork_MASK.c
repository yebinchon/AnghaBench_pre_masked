
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long stat_fork_time; double stat_fork_rate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 long long FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

int FUNC_7() {
    int VAR_1;
    long long VAR_2 = FUNC_5();
    if ((VAR_1 = FUNC_1()) == 0) {

        FUNC_0(0);
        FUNC_3();
    } else {

        VAR_0.stat_fork_time = FUNC_5()-VAR_2;
        VAR_0.stat_fork_rate = (double) FUNC_6() * 1000000 / VAR_0.stat_fork_time / (1024*1024*1024);
        FUNC_2("fork",VAR_0.stat_fork_time/1000);
        if (VAR_1 == -1) {
            return -1;
        }
        FUNC_4();
    }
    return VAR_1;
}
