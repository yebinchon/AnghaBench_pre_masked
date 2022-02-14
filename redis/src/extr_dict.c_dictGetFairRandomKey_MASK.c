
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dictEntry ;
typedef int dict ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,int **,int) ;
 unsigned int FUNC_2 () ;

dictEntry *FUNC_3(dict *VAR_1) {
    dictEntry *VAR_2[VAR_0];
    unsigned int VAR_3 = FUNC_1(VAR_1,VAR_2,VAR_0);




    if (VAR_3 == 0) return FUNC_0(VAR_1);
    unsigned int VAR_4 = FUNC_2() % VAR_3;
    return VAR_2[VAR_4];
}
