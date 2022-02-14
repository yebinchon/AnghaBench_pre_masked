
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out_buf ;
typedef int buf_perm ;
typedef int buf ;
typedef int ascii_salt ;
typedef int ascii_magic ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*,char*,int) ;
 unsigned char* VAR_1 ;
 int FUNC_11 (int) ;
 void** VAR_2 ;
 int FUNC_12 (char*,char*,size_t) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static char *FUNC_14(const char *VAR_3, const char *VAR_4, const char *VAR_5)
{

    static char VAR_6[6 + 9 + 24 + 2];
    unsigned char VAR_7[VAR_0];
    char VAR_8[5];
    char VAR_9[9];
    char *VAR_10 = ((void*)0);
    char *VAR_11;
    int VAR_12;
    unsigned int VAR_13;
    EVP_MD_CTX *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    size_t VAR_16, VAR_17, VAR_18;

    VAR_16 = FUNC_13(VAR_3);

    VAR_6[0] = 0;
    VAR_18 = FUNC_13(VAR_4);
    FUNC_9(VAR_8, VAR_4, sizeof(VAR_8));






    FUNC_9(VAR_9, VAR_5, sizeof(VAR_9));
    VAR_17 = FUNC_13(VAR_9);
    if (VAR_18 > 0) {
        FUNC_8(VAR_6, VAR_1, sizeof(VAR_6));

        if (VAR_18 > 4)
            goto err;

        FUNC_8(VAR_6, VAR_8, sizeof(VAR_6));
        FUNC_8(VAR_6, VAR_1, sizeof(VAR_6));
    }

    FUNC_8(VAR_6, VAR_9, sizeof(VAR_6));

    if (FUNC_13(VAR_6) > 6 + 8)
        goto err;

    VAR_11 = VAR_6;
    if (VAR_18 > 0)
        VAR_11 += 2 + VAR_18;

    if (VAR_17 > 8)
        goto err;

    VAR_14 = FUNC_4();
    if (VAR_14 == ((void*)0)
        || !FUNC_1(VAR_14, FUNC_5(), ((void*)0))
        || !FUNC_2(VAR_14, VAR_3, VAR_16))
        goto err;

    if (VAR_18 > 0)
        if (!FUNC_2(VAR_14, VAR_1, 1)
            || !FUNC_2(VAR_14, VAR_8, VAR_18)
            || !FUNC_2(VAR_14, VAR_1, 1))
          goto err;

    if (!FUNC_2(VAR_14, VAR_9, VAR_17))
        goto err;

    VAR_15 = FUNC_4();
    if (VAR_15 == ((void*)0)
        || !FUNC_1(VAR_15, FUNC_5(), ((void*)0))
        || !FUNC_2(VAR_15, VAR_3, VAR_16)
        || !FUNC_2(VAR_15, VAR_9, VAR_17)
        || !FUNC_2(VAR_15, VAR_3, VAR_16)
        || !FUNC_0(VAR_15, VAR_7, ((void*)0)))
        goto err;

    for (VAR_13 = VAR_16; VAR_13 > sizeof(VAR_7); VAR_13 -= sizeof(VAR_7)) {
        if (!FUNC_2(VAR_14, VAR_7, sizeof(VAR_7)))
            goto err;
    }
    if (!FUNC_2(VAR_14, VAR_7, VAR_13))
        goto err;

    VAR_12 = VAR_16;
    while (VAR_12) {
        if (!FUNC_2(VAR_14, (VAR_12 & 1) ? "\0" : VAR_3, 1))
            goto err;
        VAR_12 >>= 1;
    }
    if (!FUNC_0(VAR_14, VAR_7, ((void*)0)))
        return ((void*)0);

    for (VAR_13 = 0; VAR_13 < 1000; VAR_13++) {
        if (!FUNC_1(VAR_15, FUNC_5(), ((void*)0)))
            goto err;
        if (!FUNC_2(VAR_15,
                              (VAR_13 & 1) ? (unsigned const char *)VAR_3 : VAR_7,
                              (VAR_13 & 1) ? VAR_16 : sizeof(VAR_7)))
            goto err;
        if (VAR_13 % 3) {
            if (!FUNC_2(VAR_15, VAR_9, VAR_17))
                goto err;
        }
        if (VAR_13 % 7) {
            if (!FUNC_2(VAR_15, VAR_3, VAR_16))
                goto err;
        }
        if (!FUNC_2(VAR_15,
                              (VAR_13 & 1) ? VAR_7 : (unsigned const char *)VAR_3,
                              (VAR_13 & 1) ? sizeof(VAR_7) : VAR_16))
                goto err;
        if (!FUNC_0(VAR_15, VAR_7, ((void*)0)))
                goto err;
    }
    FUNC_3(VAR_15);
    FUNC_3(VAR_14);
    VAR_15 = ((void*)0);
    VAR_14 = ((void*)0);

    {

        unsigned char VAR_19[sizeof(VAR_7)];
        int VAR_20, VAR_21;
        char *VAR_22;


        for (VAR_20 = 0, VAR_21 = 0; VAR_20 < 14;
             VAR_20++, VAR_21 = (VAR_21 + 6) % 17)
            VAR_19[VAR_20] = VAR_7[VAR_21];
        VAR_19[14] = VAR_7[5];
        VAR_19[15] = VAR_7[11];


        FUNC_11(16 == sizeof(VAR_19));


        VAR_22 = VAR_11 + VAR_17;
        FUNC_11(VAR_22 == VAR_6 + FUNC_13(VAR_6));

        *VAR_22++ = VAR_1[0];

        for (VAR_13 = 0; VAR_13 < 15; VAR_13 += 3) {
            *VAR_22++ = VAR_2[VAR_19[VAR_13 + 2] & 0x3f];
            *VAR_22++ = VAR_2[((VAR_19[VAR_13 + 1] & 0xf) << 2) |
                                  (VAR_19[VAR_13 + 2] >> 6)];
            *VAR_22++ = VAR_2[((VAR_19[VAR_13] & 3) << 4) |
                                  (VAR_19[VAR_13 + 1] >> 4)];
            *VAR_22++ = VAR_2[VAR_19[VAR_13] >> 2];
        }
        FUNC_11(VAR_13 == 15);
        *VAR_22++ = VAR_2[VAR_19[VAR_13] & 0x3f];
        *VAR_22++ = VAR_2[VAR_19[VAR_13] >> 6];
        *VAR_22 = 0;
        FUNC_11(FUNC_13(VAR_6) < sizeof(VAR_6));



    }

    return VAR_6;

 err:
    FUNC_6(VAR_10);
    FUNC_3(VAR_15);
    FUNC_3(VAR_14);
    return ((void*)0);
}
