
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* err; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5(EVP_TEST *VAR_0, EVP_PKEY_CTX *VAR_1,
                              const char *VAR_2)
{
    int VAR_3;
    char *VAR_4, *VAR_5;

    if (!FUNC_3(VAR_5 = FUNC_2(VAR_2)))
        return 0;
    VAR_4 = FUNC_4(VAR_5, ':');
    if (VAR_4 != ((void*)0))
        *VAR_4++ = '\0';
    VAR_3 = FUNC_0(VAR_1, VAR_5, VAR_4);
    if (VAR_3 == -2)
        VAR_0->err = "PKEY_CTRL_INVALID";
    else if (VAR_3 <= 0)
        VAR_0->err = "PKEY_CTRL_ERROR";
    else
        VAR_3 = 1;
    FUNC_1(VAR_5);
    return VAR_3 > 0;
}
