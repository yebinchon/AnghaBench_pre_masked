
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_20__ {scalar_t__ exptime; } ;
typedef TYPE_3__ item ;
struct TYPE_21__ {int sfd; TYPE_2__* thread; } ;
typedef TYPE_4__ conn ;
struct TYPE_22__ {int verbose; } ;
struct TYPE_18__ {int mutex; int get_expired; int get_flushed; } ;
struct TYPE_19__ {int l; TYPE_1__ stats; int storage; } ;


 int FUNC_0 (TYPE_3__*,char) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int *,int,char const*,size_t const,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (char const*,size_t const,int const) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int const) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int const) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;

item *FUNC_13(const char *VAR_5, const size_t VAR_6, const uint32_t VAR_7, conn *VAR_8, const bool VAR_9) {
    item *VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7);
    if (VAR_10 != ((void*)0)) {
        FUNC_12(VAR_10);
    }
    int VAR_11 = 0;

    if (VAR_3.verbose > 2) {
        int VAR_12;
        if (VAR_10 == ((void*)0)) {
            FUNC_8(VAR_4, "> NOT FOUND ");
        } else {
            FUNC_8(VAR_4, "> FOUND KEY ");
        }
        for (VAR_12 = 0; VAR_12 < VAR_6; ++VAR_12) {
            FUNC_8(VAR_4, "%c", VAR_5[VAR_12]);
        }
    }

    if (VAR_10 != ((void*)0)) {
        VAR_11 = 1;
        if (FUNC_9(VAR_10)) {
            FUNC_7(VAR_10, VAR_7);
            FUNC_3(VAR_8->thread->storage, VAR_10);
            FUNC_6(VAR_10);
            VAR_10 = ((void*)0);
            FUNC_10(&VAR_8->thread->stats.mutex);
            VAR_8->thread->stats.get_flushed++;
            FUNC_11(&VAR_8->thread->stats.mutex);
            if (VAR_3.verbose > 2) {
                FUNC_8(VAR_4, " -nuked by flush");
            }
            VAR_11 = 2;
        } else if (VAR_10->exptime != 0 && VAR_10->exptime <= VAR_2) {
            FUNC_7(VAR_10, VAR_7);
            FUNC_3(VAR_8->thread->storage, VAR_10);
            FUNC_6(VAR_10);
            VAR_10 = ((void*)0);
            FUNC_10(&VAR_8->thread->stats.mutex);
            VAR_8->thread->stats.get_expired++;
            FUNC_11(&VAR_8->thread->stats.mutex);
            if (VAR_3.verbose > 2) {
                FUNC_8(VAR_4, " -nuked by expire");
            }
            VAR_11 = 3;
        } else {
            if (VAR_9) {
                FUNC_5(VAR_8, VAR_10, VAR_7);
            }
            FUNC_0(VAR_10, '+');
        }
    }

    if (VAR_3.verbose > 2)
        FUNC_8(VAR_4, "\n");

    FUNC_2(VAR_8->thread->l, VAR_1, VAR_0, ((void*)0), VAR_11, VAR_5, VAR_6,
               (VAR_10) ? FUNC_1(VAR_10) : 0, VAR_8->sfd);

    return VAR_10;
}
