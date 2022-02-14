
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (scalar_t__*,int) ;

void FUNC_2() {
    int VAR_3;
    for(VAR_3 = 0 ; VAR_0[VAR_3] ; VAR_3++) {
        VAR_2++;
        VAR_1 = FUNC_1(VAR_1, VAR_2 * sizeof(char *));
        FUNC_0(VAR_1 != ((void*)0));
        VAR_1[VAR_2 - 1] = VAR_0[VAR_3];
    }
}
