
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisContext ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,char const*,int ) ;
 int FUNC_7 (int *,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ,char*) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int *,int *) ;
 int VAR_6 ;

int FUNC_16(redisContext *VAR_7, const char *VAR_8,
                          const char *VAR_9, const char *VAR_10, const char *VAR_11) {

    SSL_CTX *VAR_12 = ((void*)0);
    SSL *VAR_13 = ((void*)0);


    static int VAR_14 = 0;
    if (!VAR_14) {
        VAR_14 = 1;
        FUNC_9();



    }

    VAR_12 = FUNC_2(FUNC_12());
    if (!VAR_12) {
        FUNC_13(VAR_7, VAR_1, "Failed to create SSL_CTX");
        goto error;
    }




    FUNC_4(VAR_12, VAR_3 | VAR_4);
    FUNC_5(VAR_12, VAR_5, ((void*)0));
    if ((VAR_9 != ((void*)0) && VAR_10 == ((void*)0)) || (VAR_10 != ((void*)0) && VAR_9 == ((void*)0))) {
        FUNC_13(VAR_7, VAR_1, "certpath and keypath must be specified together");
        goto error;
    }

    if (VAR_8) {
        if (!FUNC_1(VAR_12, VAR_8, ((void*)0))) {
            FUNC_13(VAR_7, VAR_1, "Invalid CA certificate");
            goto error;
        }
    }
    if (VAR_9) {
        if (!FUNC_7(VAR_12, VAR_9)) {
            FUNC_13(VAR_7, VAR_1, "Invalid client certificate");
            goto error;
        }
        if (!FUNC_6(VAR_12, VAR_10, VAR_2)) {
            FUNC_13(VAR_7, VAR_1, "Invalid client key");
            goto error;
        }
    }

    VAR_13 = FUNC_10(VAR_12);
    if (!VAR_13) {
        FUNC_13(VAR_7, VAR_1, "Couldn't create new SSL instance");
        goto error;
    }
    if (VAR_11) {
        if (!FUNC_11(VAR_13, VAR_11)) {
            FUNC_13(VAR_7, VAR_1, "Couldn't set server name indication");
            goto error;
        }
    }

    return FUNC_15(VAR_7, VAR_12, VAR_13);

error:
    if (VAR_13) FUNC_8(VAR_13);
    if (VAR_12) FUNC_0(VAR_12);
    return VAR_0;
}
