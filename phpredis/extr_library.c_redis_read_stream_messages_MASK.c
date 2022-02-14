
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int *,int,int ) ;
 char* FUNC_6 (int *,int*) ;

int
FUNC_7(RedisSock *VAR_2, int VAR_3, zval *VAR_4
                          )
{
    zval VAR_5;
    int VAR_6, VAR_7, VAR_8;
    char *VAR_9 = ((void*)0);
    int VAR_10;


    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {


        if ((FUNC_4(VAR_2, &VAR_7) < 0 || VAR_7 != 2) ||
            ((VAR_9 = FUNC_6(VAR_2, &VAR_10)) == ((void*)0)) ||
            (FUNC_4(VAR_2, &VAR_8) < 0 || VAR_8 % 2 != 0))
        {
            if (VAR_9) FUNC_3(VAR_9);
            return -1;
        }

        FUNC_1(&VAR_5);

        FUNC_5(VAR_2, &VAR_5, VAR_8, VAR_1);
        FUNC_2(VAR_2, &VAR_5, VAR_0);
        FUNC_0(VAR_4, VAR_9, VAR_10, &VAR_5);
        FUNC_3(VAR_9);
    }

    return 0;
}
