
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int EVP_MD ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const*) ;
 int * FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned char*,size_t) ;
 unsigned char* FUNC_3 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,unsigned char const*,unsigned char*,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (unsigned char**,int*,int,unsigned char const*,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_9 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_10(int VAR_11, const unsigned char *VAR_12, unsigned int VAR_13,
                   unsigned char *VAR_14, size_t *VAR_15,
                   const unsigned char *VAR_16, size_t VAR_17, RSA *VAR_18)
{
    int VAR_19, VAR_20 = 0, VAR_21 = 0;
    unsigned char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);

    if (VAR_17 != (size_t)FUNC_5(VAR_18)) {
        FUNC_6(VAR_3, VAR_9);
        return 0;
    }


    VAR_22 = FUNC_3(VAR_17);
    if (VAR_22 == ((void*)0)) {
        FUNC_6(VAR_3, VAR_0);
        goto err;
    }

    VAR_19 = FUNC_4((int)VAR_17, VAR_16, VAR_22, VAR_18,
                                     VAR_4);
    if (VAR_19 <= 0)
        goto err;

    if (VAR_11 == VAR_1) {





        if (VAR_19 != VAR_10) {
            FUNC_6(VAR_3, VAR_5);
            goto err;
        }

        if (VAR_14 != ((void*)0)) {
            FUNC_9(VAR_14, VAR_22, VAR_10);
            *VAR_15 = VAR_10;
        } else {
            if (VAR_13 != VAR_10) {
                FUNC_6(VAR_3, VAR_7);
                goto err;
            }

            if (FUNC_8(VAR_22, VAR_12, VAR_10) != 0) {
                FUNC_6(VAR_3, VAR_5);
                goto err;
            }
        }
    } else if (VAR_11 == VAR_2 && VAR_19 == 2 + 16
               && VAR_22[0] == 0x04 && VAR_22[1] == 0x10) {




        if (VAR_14 != ((void*)0)) {
            FUNC_9(VAR_14, VAR_22 + 2, 16);
            *VAR_15 = 16;
        } else {
            if (VAR_13 != 16) {
                FUNC_6(VAR_3, VAR_7);
                goto err;
            }

            if (FUNC_8(VAR_12, VAR_22 + 2, 16) != 0) {
                FUNC_6(VAR_3, VAR_5);
                goto err;
            }
        }
    } else {





        if (VAR_14 != ((void*)0)) {
            const EVP_MD *VAR_24 = FUNC_1(VAR_11);
            if (VAR_24 == ((void*)0)) {
                FUNC_6(VAR_3, VAR_8);
                goto err;
            }

            VAR_13 = FUNC_0(VAR_24);
            if (VAR_13 > (size_t)VAR_19) {
                FUNC_6(VAR_3, VAR_6);
                goto err;
            }
            VAR_12 = VAR_22 + VAR_19 - VAR_13;
        }


        if (!FUNC_7(&VAR_23, &VAR_21, VAR_11, VAR_12, VAR_13))
            goto err;

        if (VAR_21 != VAR_19
            || FUNC_8(VAR_23, VAR_22, VAR_21) != 0) {
            FUNC_6(VAR_3, VAR_5);
            goto err;
        }


        if (VAR_14 != ((void*)0)) {
            FUNC_9(VAR_14, VAR_12, VAR_13);
            *VAR_15 = VAR_13;
        }
    }

    VAR_20 = 1;

err:
    FUNC_2(VAR_23, (size_t)VAR_21);
    FUNC_2(VAR_22, VAR_17);
    return VAR_20;
}
