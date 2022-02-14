
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ kbkdf_mode ;
typedef int EVP_MAC_CTX ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int *,size_t) ;
 int FUNC_3 (int *,unsigned char const*,int) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_7(EVP_MAC_CTX *VAR_1, kbkdf_mode VAR_2, unsigned char *VAR_3,
                  size_t VAR_4, unsigned char *VAR_5, size_t VAR_6,
                  unsigned char *VAR_7, size_t VAR_8,
                  unsigned char *VAR_9, size_t VAR_10, uint32_t VAR_11, unsigned char *VAR_12,
                  size_t VAR_13)
{
    int VAR_14 = 0;
    EVP_MAC_CTX *VAR_15 = ((void*)0);
    size_t VAR_16 = 0, VAR_17, VAR_18 = VAR_4;
    const unsigned char VAR_19 = 0;
    uint32_t VAR_20, VAR_21;


    if (VAR_4 > 0)
        FUNC_6(VAR_9, VAR_3, VAR_4);

    for (VAR_20 = 1; VAR_16 < VAR_13; VAR_20++) {
        VAR_21 = FUNC_5(VAR_20);

        VAR_15 = FUNC_0(VAR_1);
        if (VAR_15 == ((void*)0))
            goto done;


        if (VAR_2 == VAR_0 && !FUNC_3(VAR_15, VAR_9, VAR_18))
            goto done;

        if (!FUNC_3(VAR_15, (unsigned char *)&VAR_21, 4)
            || !FUNC_3(VAR_15, VAR_5, VAR_6)
            || !FUNC_3(VAR_15, &VAR_19, 1)
            || !FUNC_3(VAR_15, VAR_7, VAR_8)
            || !FUNC_3(VAR_15, (unsigned char *)&VAR_11, 4)
            || !FUNC_2(VAR_15, VAR_9, ((void*)0), VAR_10))
            goto done;

        VAR_17 = VAR_13 - VAR_16;
        FUNC_6(VAR_12 + VAR_16, VAR_9, FUNC_4(VAR_17, VAR_10));
        VAR_16 += VAR_10;

        VAR_18 = VAR_10;
        FUNC_1(VAR_15);
        VAR_15 = ((void*)0);
    }

    VAR_14 = 1;
done:
    FUNC_1(VAR_15);
    return VAR_14;
}
