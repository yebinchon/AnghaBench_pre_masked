
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(int VAR_1, int VAR_2) {
        char VAR_3[FUNC_1("/proc/self/fd/") + FUNC_0(VAR_1) + 1];
        int VAR_4;



        FUNC_3(VAR_3, "/proc/self/fd/%i", VAR_1);
        VAR_4 = FUNC_2(VAR_3, VAR_2);
        if (VAR_4 < 0)
                return -VAR_0;

        return VAR_4;
}
