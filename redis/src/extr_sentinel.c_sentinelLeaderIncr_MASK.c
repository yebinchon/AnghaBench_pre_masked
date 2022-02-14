
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dictEntry ;
typedef int dict ;


 int * FUNC_0 (int *,char*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(dict *VAR_0, char *VAR_1) {
    dictEntry *VAR_2, *VAR_3;
    uint64_t VAR_4;

    VAR_3 = FUNC_0(VAR_0,VAR_1,&VAR_2);
    if (VAR_2) {
        VAR_4 = FUNC_1(VAR_2);
        FUNC_2(VAR_2,VAR_4+1);
        return VAR_4+1;
    } else {
        FUNC_3(VAR_3 != ((void*)0));
        FUNC_2(VAR_3,1);
        return 1;
    }
}
