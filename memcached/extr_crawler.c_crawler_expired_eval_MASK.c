
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint32_t ;
struct crawler_expired_data {int lock; TYPE_3__* crawlerstats; } ;
typedef int rel_time_t ;
struct TYPE_17__ {int page_version; int page_id; } ;
typedef TYPE_1__ item_hdr ;
struct TYPE_18__ {int it_flags; scalar_t__ exptime; int slabs_clsid; int nkey; } ;
typedef TYPE_2__ item ;
struct TYPE_19__ {int * histo; int ttl_hourplus; int noexp; int seen; int reclaimed; } ;
typedef TYPE_3__ crawlerstats_t ;
struct TYPE_20__ {scalar_t__ data; } ;
typedef TYPE_4__ crawler_module_t ;
struct TYPE_21__ {int verbose; } ;
struct TYPE_16__ {int unfetched; int reclaimed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_10__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_11(crawler_module_t *VAR_7, item *VAR_8, uint32_t VAR_9, int VAR_10) {
    struct crawler_expired_data *VAR_11 = (struct crawler_expired_data *) VAR_7->data;
    FUNC_8(&VAR_11->lock);
    crawlerstats_t *VAR_12 = &VAR_11->crawlerstats[VAR_10];
    int VAR_13 = FUNC_7(VAR_8);
    if ((VAR_8->exptime != 0 && VAR_8->exptime < VAR_3)
        || VAR_13



        ) {
        VAR_2[VAR_10].reclaimed++;
        VAR_12->reclaimed++;

        if (VAR_4.verbose > 1) {
            int VAR_14;
            char *VAR_15 = FUNC_1(VAR_8);
            FUNC_6(VAR_5, "LRU crawler found an expired item (flags: %d, slab: %d): ",
                VAR_8->it_flags, VAR_8->slabs_clsid);
            for (VAR_14 = 0; VAR_14 < VAR_8->nkey; ++VAR_14) {
                FUNC_6(VAR_5, "%c", VAR_15[VAR_14]);
            }
            FUNC_6(VAR_5, "\n");
        }
        if ((VAR_8->it_flags & VAR_0) == 0 && !VAR_13) {
            VAR_2[VAR_10].unfetched++;
        }



        FUNC_4(VAR_8, VAR_9);
        FUNC_3(VAR_8);
    } else {
        VAR_12->seen++;
        FUNC_10(VAR_8);
        if (VAR_8->exptime == 0) {
            VAR_12->noexp++;
        } else if (VAR_8->exptime - VAR_3 > 3599) {
            VAR_12->ttl_hourplus++;
        } else {
            rel_time_t VAR_16 = VAR_8->exptime - VAR_3;
            int VAR_17 = VAR_16 / 60;
            if (VAR_17 <= 60) {
                VAR_12->histo[VAR_17]++;
            }
        }
    }
    FUNC_9(&VAR_11->lock);
}
