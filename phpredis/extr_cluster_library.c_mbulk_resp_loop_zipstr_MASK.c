
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*,int) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,char*,int,int *) ;

int FUNC_5(RedisSock *VAR_1, zval *VAR_2,
                           long long VAR_3, void *VAR_4)
{
    char *VAR_5, *VAR_6 = ((void*)0);
    int VAR_7, VAR_8 = 0;
    long long VAR_9 = 0;


    if (VAR_3 % 2 != 0) {
        return -1;
    }


    while (VAR_3--) {

        VAR_5 = FUNC_3(VAR_1, &VAR_7);
        if (!VAR_5) return -1;

        if (VAR_9++ % 2 == 0) {

            VAR_6 = VAR_5;
            VAR_8 = VAR_7;
        } else {

            zval VAR_10;
            if (FUNC_4(VAR_1, VAR_5, VAR_7, &VAR_10)) {
                FUNC_1(VAR_2, VAR_6, &VAR_10);
            } else {
                FUNC_0(VAR_2, VAR_6, VAR_8, VAR_5, VAR_7);
            }

            FUNC_2(VAR_5);
            FUNC_2(VAR_6);
        }
    }

    return VAR_0;
}
