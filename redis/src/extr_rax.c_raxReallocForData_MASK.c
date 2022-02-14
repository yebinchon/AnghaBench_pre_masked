
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raxNode ;


 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;

raxNode *FUNC_2(raxNode *VAR_0, void *VAR_1) {
    if (VAR_1 == ((void*)0)) return VAR_0;
    size_t VAR_2 = FUNC_0(VAR_0);
    return FUNC_1(VAR_0,VAR_2+sizeof(void*));
}
