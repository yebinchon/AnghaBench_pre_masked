
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iv ;
typedef int EVP_CIPHER_CTX ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

int FUNC_4(EVP_CIPHER_CTX *VAR_1, ASN1_TYPE *VAR_2)
{
    int VAR_3 = 0;
    unsigned int VAR_4;

    if (VAR_2 != ((void*)0)) {
        unsigned char VAR_5[VAR_0];

        VAR_4 = FUNC_1(VAR_1);
        if (!FUNC_3(VAR_4 <= sizeof(VAR_5)))
            return -1;
        VAR_3 = FUNC_0(VAR_2, VAR_5, VAR_4);
        if (VAR_3 != (int)VAR_4)
            return -1;

        if (!FUNC_2(VAR_1, ((void*)0), ((void*)0), ((void*)0), VAR_5, -1))
            return -1;
    }
    return VAR_3;
}
