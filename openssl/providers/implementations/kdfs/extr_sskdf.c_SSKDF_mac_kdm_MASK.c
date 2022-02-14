
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac_buf ;
typedef int c ;
typedef int OSSL_PARAM ;
typedef int EVP_MAC_CTX ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned char*,int *,size_t) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 int FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (unsigned char*,size_t) ;
 int VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,void*,size_t) ;
 size_t VAR_2 ;
 int FUNC_11 (int *,unsigned char const*,size_t,size_t,size_t,unsigned char**) ;
 int FUNC_12 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_13(EVP_MAC_CTX *VAR_3,
                         const unsigned char *VAR_4,
                         size_t VAR_5, size_t VAR_6,
                         const unsigned char *VAR_7, size_t VAR_8,
                         const unsigned char *VAR_9, size_t VAR_10,
                         const unsigned char *VAR_11, size_t VAR_12,
                         unsigned char *VAR_13, size_t VAR_14)
{
    int VAR_15 = 0;
    size_t VAR_16, VAR_17, VAR_18;
    unsigned char VAR_19[4];
    unsigned char VAR_20[VAR_0];
    unsigned char *VAR_21 = VAR_13;
    EVP_MAC_CTX *VAR_22 = ((void*)0);
    unsigned char *VAR_23 = VAR_20, *VAR_24 = ((void*)0);
    OSSL_PARAM VAR_25[2], *VAR_26 = VAR_25;

    if (VAR_10 > VAR_2 || VAR_12 > VAR_2
            || VAR_14 > VAR_2
            || VAR_14 == 0)
        return 0;

    *VAR_26++ = FUNC_10(VAR_1,
                                             (void *)VAR_7, VAR_8);
    *VAR_26 = FUNC_9();

    if (!FUNC_2(VAR_3, VAR_25))
        goto end;

    if (!FUNC_11(VAR_3, VAR_4, VAR_5, VAR_6,
                   VAR_14, &VAR_24))
        goto end;
    if (VAR_24 != ((void*)0))
        VAR_23 = VAR_24;

    if (!FUNC_4(VAR_3))
        goto end;

    VAR_17 = FUNC_5(VAR_3);
    if (VAR_17 <= 0)
        goto end;
    VAR_18 = VAR_14;

    for (VAR_16 = 1;; VAR_16++) {
        VAR_19[0] = (unsigned char)((VAR_16 >> 24) & 0xff);
        VAR_19[1] = (unsigned char)((VAR_16 >> 16) & 0xff);
        VAR_19[2] = (unsigned char)((VAR_16 >> 8) & 0xff);
        VAR_19[3] = (unsigned char)(VAR_16 & 0xff);

        VAR_22 = FUNC_0(VAR_3);
        if (!(VAR_22 != ((void*)0)
                && FUNC_6(VAR_22, VAR_19, sizeof(VAR_19))
                && FUNC_6(VAR_22, VAR_9, VAR_10)
                && FUNC_6(VAR_22, VAR_11, VAR_12)))
            goto end;
        if (VAR_18 >= VAR_17) {
            if (!FUNC_3(VAR_22, VAR_21, ((void*)0), VAR_18))
                goto end;
            VAR_21 += VAR_17;
            VAR_18 -= VAR_17;
            if (VAR_18 == 0)
                break;
        } else {
            if (!FUNC_3(VAR_22, VAR_23, ((void*)0), VAR_18))
                goto end;
            FUNC_12(VAR_21, VAR_23, VAR_18);
            break;
        }
        FUNC_1(VAR_22);
        VAR_22 = ((void*)0);
    }
    VAR_15 = 1;
end:
    if (VAR_24 != ((void*)0))
        FUNC_8(VAR_24, VAR_6);
    else
        FUNC_7(VAR_20, sizeof(VAR_20));

    FUNC_1(VAR_22);
    return VAR_15;
}
