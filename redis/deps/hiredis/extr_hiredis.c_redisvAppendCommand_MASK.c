
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char const*,int ) ;

int FUNC_4(redisContext *VAR_4, const char *VAR_5, va_list VAR_6) {
    char *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_3(&VAR_7,VAR_5,VAR_6);
    if (VAR_8 == -1) {
        FUNC_1(VAR_4,VAR_1,"Out of memory");
        return VAR_0;
    } else if (VAR_8 == -2) {
        FUNC_1(VAR_4,VAR_2,"Invalid format string");
        return VAR_0;
    }

    if (FUNC_0(VAR_4,VAR_7,VAR_8) != VAR_3) {
        FUNC_2(VAR_7);
        return VAR_0;
    }

    FUNC_2(VAR_7);
    return VAR_3;
}
