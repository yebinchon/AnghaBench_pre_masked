
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_RESP_CTX ;
typedef int EVP_PKEY ;
typedef int CONF ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,char const*,int ) ;
 int * FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*,int ) ;

int FUNC_5(CONF *VAR_1, const char *VAR_2,
                           const char *VAR_3, const char *VAR_4,
                           TS_RESP_CTX *VAR_5)
{
    int VAR_6 = 0;
    EVP_PKEY *VAR_7 = ((void*)0);
    if (!VAR_3)
        VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
    if (!VAR_3) {
        FUNC_4(VAR_2, VAR_0);
        goto err;
    }
    if ((VAR_7 = FUNC_2(VAR_3, VAR_4)) == ((void*)0))
        goto err;
    if (!FUNC_3(VAR_5, VAR_7))
        goto err;

    VAR_6 = 1;
 err:
    FUNC_0(VAR_7);
    return VAR_6;
}
