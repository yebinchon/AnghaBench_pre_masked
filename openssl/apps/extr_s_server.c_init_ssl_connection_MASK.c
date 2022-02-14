
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int info; } ;
struct TYPE_4__ {TYPE_2__* user; int login; int vb; } ;
typedef int SSL ;
typedef int BIO_ADDR ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *) ;
 long FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int FUNC_17 (long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_20(SSL *VAR_8)
{
    int VAR_9;
    long VAR_10;
    int VAR_11 = 0;

    if (VAR_5 || VAR_7) {
        BIO_ADDR *VAR_12 = ((void*)0);

        if (VAR_5) {
            if ((VAR_12 = FUNC_1()) == ((void*)0)) {
                FUNC_5(VAR_3, "ERROR - memory\n");
                return 0;
            }
            VAR_9 = FUNC_6(VAR_8, VAR_12);
        } else {
            VAR_9 = FUNC_15(VAR_8);
        }
        if (VAR_9 > 0) {
            BIO *VAR_13;
            int VAR_14 = -1;

            if (VAR_5) {
                VAR_13 = FUNC_14(VAR_8);
                if (VAR_13) {
                    FUNC_4(VAR_13, &VAR_14);
                }

                if (!VAR_13 || FUNC_2(VAR_14, VAR_12, 0) == 0) {
                    FUNC_5(VAR_3, "ERROR - unable to connect\n");
                    FUNC_0(VAR_12);
                    return 0;
                }

                (void)FUNC_3(VAR_13, VAR_12);
                FUNC_0(VAR_12);
                VAR_5 = 0;
            } else {
                VAR_7 = 0;
            }
            VAR_9 = FUNC_10(VAR_8);
        } else {
            FUNC_0(VAR_12);
        }
    } else {
        do {
            VAR_9 = FUNC_10(VAR_8);

            if (VAR_9 <= 0)
                VAR_11 = FUNC_18(VAR_8, VAR_9);
            while (VAR_9 <= 0
                   && FUNC_11(VAR_8, VAR_9) == VAR_0) {
                FUNC_5(VAR_4, "LOOKUP during accept %s\n",
                           VAR_6.login);
                FUNC_9(VAR_6.user);
                VAR_6.user =
                    FUNC_8(VAR_6.vb,
                                           VAR_6.login);
                if (VAR_6.user)
                    FUNC_5(VAR_4, "LOOKUP done %s\n",
                               VAR_6.user->info);
                else
                    FUNC_5(VAR_4, "LOOKUP not successful\n");
                VAR_9 = FUNC_10(VAR_8);
                if (VAR_9 <= 0)
                    VAR_11 = FUNC_18(VAR_8, VAR_9);
            }

        } while (VAR_9 < 0 && FUNC_16(VAR_8));
    }

    if (VAR_9 <= 0) {
        if (((VAR_5 || VAR_7) && VAR_9 == 0)
                || (!VAR_5 && !VAR_7 && VAR_11)) {
            FUNC_5(VAR_4, "DELAY\n");
            return 1;
        }

        FUNC_5(VAR_3, "ERROR\n");

        VAR_10 = FUNC_13(VAR_8);
        if (VAR_10 != VAR_2) {
            FUNC_5(VAR_3, "verify error:%s\n",
                       FUNC_17(VAR_10));
        }

        FUNC_7(VAR_3);
        return 0;
    }

    FUNC_19(VAR_8);
    return 1;
}
