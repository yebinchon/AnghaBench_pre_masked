
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int HMAC_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,unsigned char*,int *) ;
 int FUNC_6 (int *,char const*,size_t,int const*,int *) ;
 int FUNC_7 (int *,unsigned char const*,int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_9(const char *VAR_9, size_t VAR_10,
                         const unsigned char *VAR_11, int VAR_12, uint64_t VAR_13,
                         const EVP_MD *VAR_14, unsigned char *VAR_15,
                         size_t VAR_16, int VAR_17)
{
    int VAR_18 = 0;
    unsigned char VAR_19[VAR_1], *VAR_20, VAR_21[4];
    int VAR_22, VAR_23, VAR_24, VAR_25;
    uint64_t VAR_26;
    unsigned long VAR_27 = 1;
    HMAC_CTX *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);

    VAR_25 = FUNC_1(VAR_14);
    if (VAR_25 <= 0)
        return 0;





    if ((VAR_16 / VAR_25) >= VAR_2) {
        FUNC_0(VAR_0, VAR_7);
        return 0;
    }

    if (VAR_17) {
        if ((VAR_16 * 8) < VAR_4) {
            FUNC_0(VAR_0, VAR_7);
            return 0;
        }
        if (VAR_12 < VAR_5) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (VAR_13 < VAR_3) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
    }

    VAR_28 = FUNC_4();
    if (VAR_28 == ((void*)0))
        return 0;
    VAR_20 = VAR_15;
    VAR_24 = VAR_16;
    if (!FUNC_6(VAR_28, VAR_9, VAR_10, VAR_14, ((void*)0)))
        goto err;
    VAR_29 = FUNC_4();
    if (VAR_29 == ((void*)0))
        goto err;
    while (VAR_24) {
        if (VAR_24 > VAR_25)
            VAR_22 = VAR_25;
        else
            VAR_22 = VAR_24;




        VAR_21[0] = (unsigned char)((VAR_27 >> 24) & 0xff);
        VAR_21[1] = (unsigned char)((VAR_27 >> 16) & 0xff);
        VAR_21[2] = (unsigned char)((VAR_27 >> 8) & 0xff);
        VAR_21[3] = (unsigned char)(VAR_27 & 0xff);
        if (!FUNC_2(VAR_29, VAR_28))
            goto err;
        if (!FUNC_7(VAR_29, VAR_11, VAR_12)
                || !FUNC_7(VAR_29, VAR_21, 4)
                || !FUNC_5(VAR_29, VAR_19, ((void*)0)))
            goto err;
        FUNC_8(VAR_20, VAR_19, VAR_22);
        for (VAR_26 = 1; VAR_26 < VAR_13; VAR_26++) {
            if (!FUNC_2(VAR_29, VAR_28))
                goto err;
            if (!FUNC_7(VAR_29, VAR_19, VAR_25)
                    || !FUNC_5(VAR_29, VAR_19, ((void*)0)))
                goto err;
            for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
                VAR_20[VAR_23] ^= VAR_19[VAR_23];
        }
        VAR_24 -= VAR_22;
        VAR_27++;
        VAR_20 += VAR_22;
    }
    VAR_18 = 1;

err:
    FUNC_3(VAR_29);
    FUNC_3(VAR_28);
    return VAR_18;
}
