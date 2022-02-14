
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {char* value; } ;
typedef TYPE_2__ token_t ;
struct TYPE_22__ {char* buffer; unsigned int offset; } ;
struct TYPE_24__ {TYPE_1__ stats; } ;
typedef TYPE_3__ conn ;
struct TYPE_25__ {int dump_enabled; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ,int (*) (int *,int ,int *,int ,TYPE_3__*),TYPE_3__*) ;
 char* FUNC_3 (unsigned int,unsigned int,unsigned int*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int (*) (int *,int ,int *,int ,TYPE_3__*),TYPE_3__*) ;
 int FUNC_7 (int (*) (int *,int ,int *,int ,TYPE_3__*),TYPE_3__*) ;
 int FUNC_8 (int (*) (int *,int ,int *,int ,TYPE_3__*),TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (char*,unsigned int*) ;
 int FUNC_11 (int (*) (int *,int ,int *,int ,TYPE_3__*),TYPE_3__*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (TYPE_3__*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_16(conn *VAR_3, token_t *VAR_4, const size_t VAR_5) {
    const char *VAR_6 = VAR_4[VAR_1].value;
    FUNC_1(VAR_3 != ((void*)0));

    if (VAR_5 < 2) {
        FUNC_5(VAR_3, "CLIENT_ERROR bad command line");
        return;
    }

    if (VAR_5 == 2) {
        FUNC_11(&FUNC_0, VAR_3);
        (void)FUNC_2(((void*)0), 0, &FUNC_0, VAR_3);
    } else if (FUNC_13(VAR_6, "reset") == 0) {
        FUNC_12();
        FUNC_5(VAR_3, "RESET");
        return ;
    } else if (FUNC_13(VAR_6, "detail") == 0) {

        if (VAR_5 < 4)
            FUNC_9(VAR_3, "");
        else
            FUNC_9(VAR_3, VAR_4[2].value);

        return ;
    } else if (FUNC_13(VAR_6, "settings") == 0) {
        FUNC_7(&FUNC_0, VAR_3);
    } else if (FUNC_13(VAR_6, "cachedump") == 0) {
        char *VAR_7;
        unsigned int VAR_8, VAR_9, VAR_10 = 0;

        if (!VAR_2.dump_enabled) {
            FUNC_5(VAR_3, "CLIENT_ERROR stats cachedump not allowed");
            return;
        }

        if (VAR_5 < 5) {
            FUNC_5(VAR_3, "CLIENT_ERROR bad command line");
            return;
        }

        if (!FUNC_10(VAR_4[2].value, &VAR_9) ||
            !FUNC_10(VAR_4[3].value, &VAR_10)) {
            FUNC_5(VAR_3, "CLIENT_ERROR bad command line format");
            return;
        }

        if (VAR_9 >= VAR_0) {
            FUNC_5(VAR_3, "CLIENT_ERROR Illegal slab id");
            return;
        }

        VAR_7 = FUNC_3(VAR_9, VAR_10, &VAR_8);
        FUNC_15(VAR_3, VAR_7, VAR_8);
        return ;
    } else if (FUNC_13(VAR_6, "conns") == 0) {
        FUNC_8(&FUNC_0, VAR_3);




    } else {


        if (FUNC_2(VAR_6, FUNC_14(VAR_6), &FUNC_0, VAR_3)) {
            if (VAR_3->stats.buffer == ((void*)0)) {
                FUNC_4(VAR_3, "SERVER_ERROR out of memory writing stats");
            } else {
                FUNC_15(VAR_3, VAR_3->stats.buffer, VAR_3->stats.offset);
                VAR_3->stats.buffer = ((void*)0);
            }
        } else {
            FUNC_5(VAR_3, "ERROR");
        }
        return ;
    }


    FUNC_0(((void*)0), 0, ((void*)0), 0, VAR_3);

    if (VAR_3->stats.buffer == ((void*)0)) {
        FUNC_4(VAR_3, "SERVER_ERROR out of memory writing stats");
    } else {
        FUNC_15(VAR_3, VAR_3->stats.buffer, VAR_3->stats.offset);
        VAR_3->stats.buffer = ((void*)0);
    }
}
