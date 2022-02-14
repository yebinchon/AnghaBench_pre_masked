
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptext_ex ;
typedef int RSA ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_2 (int,unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (unsigned char*,int,unsigned char*,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int **,unsigned char*,int) ;

__attribute__((used)) static int FUNC_9(int VAR_1)
{
    int VAR_2 = 0;
    RSA *VAR_3;
    unsigned char VAR_4[256];
    unsigned char VAR_5[256];
    static unsigned char VAR_6[] = "\x54\x85\x9b\x34\x2c\x49\xea\x2a";
    unsigned char VAR_7[256];
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10;
    int VAR_11;

    VAR_8 = sizeof(VAR_6) - 1;
    VAR_9 = FUNC_8(&VAR_3, VAR_7, VAR_1);

    VAR_10 = FUNC_2(VAR_8, VAR_6, VAR_5, VAR_3,
                             VAR_0);
    if (VAR_10 == -1 && FUNC_7()) {
        FUNC_3("Skipping: No OAEP support");
        VAR_2 = 1;
        goto err;
    }
    if (!FUNC_4(VAR_10, VAR_9))
        goto err;

    VAR_10 = FUNC_1(VAR_10, VAR_5, VAR_4, VAR_3,
                              VAR_0);
    if (!FUNC_6(VAR_4, VAR_10, VAR_6, VAR_8))
        goto err;


    VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_4, VAR_3,
                              VAR_0);
    if (!FUNC_6(VAR_4, VAR_10, VAR_6, VAR_8))
        goto err;


    for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
        VAR_5[VAR_11] ^= 1;
        VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_4, VAR_3,
                                      VAR_0);
        if (!FUNC_5(VAR_10, 0))
            goto err;
        VAR_5[VAR_11] ^= 1;
    }


    for (VAR_11 = -1; VAR_11 < VAR_9; ++VAR_11) {
        VAR_10 = FUNC_1(VAR_11, VAR_5, VAR_4, VAR_3,
                                  VAR_0);
        if (!FUNC_5(VAR_10, 0))
            goto err;
    }

    VAR_2 = 1;
err:
    FUNC_0(VAR_3);
    return VAR_2;
}
