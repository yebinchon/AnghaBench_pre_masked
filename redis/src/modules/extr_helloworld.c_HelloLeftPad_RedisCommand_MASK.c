
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,long long) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,long long) ;
 char* FUNC_5 (int *,size_t*) ;
 scalar_t__ FUNC_6 (int *,long long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*,size_t) ;

int FUNC_9(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    FUNC_0(VAR_1);
    long long VAR_4;

    if (VAR_3 != 4) return FUNC_7(VAR_1);

    if ((FUNC_6(VAR_2[2],&VAR_4) != VAR_0) ||
        (VAR_4< 0)) {
        return FUNC_2(VAR_1,"ERR invalid padding length");
    }
    size_t VAR_5, VAR_6;
    const char *VAR_7 = FUNC_5(VAR_2[1], &VAR_5);
    const char *VAR_8 = FUNC_5(VAR_2[3], &VAR_6);



    if (VAR_5 >= (size_t)VAR_4)
        return FUNC_3(VAR_1,VAR_2[1]);


    if (VAR_6 != 1)
        return FUNC_2(VAR_1,
            "ERR padding must be a single char");


    VAR_4 -= VAR_5;
    char *VAR_9 = FUNC_1(VAR_1,VAR_4+VAR_5);
    for (long long VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) VAR_9[VAR_10] = *VAR_8;
    FUNC_8(VAR_9+VAR_4,VAR_7,VAR_5);

    FUNC_4(VAR_1,VAR_9,VAR_4+VAR_5);
    return VAR_0;
}
