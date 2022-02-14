
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_CIPHER_CTX ;
typedef int PROV_AES_XTS_CTX ;
typedef int * OSSL_xts_stream_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int *) ;
 int * VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_21,
                                             const unsigned char *VAR_22,
                                             size_t VAR_23)
{
    PROV_AES_XTS_CTX *VAR_24 = (PROV_AES_XTS_CTX *)VAR_21;
    OSSL_xts_stream_fn VAR_25 = ((void*)0);
    OSSL_xts_stream_fn VAR_26 = ((void*)0);
    {
        FUNC_0(VAR_3, VAR_2,
                       VAR_1, VAR_0, VAR_25, VAR_26);
    }
    return 1;
}
