
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int VAR_0 ;
 int FUNC_16 (char*,int *,int *) ;
 int * FUNC_17 (int *,char*) ;

__attribute__((used)) static int FUNC_18(STANZA *VAR_1)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!FUNC_14(VAR_2 = FUNC_17(VAR_1, "A"))
            || !FUNC_14(VAR_3 = FUNC_17(VAR_1, "Square"))
            || !FUNC_14(VAR_4 = FUNC_5())
            || !FUNC_14(VAR_5 = FUNC_5())
            || !FUNC_14(VAR_6 = FUNC_5()))
        goto err;

    FUNC_10(VAR_4);
    if (!FUNC_15(FUNC_7(VAR_5, VAR_2, VAR_0))
            || !FUNC_16("A^2", VAR_3, VAR_5)
            || !FUNC_15(FUNC_4(VAR_5, VAR_2, VAR_2, VAR_0))
            || !FUNC_16("A * A", VAR_3, VAR_5)
            || !FUNC_15(FUNC_2(VAR_5, VAR_6, VAR_3, VAR_2, VAR_0))
            || !FUNC_16("Square / A", VAR_2, VAR_5)
            || !FUNC_16("Square % A", VAR_4, VAR_6))
        goto err;
    VAR_8 = 1;
 err:
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    return VAR_8;
}
