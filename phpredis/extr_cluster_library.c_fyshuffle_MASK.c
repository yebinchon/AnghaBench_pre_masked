
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 () ;

__attribute__((used)) static void FUNC_1(int *VAR_1, size_t VAR_2) {
    int VAR_3, VAR_4 = VAR_2;
    size_t VAR_5;


    while (VAR_4 > 1) {
        VAR_5 = ((int)((double)VAR_4-- * (FUNC_0() / (VAR_0+1.0))));
        VAR_3 = VAR_1[VAR_4];
        VAR_1[VAR_4] = VAR_1[VAR_5];
        VAR_1[VAR_5] = VAR_3;
    };
}
