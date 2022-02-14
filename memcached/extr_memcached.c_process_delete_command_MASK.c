
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_23__ {char* value; size_t length; } ;
typedef TYPE_4__ token_t ;
struct TYPE_24__ {int nkey; } ;
typedef TYPE_5__ item ;
struct TYPE_25__ {TYPE_3__* thread; int sfd; } ;
typedef TYPE_6__ conn ;
struct TYPE_26__ {scalar_t__ detail_enabled; } ;
struct TYPE_21__ {int mutex; int delete_misses; TYPE_1__* slab_stats; } ;
struct TYPE_22__ {TYPE_2__ stats; int storage; } ;
struct TYPE_20__ {int delete_hits; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_7 (char*,size_t,TYPE_6__*,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_6__*,TYPE_4__*,size_t const) ;
 TYPE_7__ VAR_3 ;
 int FUNC_13 (char*,size_t) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(conn *VAR_4, token_t *VAR_5, const size_t VAR_6) {
    char *VAR_7;
    size_t VAR_8;
    item *VAR_9;
    uint32_t VAR_10;

    FUNC_4(VAR_4 != ((void*)0));

    if (VAR_6 > 3) {
        bool VAR_11 = FUNC_14(VAR_5[VAR_2+1].value, "0") == 0;
        bool VAR_12 = FUNC_12(VAR_4, VAR_5, VAR_6);
        bool VAR_13 = (VAR_6 == 4 && (VAR_11 || VAR_12))
            || (VAR_6 == 5 && VAR_11 && VAR_12);
        if (!VAR_13) {
            FUNC_9(VAR_4, "CLIENT_ERROR bad command line format.  "
                       "Usage: delete <key> [noreply]");
            return;
        }
    }


    VAR_7 = VAR_5[VAR_2].value;
    VAR_8 = VAR_5[VAR_2].length;

    if(VAR_8 > VAR_1) {
        FUNC_9(VAR_4, "CLIENT_ERROR bad command line format");
        return;
    }

    if (VAR_3.detail_enabled) {
        FUNC_13(VAR_7, VAR_8);
    }

    VAR_9 = FUNC_7(VAR_7, VAR_8, VAR_4, VAR_0, &VAR_10);
    if (VAR_9) {
        FUNC_2(VAR_4->sfd, FUNC_1(VAR_9), VAR_9->nkey);

        FUNC_10(&VAR_4->thread->stats.mutex);
        VAR_4->thread->stats.slab_stats[FUNC_0(VAR_9)].delete_hits++;
        FUNC_11(&VAR_4->thread->stats.mutex);

        FUNC_6(VAR_9, VAR_10);
        FUNC_3(VAR_4->thread->storage, VAR_9);
        FUNC_5(VAR_9);
        FUNC_9(VAR_4, "DELETED");
    } else {
        FUNC_10(&VAR_4->thread->stats.mutex);
        VAR_4->thread->stats.delete_misses++;
        FUNC_11(&VAR_4->thread->stats.mutex);

        FUNC_9(VAR_4, "NOT_FOUND");
    }
    FUNC_8(VAR_10);
}
