
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int FUNC_12 (char*,int *,int *) ;
 int * FUNC_13 (int *,char*) ;

__attribute__((used)) static int FUNC_14(STANZA *VAR_1)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!FUNC_10(VAR_2 = FUNC_13(VAR_1, "A"))
            || !FUNC_10(VAR_3 = FUNC_13(VAR_1, "LShift1"))
            || !FUNC_10(VAR_4 = FUNC_5())
            || !FUNC_10(VAR_5 = FUNC_5())
            || !FUNC_10(VAR_6 = FUNC_5())
            || !FUNC_10(VAR_7 = FUNC_5()))
        goto err;

    FUNC_9(VAR_4);

    if (!FUNC_11(FUNC_8(VAR_6, 2))
            || !FUNC_11(FUNC_0(VAR_5, VAR_2, VAR_2))
            || !FUNC_12("A + A", VAR_3, VAR_5)
            || !FUNC_11(FUNC_4(VAR_5, VAR_2, VAR_6, VAR_0))
            || !FUNC_12("A * 2", VAR_3, VAR_5)
            || !FUNC_11(FUNC_1(VAR_5, VAR_7, VAR_3, VAR_6, VAR_0))
            || !FUNC_12("LShift1 / 2", VAR_2, VAR_5)
            || !FUNC_12("LShift1 % 2", VAR_4, VAR_7)
            || !FUNC_11(FUNC_3(VAR_5, VAR_2))
            || !FUNC_12("A << 1", VAR_3, VAR_5)
            || !FUNC_11(FUNC_6(VAR_5, VAR_3))
            || !FUNC_12("LShift >> 1", VAR_2, VAR_5)
            || !FUNC_11(FUNC_6(VAR_5, VAR_3))
            || !FUNC_12("LShift >> 1", VAR_2, VAR_5))
        goto err;


    if (!FUNC_11(FUNC_7(VAR_3, 0))
            || !FUNC_11(FUNC_1(VAR_5, ((void*)0) , VAR_3, VAR_6, VAR_0))
            || !FUNC_12("(LShift1 | 1) / 2", VAR_2, VAR_5)
            || !FUNC_11(FUNC_6(VAR_5, VAR_3))
            || !FUNC_12("(LShift | 1) >> 1", VAR_2, VAR_5))
        goto err;

    VAR_8 = 1;
 err:
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);

    return VAR_8;
}
