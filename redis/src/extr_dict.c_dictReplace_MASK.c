
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dictEntry ;
typedef int dict ;


 int * FUNC_0 (int *,void*,int **) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,void*) ;

int FUNC_3(dict *VAR_0, void *VAR_1, void *VAR_2)
{
    dictEntry *VAR_3, *VAR_4, VAR_5;



    VAR_3 = FUNC_0(VAR_0,VAR_1,&VAR_4);
    if (VAR_3) {
        FUNC_2(VAR_0, VAR_3, VAR_2);
        return 1;
    }






    VAR_5 = *VAR_4;
    FUNC_2(VAR_0, VAR_4, VAR_2);
    FUNC_1(VAR_0, &VAR_5);
    return 0;
}
