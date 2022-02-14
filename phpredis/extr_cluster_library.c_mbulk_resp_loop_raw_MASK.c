
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int*) ;

int FUNC_3(RedisSock *VAR_2, zval *VAR_3,
                        long long VAR_4, void *VAR_5)
{
    char *VAR_6;
    int VAR_7;


    while (VAR_4--) {

        VAR_6 = FUNC_2(VAR_2, &VAR_7);
        if (VAR_6 == ((void*)0)) return VAR_0;


        FUNC_0(VAR_3, VAR_6, VAR_7);
        FUNC_1(VAR_6);
    }


    return VAR_1;
}
