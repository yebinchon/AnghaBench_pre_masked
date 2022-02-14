
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char) ;

int FUNC_4(EVP_PKEY_CTX *VAR_0, const char *VAR_1)
{
    int VAR_2;
    char *VAR_3, *VAR_4 = ((void*)0);
    VAR_3 = FUNC_2(VAR_1);
    if (!VAR_3)
        return -1;
    VAR_4 = FUNC_3(VAR_3, ':');
    if (VAR_4) {
        *VAR_4 = 0;
        VAR_4++;
    }
    VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_4);
    FUNC_1(VAR_3);
    return VAR_2;
}
