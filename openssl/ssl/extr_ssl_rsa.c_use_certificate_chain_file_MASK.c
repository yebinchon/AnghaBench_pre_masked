
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pem_password_cb ;
typedef int X509 ;
struct TYPE_12__ {void* default_passwd_callback_userdata; int * default_passwd_callback; } ;
struct TYPE_11__ {void* default_passwd_callback_userdata; int * default_passwd_callback; } ;
typedef TYPE_1__ SSL_CTX ;
typedef TYPE_2__ SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 unsigned long FUNC_8 () ;
 scalar_t__ VAR_4 ;
 int * FUNC_9 (int *,int *,int *,void*) ;
 int * FUNC_10 (int *,int *,int *,void*) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int VAR_5 ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(SSL_CTX *VAR_6, SSL *VAR_7, const char *VAR_8)
{
    BIO *VAR_9;
    int VAR_10 = 0;
    X509 *VAR_11 = ((void*)0);
    pem_password_cb *VAR_12;
    void *VAR_13;

    FUNC_6();


    if (VAR_6 != ((void*)0)) {
        VAR_12 = VAR_6->default_passwd_callback;
        VAR_13 = VAR_6->default_passwd_callback_userdata;
    } else {
        VAR_12 = VAR_7->default_passwd_callback;
        VAR_13 = VAR_7->default_passwd_callback_userdata;
    }

    VAR_9 = FUNC_1(FUNC_3());
    if (VAR_9 == ((void*)0)) {
        FUNC_17(VAR_5, VAR_1);
        goto end;
    }

    if (FUNC_2(VAR_9, VAR_8) <= 0) {
        FUNC_17(VAR_5, VAR_3);
        goto end;
    }

    VAR_11 = FUNC_10(VAR_9, ((void*)0), VAR_12,
                              VAR_13);
    if (VAR_11 == ((void*)0)) {
        FUNC_17(VAR_5, VAR_2);
        goto end;
    }

    if (VAR_6)
        VAR_10 = FUNC_13(VAR_6, VAR_11);
    else
        VAR_10 = FUNC_16(VAR_7, VAR_11);

    if (FUNC_7() != 0)
        VAR_10 = 0;

    if (VAR_10) {




        X509 *VAR_14;
        int VAR_15;
        unsigned long VAR_16;

        if (VAR_6)
            VAR_15 = FUNC_12(VAR_6);
        else
            VAR_15 = FUNC_15(VAR_7);

        if (VAR_15 == 0) {
            VAR_10 = 0;
            goto end;
        }

        while ((VAR_14 = FUNC_9(VAR_9, ((void*)0), VAR_12,
                                       VAR_13))
               != ((void*)0)) {
            if (VAR_6)
                VAR_15 = FUNC_11(VAR_6, VAR_14);
            else
                VAR_15 = FUNC_14(VAR_7, VAR_14);





            if (!VAR_15) {
                FUNC_18(VAR_14);
                VAR_10 = 0;
                goto end;
            }
        }

        VAR_16 = FUNC_8();
        if (FUNC_4(VAR_16) == VAR_0
            && FUNC_5(VAR_16) == VAR_4)
            FUNC_6();
        else
            VAR_10 = 0;
    }

 end:
    FUNC_18(VAR_11);
    FUNC_0(VAR_9);
    return VAR_10;
}
