
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,int*) ;
 scalar_t__ FUNC_5 (int *,char*,int,int *) ;

int FUNC_6(RedisSock *VAR_1, zval *VAR_2,
                    long long VAR_3, void *VAR_4)
{
    char *VAR_5;
    int VAR_6;


    while (VAR_3--) {

        VAR_5 = FUNC_4(VAR_1, &VAR_6);

        if (VAR_5 != ((void*)0)) {
            zval VAR_7;
            if (FUNC_5(VAR_1, VAR_5, VAR_6, &VAR_7)) {
                FUNC_2(VAR_2, &VAR_7);
            } else {
                FUNC_1(VAR_2, VAR_5, VAR_6);
            }
            FUNC_3(VAR_5);
        } else {
            if (VAR_5) FUNC_3(VAR_5);
            FUNC_0(VAR_2, 0);
        }
    }

    return VAR_0;
}
