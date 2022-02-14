
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;
typedef int pat ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int,char*,int,int ) ;

int FUNC_2(void) {
    char VAR_0[32];
    char VAR_1[32];
    int VAR_2 = 10000000;
    int VAR_3 = 0;
    while(VAR_2--) {
        int VAR_4 = FUNC_0() % sizeof(VAR_0);
        int VAR_5 = FUNC_0() % sizeof(VAR_1);
        for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = FUNC_0() % 128;
        for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) VAR_1[VAR_7] = FUNC_0() % 128;
        VAR_3 += FUNC_1(VAR_1, VAR_5, VAR_0, VAR_4, 0);
    }
    return VAR_3;
}
