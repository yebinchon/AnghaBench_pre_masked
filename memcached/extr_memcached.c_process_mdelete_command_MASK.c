
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_25__ {size_t length; char* value; } ;
typedef TYPE_4__ token_t ;
struct _meta_flags {scalar_t__ set_stale; int no_reply; int member_0; } ;
struct TYPE_26__ {int it_flags; int exptime; int nkey; } ;
typedef TYPE_5__ item ;
struct TYPE_27__ {char* wbuf; int wbytes; TYPE_3__* thread; int sfd; int noreply; } ;
typedef TYPE_6__ conn ;
struct TYPE_28__ {scalar_t__ use_cas; } ;
struct TYPE_23__ {int mutex; int delete_misses; TYPE_1__* slab_stats; } ;
struct TYPE_24__ {TYPE_2__ stats; int storage; } ;
struct TYPE_22__ {int delete_hits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,TYPE_5__*) ;
 int FUNC_6 (char*,int,struct _meta_flags*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 () ;
 TYPE_5__* FUNC_11 (char*,size_t,TYPE_6__*,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (TYPE_6__*,char*) ;
 int FUNC_15 (TYPE_6__*,int ) ;
 int FUNC_16 (TYPE_6__*,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,int *) ;
 int FUNC_21 (char*,scalar_t__*) ;
 TYPE_7__ VAR_9 ;

__attribute__((used)) static void FUNC_22(conn *VAR_10, token_t *VAR_11, const size_t VAR_12) {
    char *VAR_13;
    size_t VAR_14;
    uint32_t VAR_15 = 0;
    uint64_t VAR_16 = 0;
    char *VAR_17;
    int VAR_18;
    item *VAR_19 = ((void*)0);
    char *VAR_20;
    int VAR_21, VAR_22;
    uint32_t VAR_23;
    struct _meta_flags VAR_24 = {0};
    char *VAR_25 = "CLIENT_ERROR bad command line format";

    FUNC_7(VAR_10 != ((void*)0));


    if (VAR_11[VAR_6].length > VAR_5) {
        FUNC_16(VAR_10, "CLIENT_ERROR bad command line format");
        return;
    }

    VAR_13 = VAR_11[VAR_6].value;
    VAR_14 = VAR_11[VAR_6].length;

    VAR_18 = 3;


    if (VAR_12 == 3) {
        VAR_20 = "";
        VAR_21 = 0;
    } else {
        VAR_20 = VAR_11[VAR_6 + 1].value;
        VAR_21 = VAR_11[VAR_6 + 1].length;
        VAR_18++;
    }

    if (VAR_21 > VAR_8) {
        FUNC_16(VAR_10, "CLIENT_ERROR options flags too long");
        return;
    }



    VAR_17 = VAR_10->wbuf + 3;
    FUNC_13(VAR_17, VAR_20, VAR_21);
    VAR_17 += VAR_21;


    int VAR_26 = FUNC_6(VAR_20, VAR_21, &VAR_24);

    if (VAR_26 + VAR_18 != VAR_12) {
        if (VAR_26 == -1) {
            FUNC_14(VAR_10, "CLIENT_ERROR invalid or duplicate flag");
        } else {
            FUNC_14(VAR_10, "CLIENT_ERROR incorrect number of tokens supplied");
        }
        return;
    }
    VAR_18 = VAR_6 + 2;
    VAR_10->noreply = VAR_24.no_reply;

    FUNC_7(VAR_10 != ((void*)0));
    bool VAR_27 = 0;
    for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
        switch (VAR_20[VAR_22]) {
            case 'C':
                if (!FUNC_21(VAR_11[VAR_18].value, &VAR_16)) {
                    goto error;
                }
                VAR_18++;
                break;
            case 'T':
                if (!FUNC_20(VAR_11[VAR_18].value, &VAR_15)) {
                    goto error;
                }
                VAR_27 = 1;
                VAR_18++;
                break;

            case 'O':
                if (VAR_11[VAR_18].length > VAR_7) {
                    VAR_25 = "CLIENT_ERROR opaque token too long";
                    goto error;
                }
                *VAR_17 = ' ';
                FUNC_13(VAR_17+1, VAR_11[VAR_18].value, VAR_11[VAR_18].length);
                VAR_17 += VAR_11[VAR_18].length + 1;
                VAR_18++;
                break;
            case 'k':
                *VAR_17 = ' ';
                FUNC_13(VAR_17+1, VAR_13, VAR_14);
                VAR_17 += VAR_14 + 1;
                VAR_18++;
                break;
        }
    }

    VAR_19 = FUNC_11(VAR_13, VAR_14, VAR_10, VAR_2, &VAR_23);
    if (VAR_19) {
        FUNC_4(VAR_10->sfd, FUNC_2(VAR_19), VAR_19->nkey);


        if (VAR_16 != 0 && FUNC_1(VAR_19) != VAR_16) {
            FUNC_17(&VAR_10->thread->stats.mutex);
            VAR_10->thread->stats.delete_misses++;
            FUNC_18(&VAR_10->thread->stats.mutex);


            FUNC_13(VAR_10->wbuf, "EX ", 3);
            VAR_10->wbytes = VAR_17 - VAR_10->wbuf;
            FUNC_15(VAR_10, VAR_1);
            goto cleanup;
        }




        if (VAR_24.set_stale) {
            if (VAR_27) {
                VAR_19->exptime = FUNC_19(VAR_15);
            }
            VAR_19->it_flags |= VAR_3;

            VAR_19->it_flags &= ~VAR_4;

            FUNC_3(VAR_19, (VAR_9.use_cas) ? FUNC_10() : 0);

            FUNC_13(VAR_10->wbuf, "DE ", 3);


            VAR_10->wbytes = VAR_17 - VAR_10->wbuf;
            FUNC_15(VAR_10, VAR_0);
        } else {
            FUNC_17(&VAR_10->thread->stats.mutex);
            VAR_10->thread->stats.slab_stats[FUNC_0(VAR_19)].delete_hits++;
            FUNC_18(&VAR_10->thread->stats.mutex);

            FUNC_9(VAR_19, VAR_23);
            FUNC_5(VAR_10->thread->storage, VAR_19);
            FUNC_13(VAR_10->wbuf, "DE ", 3);
            VAR_10->wbytes = VAR_17 - VAR_10->wbuf;
            FUNC_15(VAR_10, VAR_0);
        }
        goto cleanup;
    } else {
        FUNC_17(&VAR_10->thread->stats.mutex);
        VAR_10->thread->stats.delete_misses++;
        FUNC_18(&VAR_10->thread->stats.mutex);

        FUNC_13(VAR_10->wbuf, "NF ", 3);
        VAR_10->wbytes = VAR_17 - VAR_10->wbuf;
        FUNC_15(VAR_10, VAR_0);
        goto cleanup;
    }
cleanup:
    if (VAR_19) {
        FUNC_8(VAR_19);
    }

    FUNC_12(VAR_23);
    return;
error:
    FUNC_14(VAR_10, VAR_25);
}
