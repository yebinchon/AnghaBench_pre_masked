
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,char*,int *,int *,int*,int *) ;
 char** FUNC_3 (int *,size_t*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*,int ) ;

int FUNC_8(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4) {
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);

    size_t VAR_5;
    char **VAR_6 = FUNC_3(VAR_2,&VAR_5);
    if (VAR_6 == ((void*)0)) {
        return FUNC_5(VAR_2,"Cluster not enabled");
    }

    FUNC_4(VAR_2,VAR_5);
    for (size_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        int VAR_8;
        FUNC_2(VAR_2,VAR_6[VAR_7],((void*)0),((void*)0),&VAR_8,((void*)0));
        FUNC_4(VAR_2,2);
        FUNC_7(VAR_2,VAR_6[VAR_7],VAR_0);
        FUNC_6(VAR_2,VAR_8);
    }
    FUNC_1(VAR_6);
    return VAR_1;
}
