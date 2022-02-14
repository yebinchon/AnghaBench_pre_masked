
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* err; int skip; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *,char*,char*) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static int FUNC_9(EVP_TEST *VAR_1, EVP_PKEY_CTX *VAR_2,
                          const char *VAR_3)
{
    int VAR_4;
    char *VAR_5, *VAR_6;

    if (!FUNC_7(VAR_6 = FUNC_6(VAR_3)))
        return 0;
    VAR_5 = FUNC_8(VAR_6, ':');
    if (VAR_5 != ((void*)0))
        *VAR_5++ = '\0';
    VAR_4 = FUNC_0(VAR_2, VAR_6, VAR_5);
    if (VAR_4 == -2) {
        VAR_1->err = "PKEY_CTRL_INVALID";
        VAR_4 = 1;
    } else if (VAR_5 != ((void*)0) && VAR_4 <= 0) {

        int VAR_7 = FUNC_4(VAR_5);

        if (VAR_7 == VAR_0)
             VAR_7 = FUNC_3(VAR_5);
        if (VAR_7 != VAR_0
                && FUNC_2(VAR_7) == ((void*)0)
                && FUNC_1(VAR_7) == ((void*)0)) {
            VAR_1->skip = 1;
            VAR_4 = 1;
        } else {
            VAR_1->err = "PKEY_CTRL_ERROR";
            VAR_4 = 1;
        }
    }
    FUNC_5(VAR_6);
    return VAR_4 > 0;
}
