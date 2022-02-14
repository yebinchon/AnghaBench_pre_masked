
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int *,int **,int **,int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int *,int *) ;
 int ** VAR_2 ;

__attribute__((used)) static int FUNC_12(int VAR_3, SSL_CTX *VAR_4, SSL_CTX *VAR_5, int VAR_6)
{
    SSL *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9;


    for (VAR_9 = 0; VAR_9 < VAR_3 * 2; VAR_9++) {
        VAR_1 = 0;
        if (!FUNC_8(FUNC_10(VAR_4, VAR_5, &VAR_7,
                                              &VAR_8, ((void*)0), ((void*)0)))
                || !FUNC_8(FUNC_4(VAR_8, VAR_2[VAR_9])))
            goto end;

        FUNC_3(VAR_8, 1);

        if (!FUNC_8(FUNC_9(VAR_7, VAR_8,
                                                    VAR_0)))
            goto end;





        if (VAR_6) {
            if (!FUNC_8(FUNC_2(VAR_8))
                    || !FUNC_7(VAR_1, 1))
                goto end;
        } else {
            if (!FUNC_6(FUNC_2(VAR_8))
                    || !FUNC_7(VAR_1, VAR_3))
                goto end;
        }

        VAR_1 = 0;

        if (VAR_6
                && (!FUNC_11(VAR_7, VAR_8)
                    || !FUNC_7(VAR_1, 1)))
            goto end;

        FUNC_5(VAR_8);
        FUNC_5(VAR_7);
        FUNC_1(VAR_7);
        FUNC_1(VAR_8);
        VAR_7 = VAR_8 = ((void*)0);
        FUNC_0(VAR_2[VAR_9]);
        VAR_2[VAR_9] = ((void*)0);
    }

    return 1;

 end:
    FUNC_1(VAR_8);
    FUNC_1(VAR_7);
    return 0;
}
