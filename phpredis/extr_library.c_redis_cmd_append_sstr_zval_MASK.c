
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int smart_string ;
typedef int RedisSock ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,int *,char**,size_t*) ;

int FUNC_3(smart_string *VAR_0, zval *VAR_1, RedisSock *VAR_2) {
    char *VAR_3;
    size_t VAR_4;
    int VAR_5, VAR_6;

    VAR_5 = FUNC_2(VAR_2, VAR_1, &VAR_3, &VAR_4);
    VAR_6 = FUNC_1(VAR_0, VAR_3, VAR_4);
    if (VAR_5) FUNC_0(VAR_3);

    return VAR_6;
}
