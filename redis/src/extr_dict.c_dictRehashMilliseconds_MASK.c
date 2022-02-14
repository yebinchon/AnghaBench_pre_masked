
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dict ;


 scalar_t__ FUNC_0 (int *,int) ;
 long long FUNC_1 () ;

int FUNC_2(dict *VAR_0, int VAR_1) {
    long long VAR_2 = FUNC_1();
    int VAR_3 = 0;

    while(FUNC_0(VAR_0,100)) {
        VAR_3 += 100;
        if (FUNC_1()-VAR_2 > VAR_1) break;
    }
    return VAR_3;
}
