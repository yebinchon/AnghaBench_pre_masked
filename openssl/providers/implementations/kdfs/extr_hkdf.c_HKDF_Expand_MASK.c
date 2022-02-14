
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prev ;
typedef int HMAC_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int *) ;
 int FUNC_4 (int *,unsigned char const*,size_t,int const*,int *) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_8(const EVP_MD *VAR_1,
                       const unsigned char *VAR_2, size_t VAR_3,
                       const unsigned char *VAR_4, size_t VAR_5,
                       unsigned char *VAR_6, size_t VAR_7)
{
    HMAC_CTX *VAR_8;
    int VAR_9 = 0, VAR_10;
    unsigned int VAR_11;
    unsigned char VAR_12[VAR_0];
    size_t VAR_13 = 0, VAR_14, VAR_15;

    VAR_10 = FUNC_0(VAR_1);
    if (VAR_10 <= 0)
        return 0;
    VAR_14 = (size_t)VAR_10;


    VAR_15 = VAR_7 / VAR_14;
    if (VAR_7 % VAR_14)
        VAR_15++;

    if (VAR_15 > 255 || VAR_6 == ((void*)0))
        return 0;

    if ((VAR_8 = FUNC_2()) == ((void*)0))
        return 0;

    if (!FUNC_4(VAR_8, VAR_2, VAR_3, VAR_1, ((void*)0)))
        goto err;

    for (VAR_11 = 1; VAR_11 <= VAR_15; VAR_11++) {
        size_t VAR_16;
        const unsigned char VAR_17 = VAR_11;


        if (VAR_11 > 1) {
            if (!FUNC_4(VAR_8, ((void*)0), 0, ((void*)0), ((void*)0)))
                goto err;

            if (!FUNC_5(VAR_8, VAR_12, VAR_14))
                goto err;
        }

        if (!FUNC_5(VAR_8, VAR_4, VAR_5))
            goto err;

        if (!FUNC_5(VAR_8, &VAR_17, 1))
            goto err;

        if (!FUNC_3(VAR_8, VAR_12, ((void*)0)))
            goto err;

        VAR_16 = (VAR_13 + VAR_14 > VAR_7) ?
                       VAR_7 - VAR_13 :
                       VAR_14;

        FUNC_7(VAR_6 + VAR_13, VAR_12, VAR_16);

        VAR_13 += VAR_16;
    }
    VAR_9 = 1;

 err:
    FUNC_6(VAR_12, sizeof(VAR_12));
    FUNC_1(VAR_8);
    return VAR_9;
}
