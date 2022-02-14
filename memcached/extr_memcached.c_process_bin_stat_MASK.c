
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int * buffer; int offset; } ;
struct TYPE_18__ {size_t keylen; } ;
struct TYPE_19__ {TYPE_1__ request; } ;
struct TYPE_21__ {int sfd; TYPE_3__ stats; TYPE_2__ binary_header; } ;
typedef TYPE_4__ conn ;
struct TYPE_22__ {int verbose; int detail_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,TYPE_4__*) ;
 char* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,size_t,int (*) (char*,int ,char*,int,TYPE_4__*),TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (int (*) (char*,int ,char*,int,TYPE_4__*),TYPE_4__*) ;
 int FUNC_7 (int (*) (char*,int ,char*,int,TYPE_4__*),TYPE_4__*) ;
 TYPE_7__ VAR_1 ;
 char* FUNC_8 (int*) ;
 int FUNC_9 () ;
 int VAR_2 ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 int FUNC_12 (TYPE_4__*,int *,int ) ;
 int FUNC_13 (TYPE_4__*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_14(conn *VAR_3) {
    char *VAR_4 = FUNC_1(VAR_3);
    size_t VAR_5 = VAR_3->binary_header.request.keylen;

    if (VAR_1.verbose > 1) {
        int VAR_6;
        FUNC_2(VAR_2, "<%d STATS ", VAR_3->sfd);
        for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
            FUNC_2(VAR_2, "%c", VAR_4[VAR_6]);
        }
        FUNC_2(VAR_2, "\n");
    }

    if (VAR_5 == 0) {

        FUNC_7(&FUNC_0, VAR_3);
        (void)FUNC_4(((void*)0), 0, &FUNC_0, VAR_3);
    } else if (FUNC_11(VAR_4, "reset", 5) == 0) {
        FUNC_9();
    } else if (FUNC_11(VAR_4, "settings", 8) == 0) {
        FUNC_6(&FUNC_0, VAR_3);
    } else if (FUNC_11(VAR_4, "detail", 6) == 0) {
        char *VAR_7 = VAR_4 + 6;
        if (FUNC_11(VAR_7, " dump", 5) == 0) {
            int VAR_8;
            char *VAR_9 = FUNC_8(&VAR_8);
            if (VAR_9 == ((void*)0) || VAR_8 <= 0) {
                FUNC_5(VAR_3, "SERVER_ERROR Out of memory generating stats");
                if (VAR_9 != ((void*)0))
                    FUNC_3(VAR_9);
                return;
            } else {
                FUNC_0("detailed", FUNC_10("detailed"), VAR_9, VAR_8, VAR_3);
                FUNC_3(VAR_9);
            }
        } else if (FUNC_11(VAR_7, " on", 3) == 0) {
            VAR_1.detail_enabled = 1;
        } else if (FUNC_11(VAR_7, " off", 4) == 0) {
            VAR_1.detail_enabled = 0;
        } else {
            FUNC_13(VAR_3, VAR_0, ((void*)0), 0);
            return;
        }
    } else {
        if (FUNC_4(VAR_4, VAR_5, &FUNC_0, VAR_3)) {
            if (VAR_3->stats.buffer == ((void*)0)) {
                FUNC_5(VAR_3, "SERVER_ERROR Out of memory generating stats");
            } else {
                FUNC_12(VAR_3, VAR_3->stats.buffer, VAR_3->stats.offset);
                VAR_3->stats.buffer = ((void*)0);
            }
        } else {
            FUNC_13(VAR_3, VAR_0, ((void*)0), 0);
        }

        return;
    }


    FUNC_0(((void*)0), 0, ((void*)0), 0, VAR_3);
    if (VAR_3->stats.buffer == ((void*)0)) {
        FUNC_5(VAR_3, "SERVER_ERROR Out of memory preparing to send stats");
    } else {
        FUNC_12(VAR_3, VAR_3->stats.buffer, VAR_3->stats.offset);
        VAR_3->stats.buffer = ((void*)0);
    }
}
