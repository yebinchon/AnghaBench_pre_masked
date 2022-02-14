
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smart_string ;
typedef int RedisSock ;


 short FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char**,size_t*) ;

int FUNC_4(smart_string *VAR_0, char *VAR_1, size_t VAR_2, RedisSock *VAR_3, short *VAR_4) {
    int VAR_5, VAR_6;

    VAR_5 = FUNC_3(VAR_3, &VAR_1, &VAR_2);
    if (VAR_4) *VAR_4 = FUNC_0(VAR_1, VAR_2);
    VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);
    if (VAR_5) FUNC_1(VAR_1);

    return VAR_6;
}
