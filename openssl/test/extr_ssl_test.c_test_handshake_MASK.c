
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int test_app ;
struct TYPE_19__ {scalar_t__ servername_callback; } ;
struct TYPE_20__ {TYPE_1__ server; } ;
struct TYPE_21__ {scalar_t__ method; scalar_t__ handshake_mode; TYPE_2__ extra; } ;
typedef TYPE_3__ SSL_TEST_CTX ;
typedef TYPE_3__ SSL_CTX ;
typedef int HANDSHAKE_RESULT ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_11 (int ,char*) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int *,TYPE_3__*) ;
 int VAR_6 ;
 int * FUNC_19 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_20(int VAR_7)
{
    int VAR_8 = 0;
    SSL_CTX *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0),
        *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    SSL_TEST_CTX *VAR_14 = ((void*)0);
    HANDSHAKE_RESULT *VAR_15 = ((void*)0);
    char VAR_16[VAR_0];

    FUNC_0(VAR_16, sizeof(VAR_16), "test-%d", VAR_7);

    VAR_14 = FUNC_11(VAR_6, VAR_16);
    if (!FUNC_14(VAR_14))
        goto err;


    if (VAR_14->method == VAR_3) {
        VAR_9 = FUNC_9(FUNC_4());
        if (!FUNC_15(FUNC_10(VAR_9, 0)))
            goto err;
        if (VAR_14->extra.server.servername_callback !=
            VAR_5) {
            if (!FUNC_14(VAR_10 = FUNC_9(FUNC_4())))
                goto err;
        }
        VAR_11 = FUNC_9(FUNC_3());
        if (!FUNC_15(FUNC_10(VAR_11, 0)))
            goto err;
        if (VAR_14->handshake_mode == VAR_2) {
            VAR_12 = FUNC_9(FUNC_4());
            if (!FUNC_15(FUNC_10(VAR_12, 0)))
                goto err;
            VAR_13 = FUNC_9(FUNC_3());
            if (!FUNC_15(FUNC_10(VAR_13, 0)))
                goto err;
            if (!FUNC_14(VAR_12)
                    || !FUNC_14(VAR_13))
                goto err;
        }
    }

    if (VAR_14->method == VAR_4) {
        VAR_9 = FUNC_9(FUNC_17());
        if (!FUNC_15(FUNC_10(VAR_9, 0)))
            goto err;

        if (VAR_14->extra.server.servername_callback !=
            VAR_5) {
            if (!FUNC_14(VAR_10 = FUNC_9(FUNC_17())))
                goto err;
            if (!FUNC_15(FUNC_10(VAR_10, 0)))
                goto err;
        }
        VAR_11 = FUNC_9(FUNC_16());
        if (!FUNC_15(FUNC_10(VAR_11, 0)))
            goto err;

        if (VAR_14->handshake_mode == VAR_2) {
            VAR_12 = FUNC_9(FUNC_17());
            if (!FUNC_15(FUNC_10(VAR_12, 0)))
                goto err;
            VAR_13 = FUNC_9(FUNC_16());
            if (!FUNC_15(FUNC_10(VAR_13, 0)))
                goto err;
            if (!FUNC_14(VAR_12)
                    || !FUNC_14(VAR_13))
                goto err;
        }
    }






    if (!FUNC_14(VAR_9)
            || !FUNC_14(VAR_11)
            || !FUNC_13(FUNC_1(VAR_6, VAR_16, 0), 0))
        goto err;

    if (!FUNC_7(VAR_9, "server")
        || !FUNC_7(VAR_11, "client")) {
        goto err;
    }

    if (VAR_10 != ((void*)0) && !FUNC_7(VAR_10, "server2"))
        goto err;
    if (VAR_12 != ((void*)0)
        && !FUNC_7(VAR_12, "resume-server"))
        goto err;
    if (VAR_13 != ((void*)0)
        && !FUNC_7(VAR_13, "resume-client"))
        goto err;

    VAR_15 = FUNC_19(VAR_9, VAR_10, VAR_11,
                          VAR_12, VAR_13, VAR_14);

    if (VAR_15 != ((void*)0))
        VAR_8 = FUNC_18(VAR_15, VAR_14);

err:
    FUNC_2(0);
    FUNC_8(VAR_9);
    FUNC_8(VAR_10);
    FUNC_8(VAR_11);
    FUNC_8(VAR_12);
    FUNC_8(VAR_13);
    FUNC_12(VAR_14);
    FUNC_5(VAR_15);
    return VAR_8;
}
