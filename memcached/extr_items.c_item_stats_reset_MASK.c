
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int itemstats_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void) {
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_1(&VAR_2[VAR_3]);
        FUNC_0(&VAR_1[VAR_3], 0, sizeof(itemstats_t));
        FUNC_2(&VAR_2[VAR_3]);
    }
}
