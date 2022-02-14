
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long*,long*) ;

__attribute__((used)) static void FUNC_1(long long VAR_0, long *VAR_1, long *VAR_2) {
    long VAR_3, VAR_4, VAR_5, VAR_6;

    FUNC_0(&VAR_3, &VAR_4);
    VAR_5 = VAR_3 + VAR_0/1000;
    VAR_6 = VAR_4 + VAR_0%1000;
    if (VAR_6 >= 1000) {
        VAR_5 ++;
        VAR_6 -= 1000;
    }
    *VAR_1 = VAR_5;
    *VAR_2 = VAR_6;
}
