
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_1 ;
 int FUNC_13 (int *,int ,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_14(void)
{
    SSL_CTX *VAR_3 = ((void*)0);
    BIO *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    if (!FUNC_10(VAR_4 = FUNC_1(VAR_2, "r"))
            || !FUNC_10(VAR_3 = FUNC_8(FUNC_12()))
            || !FUNC_9(FUNC_4(VAR_3), 0)
            || !FUNC_11(FUNC_7(VAR_3, VAR_0))
            || !FUNC_9(FUNC_5(VAR_3, FUNC_3(), 2, 1),
                            0)
            || !FUNC_9(FUNC_5(VAR_3, FUNC_2(), 1, 2),
                            0)
            || !FUNC_9(FUNC_13(VAR_3, VAR_1, VAR_4, VAR_2), 0))
        goto end;
    VAR_5 = 1;

end:
    FUNC_0(VAR_4);
    FUNC_6(VAR_3);

    return VAR_5;
}
