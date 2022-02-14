
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_32__ {int cas; } ;
struct TYPE_33__ {TYPE_3__ request; } ;
struct TYPE_34__ {TYPE_4__ header; } ;
struct TYPE_38__ {TYPE_5__ message; } ;
typedef TYPE_9__ protocol_binary_request_delete ;
struct TYPE_27__ {int nkey; } ;
typedef TYPE_10__ item ;
struct TYPE_30__ {size_t keylen; } ;
struct TYPE_31__ {TYPE_1__ request; } ;
struct TYPE_28__ {TYPE_8__* thread; int sfd; TYPE_2__ binary_header; } ;
typedef TYPE_11__ conn ;
struct TYPE_36__ {int mutex; int delete_misses; TYPE_6__* slab_stats; } ;
struct TYPE_37__ {TYPE_7__ stats; int storage; } ;
struct TYPE_35__ {int delete_hits; } ;
struct TYPE_29__ {int verbose; scalar_t__ detail_enabled; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_10__*) ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_10__*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (TYPE_11__*) ;
 TYPE_9__* FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,int ) ;
 int FUNC_10 (int ,char*,...) ;
 TYPE_10__* FUNC_11 (char*,size_t,TYPE_11__*,int ,int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_14__ VAR_3 ;
 int FUNC_16 (char*,size_t) ;
 int VAR_4 ;
 int FUNC_17 (TYPE_11__*,int ,int *,int ) ;
 int FUNC_18 (TYPE_11__*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_19(conn *VAR_5) {
    item *VAR_6;
    uint32_t VAR_7;

    protocol_binary_request_delete* VAR_8 = FUNC_7(VAR_5);

    char* VAR_9 = FUNC_6(VAR_5);
    size_t VAR_10 = VAR_5->binary_header.request.keylen;

    FUNC_5(VAR_5 != ((void*)0));

    if (VAR_3.verbose > 1) {
        int VAR_11;
        FUNC_10(VAR_4, "Deleting ");
        for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11) {
            FUNC_10(VAR_4, "%c", VAR_9[VAR_11]);
        }
        FUNC_10(VAR_4, "\n");
    }

    if (VAR_3.detail_enabled) {
        FUNC_16(VAR_9, VAR_10);
    }

    VAR_6 = FUNC_11(VAR_9, VAR_10, VAR_5, VAR_0, &VAR_7);
    if (VAR_6) {
        uint64_t VAR_12 = FUNC_13(VAR_8->message.header.request.cas);
        if (VAR_12 == 0 || VAR_12 == FUNC_1(VAR_6)) {
            FUNC_3(VAR_5->sfd, FUNC_2(VAR_6), VAR_6->nkey);
            FUNC_14(&VAR_5->thread->stats.mutex);
            VAR_5->thread->stats.slab_stats[FUNC_0(VAR_6)].delete_hits++;
            FUNC_15(&VAR_5->thread->stats.mutex);
            FUNC_9(VAR_6, VAR_7);
            FUNC_4(VAR_5->thread->storage, VAR_6);
            FUNC_18(VAR_5, ((void*)0), 0, 0, 0);
        } else {
            FUNC_17(VAR_5, VAR_1, ((void*)0), 0);
        }
        FUNC_8(VAR_6);
    } else {
        FUNC_17(VAR_5, VAR_2, ((void*)0), 0);
        FUNC_14(&VAR_5->thread->stats.mutex);
        VAR_5->thread->stats.delete_misses++;
        FUNC_15(&VAR_5->thread->stats.mutex);
    }
    FUNC_12(VAR_7);
}
