
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,unsigned char*,int*) ;
 int FUNC_7 (int *,unsigned char*,int*,unsigned char*,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (unsigned char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *,int const*,int *,unsigned char const*,size_t) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_12 (unsigned char*,size_t,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_13(const EVP_CIPHER *VAR_7, ENGINE *VAR_8,
                   const unsigned char *VAR_9, size_t VAR_10,
                   const unsigned char *VAR_11, size_t VAR_12,
                   unsigned char *VAR_13, size_t VAR_14)
{
    EVP_CIPHER_CTX *VAR_15 = ((void*)0);
    unsigned char VAR_16[VAR_1 * 2];
    unsigned char *VAR_17, *VAR_18;
    size_t VAR_19;
    size_t VAR_20;
    size_t VAR_21;
    int VAR_22 = 0;
    int VAR_23;

    if (VAR_10 != VAR_14) {


        if (FUNC_5(VAR_7) == VAR_2 &&
            VAR_10 == 24 && VAR_14 == 21) {
                VAR_22 = 1;
        } else {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
    }

    VAR_15 = FUNC_3();
    if (VAR_15 == ((void*)0))
        return 0;

    VAR_23 = FUNC_9(VAR_15, VAR_7, VAR_8, VAR_9, VAR_10);
    if (!VAR_23)
        goto out;


    VAR_19 = FUNC_1(VAR_15);

    if (VAR_12 > VAR_19) {
        FUNC_0(VAR_0, VAR_4);
        VAR_23 = 0;
        goto out;
    }

    FUNC_12(VAR_16, VAR_19, VAR_11, VAR_12);
    VAR_17 = VAR_16;
    VAR_18 = VAR_16 + VAR_1;

    for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21 += VAR_20) {
        int VAR_24;

        VAR_23 = FUNC_7(VAR_15, VAR_18, &VAR_24,
                                VAR_17, VAR_19);
        if (!VAR_23)
            goto out;
        VAR_20 = VAR_24;
        VAR_23 = FUNC_6(VAR_15, VAR_18, &VAR_24);
        if (!VAR_23)
            goto out;
        if (VAR_24 != 0) {
            FUNC_0(VAR_0, VAR_5);
            VAR_23 = 0;
            goto out;
        }


        if (VAR_20 > VAR_14 - VAR_21)
            VAR_20 = VAR_14 - VAR_21;
        FUNC_11(VAR_13 + VAR_21, VAR_18, VAR_20);

        if (VAR_14 > VAR_21 + VAR_20) {

            VAR_23 = FUNC_4(VAR_15);
            if (!VAR_23)
                goto out;
            VAR_23 = FUNC_9(VAR_15, VAR_7, VAR_8, VAR_9, VAR_10);
            if (!VAR_23)
                goto out;



            VAR_17 = VAR_18;
            if (VAR_18 == VAR_16) {
                VAR_18 += VAR_1;
            } else {
                VAR_18 = VAR_16;
            }
        }
    }


    if (FUNC_5(VAR_7) == VAR_2 && !VAR_22) {
        VAR_23 = FUNC_10(VAR_13);
        if (!VAR_23) {
            FUNC_0(VAR_0, VAR_3);
            goto out;
        }
    }


    VAR_23 = 1;

out:
    FUNC_2(VAR_15);
    FUNC_8(VAR_16, VAR_1 * 2);
    return VAR_23;
}
