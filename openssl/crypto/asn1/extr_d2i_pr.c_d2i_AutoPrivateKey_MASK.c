
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS8_PRIV_KEY_INFO ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned char const**,long) ;
 int * FUNC_5 (int *,unsigned char const**,long) ;
 int * FUNC_6 (int,int **,unsigned char const**,long) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;

EVP_PKEY *FUNC_9(EVP_PKEY **VAR_8, const unsigned char **VAR_9,
                             long VAR_10)
{
    FUNC_3(VAR_2) *VAR_7;
    const unsigned char *VAR_11;
    int VAR_12;
    VAR_11 = *VAR_9;





    VAR_7 = FUNC_4(((void*)0), &VAR_11, VAR_10);
    VAR_11 = *VAR_9;




    if (FUNC_7(VAR_7) == 6)
        VAR_12 = VAR_4;
    else if (FUNC_7(VAR_7) == 4)
        VAR_12 = VAR_5;
    else if (FUNC_7(VAR_7) == 3) {

        PKCS8_PRIV_KEY_INFO *VAR_13 = FUNC_5(((void*)0), &VAR_11, VAR_10);
        EVP_PKEY *VAR_14;

        FUNC_8(VAR_7, VAR_3);
        if (VAR_13 == ((void*)0)) {
            FUNC_0(VAR_0,
                    VAR_1);
            return ((void*)0);
        }
        VAR_14 = FUNC_1(VAR_13);
        FUNC_2(VAR_13);
        if (VAR_14 == ((void*)0))
            return ((void*)0);
        *VAR_9 = VAR_11;
        if (VAR_8) {
            *VAR_8 = VAR_14;
        }
        return VAR_14;
    } else
        VAR_12 = VAR_6;
    FUNC_8(VAR_7, VAR_3);
    return FUNC_6(VAR_12, VAR_8, VAR_9, VAR_10);
}
