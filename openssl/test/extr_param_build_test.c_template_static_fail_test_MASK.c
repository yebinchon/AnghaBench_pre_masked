
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secure ;
typedef int data ;
typedef int OSSL_PARAM_BLD ;
typedef int OSSL_PARAM ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char*) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*,char*,int) ;
 int FUNC_12 (int *,int *,int,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_13(int VAR_0)
{
    unsigned char VAR_1[10000], VAR_2[500];
    OSSL_PARAM_BLD VAR_3;
    OSSL_PARAM VAR_4[20];
    BIGNUM *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    FUNC_8(&VAR_3);
    if (!FUNC_7(FUNC_10(&VAR_3, "i", 6))
        || !FUNC_5(VAR_5 = (VAR_0 & 1) == 0 ? FUNC_2() : FUNC_3())
        || !FUNC_7(FUNC_1(&VAR_5, "ABCDEF78901234567890ABCDEF0987987654321"))
        || !FUNC_7(FUNC_9(&VAR_3, "bn", VAR_5))
        || !FUNC_7(FUNC_11(&VAR_3, "utf8_s", "abc",
                                                      1000))

        || !FUNC_6(FUNC_12(&VAR_3, ((void*)0), 0, VAR_1,
                                                     sizeof(VAR_1), VAR_2,
                                                     sizeof(VAR_2)))

        || !FUNC_6(FUNC_12(&VAR_3, VAR_4, 2,
                                                     VAR_1, sizeof(VAR_1),
                                                     VAR_2, sizeof(VAR_2)))

        || !FUNC_6(FUNC_12(&VAR_3, VAR_4,
                                                     FUNC_4(VAR_4),
                                                     ((void*)0), 0, VAR_2,
                                                     sizeof(VAR_2)))

        || !FUNC_6(FUNC_12(&VAR_3, VAR_4,
                                                     FUNC_4(VAR_4),
                                                     VAR_1, 50, VAR_2,
                                                     sizeof(VAR_2))))
            goto err;
        if ((VAR_0 & 1) == 1) {

            if (!FUNC_6(FUNC_12(&VAR_3, VAR_4,
                                                          FUNC_4(VAR_4),
                                                          VAR_1, sizeof(VAR_1),
                                                          ((void*)0), 0))

            || !FUNC_6(FUNC_12(&VAR_3, VAR_4,
                                                         FUNC_4(VAR_4),
                                                         VAR_1, sizeof(VAR_1),
                                                         VAR_2, 4)))
                goto err;
        }
    VAR_6 = 1;
err:
    FUNC_0(VAR_5);
    return VAR_6;
}
