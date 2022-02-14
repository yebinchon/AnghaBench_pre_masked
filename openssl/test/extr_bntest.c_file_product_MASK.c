
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (char*,int *,int *) ;
 int * FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9(STANZA *VAR_1)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!FUNC_5(VAR_2 = FUNC_8(VAR_1, "A"))
            || !FUNC_5(VAR_3 = FUNC_8(VAR_1, "B"))
            || !FUNC_5(VAR_4 = FUNC_8(VAR_1, "Product"))
            || !FUNC_5(VAR_5 = FUNC_3())
            || !FUNC_5(VAR_6 = FUNC_3())
            || !FUNC_5(VAR_7 = FUNC_3()))
        goto err;

    FUNC_4(VAR_7);

    if (!FUNC_6(FUNC_2(VAR_5, VAR_2, VAR_3, VAR_0))
            || !FUNC_7("A * B", VAR_4, VAR_5)
            || !FUNC_6(FUNC_0(VAR_5, VAR_6, VAR_4, VAR_2, VAR_0))
            || !FUNC_7("Product / A", VAR_3, VAR_5)
            || !FUNC_7("Product % A", VAR_7, VAR_6)
            || !FUNC_6(FUNC_0(VAR_5, VAR_6, VAR_4, VAR_3, VAR_0))
            || !FUNC_7("Product / B", VAR_2, VAR_5)
            || !FUNC_7("Product % B", VAR_7, VAR_6))
        goto err;

    VAR_8 = 1;
 err:
    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
    return VAR_8;
}
