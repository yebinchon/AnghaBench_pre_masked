
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleDictIter ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,int *) ;
 int * FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,size_t*,int *) ;
 int FUNC_4 (int *,long long) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,size_t) ;
 scalar_t__ FUNC_8 (int *,long long*) ;
 int FUNC_9 (int *) ;

int FUNC_10(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6) {
    if (VAR_6 != 4) return FUNC_9(VAR_4);


    long long VAR_7;
    if (FUNC_8(VAR_5[3],&VAR_7) != VAR_2) {
        return FUNC_6(VAR_4,"ERR invalid count");
    }


    RedisModuleDictIter *VAR_8 = FUNC_1(
        VAR_0, ">=", VAR_5[1]);


    char *VAR_9;
    size_t VAR_10;
    long long VAR_11 = 0;
    FUNC_5(VAR_4,VAR_3);
    while((VAR_9 = FUNC_3(VAR_8,&VAR_10,((void*)0))) != ((void*)0)) {
        if (VAR_11 >= VAR_7) break;
        if (FUNC_0(VAR_8,"<=",VAR_5[2]) == VAR_1)
            break;
        FUNC_7(VAR_4,VAR_9,VAR_10);
        VAR_11++;
    }
    FUNC_4(VAR_4,VAR_11);


    FUNC_2(VAR_8);
    return VAR_2;
}
