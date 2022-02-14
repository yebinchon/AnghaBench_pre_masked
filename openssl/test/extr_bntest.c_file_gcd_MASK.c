
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,int *,int *) ;
 int * FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(STANZA *VAR_1)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    if (!FUNC_3(VAR_2 = FUNC_6(VAR_1, "A"))
            || !FUNC_3(VAR_3 = FUNC_6(VAR_1, "B"))
            || !FUNC_3(VAR_4 = FUNC_6(VAR_1, "GCD"))
            || !FUNC_3(VAR_5 = FUNC_2()))
        goto err;

    if (!FUNC_4(FUNC_1(VAR_5, VAR_2, VAR_3, VAR_0))
            || !FUNC_5("gcd(A,B)", VAR_4, VAR_5))
        goto err;

    VAR_6 = 1;
 err:
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    return VAR_6;
}
