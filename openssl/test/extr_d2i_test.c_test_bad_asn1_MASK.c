
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;
typedef int ASN1_VALUE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,unsigned char const**,int,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned char**,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_15 (unsigned char*,unsigned char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(void)
{
    BIO *VAR_9 = ((void*)0);
    ASN1_VALUE *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    unsigned char VAR_12[2048];
    const unsigned char *VAR_13 = VAR_12;
    unsigned char *VAR_14 = ((void*)0);
    int VAR_15;
    int VAR_16;

    VAR_9 = FUNC_5(VAR_8, "r");
    if (!FUNC_13(VAR_9))
        return 0;

    if (VAR_6 == VAR_0) {
        if (FUNC_14(FUNC_1(VAR_7, VAR_9, ((void*)0))))
            VAR_11 = 1;
        goto err;
    }






    VAR_16 = FUNC_6(VAR_9, VAR_12, sizeof(VAR_12));
    if (!FUNC_12(VAR_16, 0))
        goto err;

    VAR_10 = FUNC_0(((void*)0), &VAR_13, VAR_16, VAR_7);
    if (VAR_10 == ((void*)0)) {
        if (FUNC_11(VAR_6, VAR_2))
            VAR_11 = 1;
        goto err;
    }

    VAR_15 = FUNC_3(VAR_10, &VAR_14, VAR_7);

    if (VAR_14 == ((void*)0) || VAR_15 < 0) {
        if (FUNC_11(VAR_6, VAR_3))
            VAR_11 = 1;
        goto err;
    }

    if (VAR_15 != VAR_16 || FUNC_15(VAR_14, VAR_12, VAR_15) != 0) {
        if (FUNC_11(VAR_6, VAR_1))
            VAR_11 = 1;
        goto err;
    }

    if (FUNC_11(VAR_6, VAR_4))
        VAR_11 = 1;

 err:

    if (VAR_11 == 1
        && !FUNC_10(FUNC_7(FUNC_8()) == VAR_5))
        VAR_11 = 0;
    FUNC_4(VAR_9);
    FUNC_9(VAR_14);
    FUNC_2(VAR_10, VAR_7);
    return VAR_11;
}
