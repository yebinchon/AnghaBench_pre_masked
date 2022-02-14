
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int redisCallbackFn ;
typedef int redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,void*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char const*,int ) ;

int FUNC_3(redisAsyncContext *VAR_1, redisCallbackFn *VAR_2, void *VAR_3, const char *VAR_4, va_list VAR_5) {
    char *VAR_6;
    int VAR_7;
    int VAR_8;
    VAR_7 = FUNC_2(&VAR_6,VAR_4,VAR_5);


    if (VAR_7 < 0)
        return VAR_0;

    VAR_8 = FUNC_0(VAR_1,VAR_2,VAR_3,VAR_6,VAR_7);
    FUNC_1(VAR_6);
    return VAR_8;
}
