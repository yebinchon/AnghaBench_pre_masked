
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,int*) ;
 scalar_t__ FUNC_5 (int *,char*,int,int *) ;

void
FUNC_6(RedisSock *VAR_3, zval *VAR_4, int VAR_5,
                       int VAR_6)
{
    zval VAR_7;
    char *VAR_8;
    int VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
        if ((VAR_8 = FUNC_4(VAR_3, &VAR_10)) == ((void*)0)) {
            FUNC_0(VAR_4, 0);
            continue;
        }




        int VAR_11 = (
            (VAR_6 == VAR_0) ||
            (VAR_6 == VAR_1 && VAR_9 % 2 == 0) ||
            (VAR_6 == VAR_2 && VAR_9 % 2 != 0)
        );

        if (VAR_11 && FUNC_5(VAR_3, VAR_8, VAR_10, &VAR_7)) {
            FUNC_2(VAR_4, &VAR_7);
        } else {
            FUNC_1(VAR_4, VAR_8, VAR_10);
        }
        FUNC_3(VAR_8);
    }
}
