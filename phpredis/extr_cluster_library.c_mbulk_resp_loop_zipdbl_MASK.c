
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int RedisSock ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,char*,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

int FUNC_10(RedisSock *VAR_1, zval *VAR_2,
                           long long VAR_3, void *VAR_4)
{
    char *VAR_5, *VAR_6 = ((void*)0);
    int VAR_7, VAR_8 = 0;
    long long VAR_9 = 0;


    if (VAR_3 %2 != 0) {
        return -1;
    }


    while (VAR_3--) {
        VAR_5 = FUNC_5(VAR_1, &VAR_7);
        if (VAR_5 != ((void*)0)) {
            if (VAR_9++ % 2 == 0) {
                VAR_6 = VAR_5;
                VAR_8 = VAR_7;
            } else {
                zval VAR_10, *VAR_11 = &VAR_10;
                if (FUNC_6(VAR_1,VAR_6,VAR_8, VAR_11)) {
                    zend_string *VAR_12 = FUNC_9(VAR_11);
                    FUNC_2(VAR_2, FUNC_1(VAR_12), FUNC_0(VAR_12), FUNC_3(VAR_5));
                    FUNC_7(VAR_12);
                    FUNC_8(VAR_11);
                } else {
                    FUNC_2(VAR_2, VAR_6, VAR_8, FUNC_3(VAR_5));
                }


                FUNC_4(VAR_6);
                FUNC_4(VAR_5);
            }
        }
    }

    return VAR_0;
}
