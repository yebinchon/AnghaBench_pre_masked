
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef scalar_t__ BN_ULONG ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int *,int *) ;
 int * FUNC_15 (int *,char*) ;

__attribute__((used)) static int FUNC_16(STANZA *VAR_0)
{
    BIGNUM *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    BN_ULONG VAR_5;
    int VAR_6 = 0;

    if (!FUNC_12(VAR_1 = FUNC_15(VAR_0, "A"))
            || !FUNC_12(VAR_2 = FUNC_15(VAR_0, "B"))
            || !FUNC_12(VAR_3 = FUNC_15(VAR_0, "Sum"))
            || !FUNC_12(VAR_4 = FUNC_7()))
        goto err;

    if (!FUNC_13(FUNC_0(VAR_4, VAR_1, VAR_2))
            || !FUNC_14("A + B", VAR_3, VAR_4)
            || !FUNC_13(FUNC_8(VAR_4, VAR_3, VAR_1))
            || !FUNC_14("Sum - A", VAR_2, VAR_4)
            || !FUNC_13(FUNC_8(VAR_4, VAR_3, VAR_2))
            || !FUNC_14("Sum - B", VAR_1, VAR_4))
        goto err;






    if (!FUNC_13(FUNC_3(VAR_4, VAR_1))
            || !FUNC_13(FUNC_0(VAR_4, VAR_4, VAR_2))
            || !FUNC_14("A + B (r is a)", VAR_3, VAR_4)
            || !FUNC_13(FUNC_3(VAR_4, VAR_2))
            || !FUNC_13(FUNC_0(VAR_4, VAR_1, VAR_4))
            || !FUNC_14("A + B (r is b)", VAR_3, VAR_4)
            || !FUNC_13(FUNC_3(VAR_4, VAR_3))
            || !FUNC_13(FUNC_8(VAR_4, VAR_4, VAR_1))
            || !FUNC_14("Sum - A (r is a)", VAR_2, VAR_4)
            || !FUNC_13(FUNC_3(VAR_4, VAR_1))
            || !FUNC_13(FUNC_8(VAR_4, VAR_3, VAR_4))
            || !FUNC_14("Sum - A (r is b)", VAR_2, VAR_4)
            || !FUNC_13(FUNC_3(VAR_4, VAR_3))
            || !FUNC_13(FUNC_8(VAR_4, VAR_4, VAR_2))
            || !FUNC_14("Sum - B (r is a)", VAR_1, VAR_4)
            || !FUNC_13(FUNC_3(VAR_4, VAR_2))
            || !FUNC_13(FUNC_8(VAR_4, VAR_3, VAR_4))
            || !FUNC_14("Sum - B (r is b)", VAR_1, VAR_4))
        goto err;
    if (!FUNC_6(VAR_1) && !FUNC_6(VAR_2) && FUNC_2(VAR_1, VAR_2) >= 0) {
        if (!FUNC_13(FUNC_10(VAR_4, VAR_1, VAR_2))
                || !FUNC_14("A +u B", VAR_3, VAR_4)
                || !FUNC_13(FUNC_11(VAR_4, VAR_3, VAR_1))
                || !FUNC_14("Sum -u A", VAR_2, VAR_4)
                || !FUNC_13(FUNC_11(VAR_4, VAR_3, VAR_2))
                || !FUNC_14("Sum -u B", VAR_1, VAR_4))
            goto err;





        if (!FUNC_13(FUNC_3(VAR_4, VAR_1))
                || !FUNC_13(FUNC_10(VAR_4, VAR_4, VAR_2))
                || !FUNC_14("A +u B (r is a)", VAR_3, VAR_4)
                || !FUNC_13(FUNC_3(VAR_4, VAR_2))
                || !FUNC_13(FUNC_10(VAR_4, VAR_1, VAR_4))
                || !FUNC_14("A +u B (r is b)", VAR_3, VAR_4)
                || !FUNC_13(FUNC_3(VAR_4, VAR_3))
                || !FUNC_13(FUNC_11(VAR_4, VAR_4, VAR_1))
                || !FUNC_14("Sum -u A (r is a)", VAR_2, VAR_4)
                || !FUNC_13(FUNC_3(VAR_4, VAR_1))
                || !FUNC_13(FUNC_11(VAR_4, VAR_3, VAR_4))
                || !FUNC_14("Sum -u A (r is b)", VAR_2, VAR_4)
                || !FUNC_13(FUNC_3(VAR_4, VAR_3))
                || !FUNC_13(FUNC_11(VAR_4, VAR_4, VAR_2))
                || !FUNC_14("Sum -u B (r is a)", VAR_1, VAR_4)
                || !FUNC_13(FUNC_3(VAR_4, VAR_2))
                || !FUNC_13(FUNC_11(VAR_4, VAR_3, VAR_4))
                || !FUNC_14("Sum -u B (r is b)", VAR_1, VAR_4))
            goto err;
    }




    VAR_5 = FUNC_5(VAR_2);
    if (!FUNC_6(VAR_2) && VAR_5 != (BN_ULONG)-1) {
        if (!FUNC_13(FUNC_3(VAR_4, VAR_1))
                || !FUNC_13(FUNC_1(VAR_4, VAR_5))
                || !FUNC_14("A + B (word)", VAR_3, VAR_4)
                || !FUNC_13(FUNC_3(VAR_4, VAR_3))
                || !FUNC_13(FUNC_9(VAR_4, VAR_5))
                || !FUNC_14("Sum - B (word)", VAR_1, VAR_4))
            goto err;
    }
    VAR_6 = 1;

 err:
    FUNC_4(VAR_1);
    FUNC_4(VAR_2);
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
    return VAR_6;
}
