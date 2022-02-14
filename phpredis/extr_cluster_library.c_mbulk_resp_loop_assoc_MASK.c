
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char zval ;
typedef int zend_string ;
typedef int RedisSock ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,char*,int) ;
 int FUNC_4 (char*,int ,int ,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,char*,int,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (char*) ;

int FUNC_11(RedisSock *VAR_1, zval *VAR_2,
                          long long VAR_3, void *VAR_4)
{
    char *VAR_5;
    int VAR_6,VAR_7 = 0;
    zval *VAR_8 = VAR_4;


    while (VAR_3--) {
        zend_string *VAR_9 = FUNC_10(&VAR_8[VAR_7]);
        VAR_5 = FUNC_6(VAR_1, &VAR_6);

        if (VAR_5 != ((void*)0)) {
            zval VAR_10;
            if (FUNC_7(VAR_1, VAR_5, VAR_6, &VAR_10)) {
                FUNC_4(VAR_2, FUNC_1(VAR_9), FUNC_0(VAR_9), &VAR_10);
            } else {
                FUNC_3(VAR_2, FUNC_1(VAR_9), FUNC_0(VAR_9), VAR_5, VAR_6);
            }
            FUNC_5(VAR_5);
        } else {
            FUNC_2(VAR_2, FUNC_1(VAR_9), FUNC_0(VAR_9), 0);
        }


        FUNC_8(VAR_9);
        FUNC_9(&VAR_8[VAR_7]);


        VAR_7++;
    }


    FUNC_5(VAR_8);


    return VAR_0;
}
