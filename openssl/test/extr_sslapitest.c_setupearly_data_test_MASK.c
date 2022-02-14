
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_2 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_19 (int *,int *,int **,int **,int *,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_20(SSL_CTX **VAR_13, SSL_CTX **VAR_14, SSL **VAR_15,
                                SSL **VAR_16, SSL_SESSION **VAR_17, int VAR_18)
{
    if (*VAR_14 == ((void*)0)
            && !FUNC_13(FUNC_18(FUNC_15(),
                                              FUNC_14(),
                                              VAR_2, 0,
                                              VAR_14, VAR_13, VAR_3, VAR_7)))
        return 0;

    if (!FUNC_13(FUNC_0(*VAR_14, VAR_0)))
        return 0;

    if (VAR_18 == 1) {

        FUNC_3(*VAR_13, 1);
        FUNC_3(*VAR_14, 1);
    } else if (VAR_18 == 2) {

        FUNC_2(*VAR_13, VAR_11);
        FUNC_1(*VAR_14, VAR_5);
        VAR_12 = 0;
        VAR_6 = 0;
        VAR_10 = VAR_8;
    }

    if (!FUNC_13(FUNC_19(*VAR_14, *VAR_13, VAR_16, VAR_15,
                                      ((void*)0), ((void*)0))))
        return 0;







    if (VAR_18 == 1
            && !FUNC_13(FUNC_10(*VAR_15, "localhost")))
        return 0;

    if (VAR_18 == 2) {
        VAR_4 = FUNC_16(*VAR_15);
        if (!FUNC_12(VAR_4)




                || !FUNC_13(FUNC_5(VAR_4,
                                                             0x100))
                || !FUNC_13(FUNC_6(VAR_4))) {
            FUNC_4(VAR_4);
            VAR_4 = ((void*)0);
            return 0;
        }
        VAR_9 = VAR_4;

        if (VAR_17 != ((void*)0)) {
            if (!FUNC_13(FUNC_6(VAR_4))) {
                FUNC_4(VAR_4);
                FUNC_4(VAR_9);
                VAR_4 = VAR_9 = ((void*)0);
                return 0;
            }
            *VAR_17 = VAR_4;
        }
        return 1;
    }

    if (VAR_17 == ((void*)0))
        return 1;

    if (!FUNC_13(FUNC_17(*VAR_16, *VAR_15,
                                         VAR_1)))
        return 0;

    *VAR_17 = FUNC_8(*VAR_15);
    FUNC_11(*VAR_15);
    FUNC_11(*VAR_16);
    FUNC_7(*VAR_16);
    FUNC_7(*VAR_15);
    *VAR_16 = *VAR_15 = ((void*)0);

    if (!FUNC_13(FUNC_19(*VAR_14, *VAR_13, VAR_16,
                                      VAR_15, ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_9(*VAR_15, *VAR_17)))
        return 0;

    return 1;
}
