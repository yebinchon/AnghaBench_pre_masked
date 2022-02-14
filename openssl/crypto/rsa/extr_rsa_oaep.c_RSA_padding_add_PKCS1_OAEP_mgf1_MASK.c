
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int seedmask ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (void*,int,unsigned char*,int *,int const*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int) ;
 unsigned char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned char*,int,unsigned char*,int,int const*) ;
 scalar_t__ FUNC_7 (unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_10 (unsigned char*,int ,int) ;

int FUNC_11(unsigned char *VAR_5, int VAR_6,
                                    const unsigned char *VAR_7, int VAR_8,
                                    const unsigned char *VAR_9, int VAR_10,
                                    const EVP_MD *VAR_11, const EVP_MD *VAR_12)
{
    int VAR_13 = 0;
    int VAR_14, VAR_15 = VAR_6 - 1;
    unsigned char *VAR_16, *VAR_17;
    unsigned char *VAR_18 = ((void*)0);
    unsigned char VAR_19[VAR_1];
    int VAR_20, VAR_21 = 0;

    if (VAR_11 == ((void*)0))
        VAR_11 = FUNC_2();
    if (VAR_12 == ((void*)0))
        VAR_12 = VAR_11;

    VAR_20 = FUNC_1(VAR_11);


    if (VAR_8 > VAR_15 - 2 * VAR_20 - 1) {
        FUNC_8(VAR_2,
               VAR_3);
        return 0;
    }

    if (VAR_15 < 2 * VAR_20 + 1) {
        FUNC_8(VAR_2,
               VAR_4);
        return 0;
    }


    VAR_5[0] = 0;
    VAR_17 = VAR_5 + 1;
    VAR_16 = VAR_5 + VAR_20 + 1;


    if (!FUNC_0((void *)VAR_9, VAR_10, VAR_16, ((void*)0), VAR_11, ((void*)0)))
        goto err;

    FUNC_10(VAR_16 + VAR_20, 0, VAR_15 - VAR_8 - 2 * VAR_20 - 1);

    VAR_16[VAR_15 - VAR_8 - VAR_20 - 1] = 0x01;
    FUNC_9(VAR_16 + VAR_15 - VAR_8 - VAR_20, VAR_7, (unsigned int)VAR_8);

    if (FUNC_7(VAR_17, VAR_20) <= 0)
        goto err;

    VAR_21 = VAR_15 - VAR_20;
    VAR_18 = FUNC_5(VAR_21);
    if (VAR_18 == ((void*)0)) {
        FUNC_8(VAR_2, VAR_0);
        goto err;
    }


    if (FUNC_6(VAR_18, VAR_21, VAR_17, VAR_20, VAR_12) < 0)
        goto err;

    for (VAR_14 = 0; VAR_14 < VAR_21; VAR_14++)
        VAR_16[VAR_14] ^= VAR_18[VAR_14];


    if (FUNC_6(VAR_19, VAR_20, VAR_16, VAR_21, VAR_12) < 0)
        goto err;

    for (VAR_14 = 0; VAR_14 < VAR_20; VAR_14++)
        VAR_17[VAR_14] ^= VAR_19[VAR_14];
    VAR_13 = 1;

 err:
    FUNC_3(VAR_19, sizeof(VAR_19));
    FUNC_4(VAR_18, VAR_21);
    return VAR_13;
}
