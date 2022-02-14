
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* err; int skip; TYPE_1__* data; } ;
struct TYPE_4__ {int * p; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ KDF_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef int EVP_KDF_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (int *,int const*,char*,char*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(EVP_TEST *VAR_1, EVP_KDF_CTX *VAR_2,
                         const char *VAR_3)
{
    KDF_DATA *VAR_4 = VAR_1->data;
    int VAR_5;
    char *VAR_6, *VAR_7;
    const OSSL_PARAM *VAR_8 = FUNC_1(FUNC_0(VAR_2));

    if (!FUNC_10(VAR_7 = FUNC_7(VAR_3)))
        return 0;
    VAR_6 = FUNC_11(VAR_7, ':');
    if (VAR_6 != ((void*)0))
        *VAR_6++ = '\0';

    VAR_5 = FUNC_8(VAR_4->p, VAR_8, VAR_7, VAR_6,
                                       VAR_6 != ((void*)0) ? FUNC_13(VAR_6) : 0);
    *++VAR_4->p = FUNC_9();
    if (!VAR_5) {
        VAR_1->err = "KDF_PARAM_ERROR";
        FUNC_6(VAR_7);
        return 0;
    }
    if (VAR_6 != ((void*)0) && FUNC_12(VAR_7, "digest") == 0) {

        int VAR_9 = FUNC_5(VAR_6);

        if (VAR_9 == VAR_0)
             VAR_9 = FUNC_4(VAR_6);
        if (VAR_9 != VAR_0 && FUNC_3(VAR_9) == ((void*)0))
            VAR_1->skip = 1;
    }
    if (VAR_6 != ((void*)0) && FUNC_12(VAR_7, "cipher") == 0) {

        int VAR_10 = FUNC_5(VAR_6);

        if (VAR_10 == VAR_0)
             VAR_10 = FUNC_4(VAR_6);
        if (VAR_10 != VAR_0 && FUNC_2(VAR_10) == ((void*)0))
            VAR_1->skip = 1;
    }
    FUNC_6(VAR_7);
    return 1;
}
