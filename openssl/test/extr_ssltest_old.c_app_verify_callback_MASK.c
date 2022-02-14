
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct app_verify_arg {char* string; scalar_t__ app_verify; } ;
typedef int X509_STORE_CTX ;
typedef int X509 ;


 char* FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(X509_STORE_CTX *VAR_0, void *VAR_1)
{
    int VAR_2 = 1;
    struct app_verify_arg *VAR_3 = VAR_1;

    if (VAR_3->app_verify) {
        char *VAR_4 = ((void*)0), VAR_5[256];
        X509 *VAR_6 = FUNC_1(VAR_0);

        FUNC_5("In app_verify_callback, allowing cert. ");
        FUNC_5("Arg is: %s\n", VAR_3->string);
        FUNC_5("Finished printing do we have a context? 0x%p a cert? 0x%p\n",
                (void *)VAR_0, (void *)VAR_6);
        if (VAR_6)
            VAR_4 = FUNC_0(FUNC_3(VAR_6), VAR_5, 256);
        if (VAR_4 != ((void*)0)) {
            FUNC_5("cert depth=%d %s\n",
                    FUNC_2(VAR_0), VAR_5);
        }
        return 1;
    }

    VAR_2 = FUNC_4(VAR_0);

    return VAR_2;
}
