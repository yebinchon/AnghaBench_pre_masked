
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_21__ {int nkey; } ;
typedef TYPE_2__ item ;
struct TYPE_24__ {int crawls_persleep; int lru_crawler; int verbose; scalar_t__ lru_crawler_sleep; } ;
struct TYPE_23__ {int lru_crawler_running; } ;
struct TYPE_18__ {int * c; int buf; } ;
struct TYPE_22__ {TYPE_1__* mod; TYPE_10__ c; } ;
struct TYPE_20__ {int (* finalize ) (TYPE_3__*) ;scalar_t__ needs_lock; int (* eval ) (TYPE_3__*,TYPE_2__*,int ,int) ;scalar_t__ needs_client; } ;
struct TYPE_19__ {int it_flags; int remaining; int checked; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_15__* VAR_4 ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_10__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_10__*) ;
 int FUNC_12 (TYPE_10__*) ;
 int * VAR_8 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 TYPE_7__ VAR_9 ;
 TYPE_6__ VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (TYPE_3__*,TYPE_2__*,int ,int) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (scalar_t__) ;

__attribute__((used)) static void *FUNC_22(void *VAR_12) {
    int VAR_13;
    int VAR_14 = VAR_9.crawls_persleep;

    FUNC_15(&VAR_7);
    FUNC_13(&VAR_6);
    VAR_9.lru_crawler = 1;
    if (VAR_9.verbose > 2)
        FUNC_5(VAR_11, "Starting LRU crawler background thread\n");
    while (VAR_5) {
    FUNC_14(&VAR_6, &VAR_7);

    while (VAR_3) {
        item *VAR_15 = ((void*)0);
        void *VAR_16 = ((void*)0);

        for (VAR_13 = VAR_1; VAR_13 < VAR_0; VAR_13++) {
            if (VAR_4[VAR_13].it_flags != 1) {
                continue;
            }


            if (VAR_2.c.c != ((void*)0)) {
                int VAR_17 = FUNC_10(&VAR_2.c);
                if (VAR_17 != 0) {
                    FUNC_9(VAR_13);
                    continue;
                }
            } else if (VAR_2.mod->needs_client) {
                FUNC_9(VAR_13);
                continue;
            }
            FUNC_15(&VAR_8[VAR_13]);
            VAR_15 = FUNC_4((item *)&VAR_4[VAR_13]);
            if (VAR_15 == ((void*)0) ||
                (VAR_4[VAR_13].remaining && --VAR_4[VAR_13].remaining < 1)) {
                if (VAR_9.verbose > 2)
                    FUNC_5(VAR_11, "Nothing left to crawl for %d\n", VAR_13);
                FUNC_9(VAR_13);
                continue;
            }
            uint32_t VAR_18 = FUNC_6(FUNC_0(VAR_15), VAR_15->nkey);



            if ((VAR_16 = FUNC_7(VAR_18)) == ((void*)0)) {
                FUNC_16(&VAR_8[VAR_13]);
                continue;
            }

            if (FUNC_18(VAR_15) != 2) {
                FUNC_17(VAR_15);
                if (VAR_16)
                    FUNC_8(VAR_16);
                FUNC_16(&VAR_8[VAR_13]);
                continue;
            }

            VAR_4[VAR_13].checked++;



            if (!VAR_2.mod->needs_lock) {
                FUNC_16(&VAR_8[VAR_13]);
            }

            VAR_2.mod->eval(&VAR_2, VAR_15, VAR_18, VAR_13);

            if (VAR_16)
                FUNC_8(VAR_16);
            if (VAR_2.mod->needs_lock) {
                FUNC_16(&VAR_8[VAR_13]);
            }

            if (VAR_14-- <= 0 && VAR_9.lru_crawler_sleep) {
                FUNC_16(&VAR_7);
                FUNC_21(VAR_9.lru_crawler_sleep);
                FUNC_15(&VAR_7);
                VAR_14 = VAR_9.crawls_persleep;
            } else if (!VAR_9.lru_crawler_sleep) {

                FUNC_16(&VAR_7);
                FUNC_15(&VAR_7);
            }
        }
    }

    if (VAR_2.mod != ((void*)0)) {
        if (VAR_2.mod->finalize != ((void*)0))
            VAR_2.mod->finalize(&VAR_2);
        while (VAR_2.c.c != ((void*)0) && FUNC_3(VAR_2.c.buf)) {
            FUNC_11(&VAR_2.c);
        }

        if (VAR_2.c.c != ((void*)0)) {
            FUNC_12(&VAR_2.c);
        }
        VAR_2.mod = ((void*)0);
    }

    if (VAR_9.verbose > 2)
        FUNC_5(VAR_11, "LRU crawler thread sleeping\n");

    FUNC_1();
    VAR_10.lru_crawler_running = 0;
    FUNC_2();
    }
    FUNC_16(&VAR_7);
    if (VAR_9.verbose > 2)
        FUNC_5(VAR_11, "LRU crawler thread stopping\n");
    VAR_9.lru_crawler = 0;

    return ((void*)0);
}
