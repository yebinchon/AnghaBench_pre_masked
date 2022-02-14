
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;


 int FUNC_0 (int *,char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,int,int *) ;
 char* FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;

int
FUNC_7(RedisSock *VAR_0, int VAR_1, zval *VAR_2
                                )
{
    zval VAR_3;
    int VAR_4, VAR_5, VAR_6;
    char *VAR_7 = ((void*)0);
    int VAR_8;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if ((FUNC_3(VAR_0, &VAR_5) < 0 || VAR_5 != 2) ||
            (VAR_7 = FUNC_5(VAR_0, &VAR_8)) == ((void*)0) ||
            FUNC_3(VAR_0, &VAR_6) < 0)
        {
            if (VAR_7) FUNC_2(VAR_7);
            return -1;
        }

        FUNC_1(&VAR_3);

        if (FUNC_4(VAR_0, VAR_6, &VAR_3) < 0)
            goto failure;

        FUNC_0(VAR_2, VAR_7, VAR_8, &VAR_3);
        FUNC_2(VAR_7);
    }

    return 0;
failure:
    FUNC_2(VAR_7);
    FUNC_6(&VAR_3);
    return -1;
}
