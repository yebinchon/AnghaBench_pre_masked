
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {size_t length; char* value; } ;
typedef TYPE_4__ token_t ;
typedef int item ;
typedef int int32_t ;
struct TYPE_16__ {TYPE_3__* thread; } ;
typedef TYPE_5__ conn ;
struct TYPE_13__ {int mutex; int touch_misses; int touch_cmds; TYPE_1__* slab_stats; } ;
struct TYPE_14__ {TYPE_2__ stats; } ;
struct TYPE_12__ {int touch_hits; } ;


 size_t FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,size_t,int ,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*,size_t const) ;

__attribute__((used)) static void FUNC_10(conn *VAR_2, token_t *VAR_3, const size_t VAR_4) {
    char *VAR_5;
    size_t VAR_6;
    int32_t VAR_7 = 0;
    item *VAR_8;

    FUNC_1(VAR_2 != ((void*)0));

    FUNC_9(VAR_2, VAR_3, VAR_4);

    if (VAR_3[VAR_1].length > VAR_0) {
        FUNC_4(VAR_2, "CLIENT_ERROR bad command line format");
        return;
    }

    VAR_5 = VAR_3[VAR_1].value;
    VAR_6 = VAR_3[VAR_1].length;

    if (!FUNC_8(VAR_3[2].value, &VAR_7)) {
        FUNC_4(VAR_2, "CLIENT_ERROR invalid exptime argument");
        return;
    }

    VAR_8 = FUNC_3(VAR_5, VAR_6, FUNC_7(VAR_7), VAR_2);
    if (VAR_8) {
        FUNC_5(&VAR_2->thread->stats.mutex);
        VAR_2->thread->stats.touch_cmds++;
        VAR_2->thread->stats.slab_stats[FUNC_0(VAR_8)].touch_hits++;
        FUNC_6(&VAR_2->thread->stats.mutex);

        FUNC_4(VAR_2, "TOUCHED");
        FUNC_2(VAR_8);
    } else {
        FUNC_5(&VAR_2->thread->stats.mutex);
        VAR_2->thread->stats.touch_cmds++;
        VAR_2->thread->stats.touch_misses++;
        FUNC_6(&VAR_2->thread->stats.mutex);

        FUNC_4(VAR_2, "NOT_FOUND");
    }
}
