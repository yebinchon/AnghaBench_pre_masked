
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_SIG ;
typedef int X509_ALGOR ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int const*,int,unsigned char*,int) ;
 int * FUNC_4 (int const*,int,unsigned char*,int,int *,int) ;
 int * FUNC_5 (int,int,unsigned char*,int) ;
 int * FUNC_6 (char const*,int,int *,int *) ;
 int FUNC_7 (int *) ;

X509_SIG *FUNC_8(int VAR_3, const EVP_CIPHER *VAR_4,
                        const char *VAR_5, int VAR_6,
                        unsigned char *VAR_7, int VAR_8, int VAR_9,
                        PKCS8_PRIV_KEY_INFO *VAR_10)
{
    X509_SIG *VAR_11 = ((void*)0);
    X509_ALGOR *VAR_12;

    if (VAR_3 == -1)
        VAR_12 = FUNC_3(VAR_4, VAR_9, VAR_7, VAR_8);
    else if (FUNC_1(VAR_1, VAR_3, ((void*)0), ((void*)0), 0))
        VAR_12 = FUNC_4(VAR_4, VAR_9, VAR_7, VAR_8, ((void*)0), VAR_3);
    else {
        FUNC_0();
        VAR_12 = FUNC_5(VAR_3, VAR_9, VAR_7, VAR_8);
    }
    if (VAR_12 == ((void*)0)) {
        FUNC_2(VAR_2, VAR_0);
        return ((void*)0);
    }
    VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_10, VAR_12);
    if (VAR_11 == ((void*)0)) {
        FUNC_7(VAR_12);
        return ((void*)0);
    }

    return VAR_11;
}
