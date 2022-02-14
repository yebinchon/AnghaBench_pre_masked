
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,unsigned char const*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char const**,unsigned int*) ;
 scalar_t__ FUNC_4 (int *) ;
 unsigned char const* VAR_0 ;
 unsigned char const* VAR_1 ;
 int * VAR_2 ;
 unsigned char const* VAR_3 ;
 unsigned char const* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (unsigned char const*,unsigned char const*,unsigned int) ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_6 (unsigned char const*) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_7, SSL *VAR_8)
{
    const unsigned char *VAR_9, *VAR_10;
    unsigned int VAR_11 = 0, VAR_12 = 0;
    FUNC_3(VAR_7, &VAR_9, &VAR_11);
    FUNC_3(VAR_8, &VAR_10, &VAR_12);

    FUNC_2(VAR_2);
    VAR_2 = ((void*)0);

    if (VAR_11 != VAR_12) {
        FUNC_0(VAR_5, "ALPN selected protocols differ!\n");
        goto err;
    }

    if (VAR_9 != ((void*)0) &&
        FUNC_5(VAR_9, VAR_10, VAR_11) != 0) {
        FUNC_0(VAR_5, "ALPN selected protocols differ!\n");
        goto err;
    }

    if (VAR_11 > 0 && VAR_1 == ((void*)0)) {
        FUNC_0(VAR_5, "ALPN unexpectedly negotiated\n");
        goto err;
    }

    if (VAR_1 != ((void*)0) &&
        (VAR_11 != FUNC_6(VAR_1) ||
         FUNC_5(VAR_9, VAR_1, VAR_11) != 0)) {
        FUNC_0(VAR_5,
                   "ALPN selected protocols not equal to expected protocol: %s\n",
                   VAR_1);
        goto err;
    }

    return 0;

 err:
    FUNC_0(VAR_5, "ALPN results: client: '");
    FUNC_1(VAR_5, VAR_9, VAR_11);
    FUNC_0(VAR_5, "', server: '");
    FUNC_1(VAR_5, VAR_10, VAR_12);
    FUNC_0(VAR_5, "'\n");
    FUNC_0(VAR_5, "ALPN configured: client: '%s', server: '",
                   VAR_0);
    if (FUNC_4(VAR_8) == VAR_6) {
        FUNC_0(VAR_5, "%s'\n",
                   VAR_4);
    } else {
        FUNC_0(VAR_5, "%s'\n",
                   VAR_3);
    }
    return -1;
}
