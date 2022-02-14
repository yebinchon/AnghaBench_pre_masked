
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 () ;

int FUNC_2(pid_t VAR_0) {
        pid_t VAR_1;
        int VAR_2;

        if (VAR_0 <= 1)
                return 0;

        VAR_2 = FUNC_0(VAR_0, &VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        return VAR_1 == FUNC_1();
}
