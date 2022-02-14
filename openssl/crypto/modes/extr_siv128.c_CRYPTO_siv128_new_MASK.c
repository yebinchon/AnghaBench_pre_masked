
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIV128_CONTEXT ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *,unsigned char const*,int,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

SIV128_CONTEXT *FUNC_3(const unsigned char *VAR_0, int VAR_1, EVP_CIPHER* VAR_2, EVP_CIPHER* VAR_3)
{
    SIV128_CONTEXT *VAR_4;
    int VAR_5;

    if ((VAR_4 = FUNC_2(sizeof(*VAR_4))) != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
        if (VAR_5)
            return VAR_4;
        FUNC_1(VAR_4);
    }

    return ((void*)0);
}
