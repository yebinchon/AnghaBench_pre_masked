
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raxNode ;
typedef int c ;


 int FUNC_0 (int **,int **,int) ;
 int ** FUNC_1 (int *) ;

raxNode **FUNC_2(raxNode *VAR_0, raxNode *VAR_1) {
    raxNode **VAR_2 = FUNC_1(VAR_0);
    raxNode *VAR_3;
    while(1) {
        FUNC_0(&VAR_3,VAR_2,sizeof(VAR_3));
        if (VAR_3 == VAR_1) break;
        VAR_2++;
    }
    return VAR_2;
}
