
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dictEntry ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,void*) ;
 int * FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,void*) ;

__attribute__((used)) static int FUNC_4(dict *VAR_1, void *VAR_2, void *VAR_3) {
    dictEntry *VAR_4, VAR_5;



    if (FUNC_0(VAR_1, VAR_2, VAR_3) == VAR_0)
        return 1;

    VAR_4 = FUNC_1(VAR_1, VAR_2);






    VAR_5 = *VAR_4;
    FUNC_3(VAR_1, VAR_4, VAR_3);
    FUNC_2(VAR_1, &VAR_5);
    return 0;
}
