
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_36__ {size_t length; char* value; } ;
typedef TYPE_4__ token_t ;
struct _meta_flags {int value; scalar_t__ locked; int no_update; scalar_t__ vivify; int no_reply; int member_0; } ;
struct TYPE_37__ {int it_flags; int exptime; int nbytes; int time; int nkey; size_t slabs_clsid; } ;
typedef TYPE_5__ item ;
typedef int int32_t ;
struct TYPE_38__ {char* wbuf; int iovused; TYPE_3__* thread; int sfd; int write_and_go; TYPE_5__* item; int noreply; } ;
typedef TYPE_6__ conn ;
struct TYPE_34__ {int mutex; int get_cmds; int get_misses; int touch_misses; int touch_cmds; int * lru_hits; TYPE_1__* slab_stats; int get_oom_extstore; } ;
struct TYPE_35__ {TYPE_2__ stats; } ;
struct TYPE_33__ {int touch_hits; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (TYPE_5__*) ;
 char* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 char* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_6 (int ,char*,size_t,int,int ) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_7 (TYPE_6__*,TYPE_5__*,int,int) ;
 int FUNC_8 (char*,size_t,struct _meta_flags*) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_10 (TYPE_6__*,char*,int) ;
 int FUNC_11 (int ) ;
 int VAR_10 ;
 int FUNC_12 (TYPE_6__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*,int) ;
 int FUNC_15 (TYPE_5__*) ;
 TYPE_5__* FUNC_16 (char*,size_t,int ,void*,int) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (int) ;
 char* FUNC_19 (int,char*) ;
 char* FUNC_20 (int ,char*) ;
 TYPE_5__* FUNC_21 (char*,size_t,TYPE_6__*,int ,int,int) ;
 TYPE_5__* FUNC_22 (char*,size_t,TYPE_6__*,int ,int*) ;
 int FUNC_23 (char*,char*,int) ;
 int FUNC_24 (TYPE_6__*,char*) ;
 int FUNC_25 (TYPE_6__*,char*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 void* FUNC_28 (int) ;
 int FUNC_29 (char*,int*) ;

__attribute__((used)) static void FUNC_30(conn *VAR_13, token_t *VAR_14, const size_t VAR_15) {
    char *VAR_16;
    size_t VAR_17;
    item *VAR_18;
    char *VAR_19;
    char *VAR_20 = ((void*)0);
    char *VAR_21 = VAR_13->wbuf;
    size_t VAR_22;
    unsigned int VAR_23 = 0;
    int32_t VAR_24 = 0;
    struct _meta_flags VAR_25 = {0};
    uint32_t VAR_26;
    bool VAR_27 = 0;
    bool VAR_28 = 0;
    bool VAR_29 = 0;
    bool VAR_30 = 0;
    char *VAR_31;

    FUNC_11(VAR_13 != ((void*)0));

    if (VAR_14[VAR_7].length > VAR_6) {
        FUNC_24(VAR_13, "CLIENT_ERROR bad command line format");
        return;
    }

    VAR_16 = VAR_14[VAR_7].value;
    VAR_17 = VAR_14[VAR_7].length;



    VAR_24 = 3;

    if (VAR_15 == 3) {

        VAR_19 = "sftv";
        VAR_22 = 4;
    } else {

        VAR_19 = VAR_14[VAR_7 + 1].value;
        VAR_22 = VAR_14[VAR_7 + 1].length;
        VAR_24++;
    }

    if (VAR_22 > VAR_9) {
        FUNC_24(VAR_13, "CLIENT_ERROR options flags are too long");
        return;
    }







    VAR_20 = VAR_13->wbuf + 6;
    FUNC_23(VAR_20, VAR_19, VAR_22);
    VAR_21 = VAR_20 + VAR_22;
    VAR_20--;


    int VAR_32 = FUNC_8(VAR_19, VAR_22, &VAR_25);

    if (VAR_32 + VAR_24 != VAR_15) {
        if (VAR_32 == -1) {
            FUNC_24(VAR_13, "CLIENT_ERROR invalid or duplicate flag");
        } else {
            FUNC_24(VAR_13, "CLIENT_ERROR incorrect number of tokens supplied");
        }
        return;
    }
    VAR_24 = VAR_7 + 2;
    VAR_13->noreply = VAR_25.no_reply;



    if (!VAR_25.locked) {
        VAR_18 = FUNC_21(VAR_16, VAR_17, VAR_13, 0, 0, !VAR_25.no_update);
    } else {

        VAR_18 = FUNC_22(VAR_16, VAR_17, VAR_13, VAR_0, &VAR_26);
    }

    if (VAR_18 == ((void*)0) && VAR_25.vivify) {

        VAR_18 = FUNC_16(VAR_16, VAR_17, 0, FUNC_28(0), 2);





        if (VAR_18 != ((void*)0)) {

            FUNC_23(FUNC_2(VAR_18), "\r\n", 2);

            FUNC_14(VAR_18, VAR_26);
            VAR_28 = 1;
        }
    }



    if (VAR_18) {
        int32_t VAR_33 = 0;




        if (VAR_18->it_flags & VAR_5) {
            *VAR_20 = 'Z';
            VAR_20--;
        }
        if (VAR_18->it_flags & VAR_4) {
            *VAR_20 = 'X';
            VAR_20--;

            if ((VAR_18->it_flags & VAR_5) == 0) {

                VAR_29 = 1;
            }
        }

        for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++) {
            switch (VAR_19[VAR_23]) {
                case 'T':
                    VAR_30 = 1;
                    if (!FUNC_29(VAR_14[VAR_24].value, &VAR_33)) {
                        VAR_31 = "CLIENT_ERROR bad tokens in command line format";
                        goto error;
                    }

                    VAR_18->exptime = FUNC_28(VAR_33);
                    VAR_24++;
                    break;
                case 'N':
                    if (VAR_28) {
                        if (!FUNC_29(VAR_14[VAR_24].value, &VAR_33)) {
                            VAR_31 = "CLIENT_ERROR bad tokens in command line format";
                            goto error;
                        }

                        VAR_18->exptime = FUNC_28(VAR_33);
                        VAR_29 = 1;
                    }
                    VAR_24++;
                    break;
                case 'R':


                    if ((VAR_18->it_flags & VAR_5) == 0
                            && !VAR_28
                            && VAR_18->exptime != 0) {
                        if (!FUNC_29(VAR_14[VAR_24].value, &VAR_33)) {
                            VAR_31 = "CLIENT_ERROR bad tokens in command line format";
                            goto error;
                        }

                        if (VAR_18->exptime - VAR_12 < VAR_33) {
                            VAR_29 = 1;
                        }
                    }
                    VAR_24++;
                    break;
                case 's':
                    *VAR_21 = ' ';
                    VAR_21 = FUNC_19(VAR_18->nbytes-2, VAR_21+1);
                    break;
                case 't':




                    *VAR_21 = ' ';
                    if (VAR_18->exptime == 0) {
                        *(VAR_21+1) = '-';
                        *(VAR_21+2) = '1';
                        VAR_21 += 3;
                    } else {
                        VAR_21 = FUNC_19(VAR_18->exptime - VAR_12, VAR_21+1);
                    }
                    break;
                case 'c':
                    *VAR_21 = ' ';
                    VAR_21 = FUNC_20(FUNC_3(VAR_18), VAR_21+1);
                    break;
                case 'v':
                    VAR_25.value = 1;
                    break;
                case 'f':
                    *VAR_21 = ' ';
                    if (FUNC_0(VAR_18) == 0) {
                        *(VAR_21+1) = '0';
                        VAR_21 += 2;
                    } else {
                        VAR_21 = FUNC_19(*((uint32_t *) FUNC_5(VAR_18)), VAR_21+1);
                    }
                    break;
                case 'l':
                    *VAR_21 = ' ';
                    VAR_21 = FUNC_19(VAR_12 - VAR_18->time, VAR_21+1);
                    break;
                case 'h':
                    *VAR_21 = ' ';
                    if (VAR_18->it_flags & VAR_2) {
                        *(VAR_21+1) = '1';
                    } else {
                        *(VAR_21+1) = '0';
                    }
                    VAR_21 += 2;
                    break;
                case 'O':
                    if (VAR_14[VAR_24].length > VAR_8) {
                        VAR_31 = "CLIENT_ERROR opaque token too long";
                        goto error;
                    }
                    *VAR_21 = ' ';
                    FUNC_23(VAR_21+1, VAR_14[VAR_24].value, VAR_14[VAR_24].length);
                    VAR_21 += VAR_14[VAR_24].length + 1;
                    VAR_24++;
                    break;
                case 'k':
                    *VAR_21 = ' ';
                    FUNC_23(VAR_21+1, FUNC_4(VAR_18), VAR_18->nkey);
                    VAR_21 += VAR_18->nkey + 1;
                    break;
            }
        }

        if (VAR_29) {

            *VAR_20 = 'W';
            VAR_20--;
            VAR_18->it_flags |= VAR_5;
        }





        *VAR_21 = '\r';
        *(VAR_21+1) = '\n';
        *(VAR_21+2) = '\0';
        VAR_21 += 2;


        *VAR_20 = ' ';
        *(VAR_20-1) = 'A';
        *(VAR_20-2) = 'V';
        VAR_20 -= 2;


        FUNC_10(VAR_13, VAR_20, VAR_21 - VAR_20);

        if (VAR_25.value) {
            if ((VAR_18->it_flags & VAR_1) == 0) {
                FUNC_10(VAR_13, FUNC_2(VAR_18), VAR_18->nbytes);
            } else {
                FUNC_9(VAR_13, VAR_18, VAR_18->nbytes);
            }

        }

        if (!VAR_13->noreply) {
            FUNC_10(VAR_13, "EN\r\n", 4);
        }
        VAR_13->item = VAR_18;

    } else {
        VAR_27 = 1;
    }

    if (VAR_25.locked) {





        if (!VAR_25.no_update && VAR_18 != ((void*)0)) {
            FUNC_13(VAR_13, VAR_18, VAR_26);
        }
        FUNC_18(VAR_26);
    }



    if (!VAR_27) {
        FUNC_26(&VAR_13->thread->stats.mutex);
        if (VAR_30) {
            VAR_13->thread->stats.touch_cmds++;
            VAR_13->thread->stats.slab_stats[FUNC_1(VAR_18)].touch_hits++;
        } else {
            VAR_13->thread->stats.lru_hits[VAR_18->slabs_clsid]++;
            VAR_13->thread->stats.get_cmds++;
        }
        FUNC_27(&VAR_13->thread->stats.mutex);

        FUNC_12(VAR_13, VAR_11);
        VAR_13->write_and_go = VAR_10;
    } else {
        FUNC_26(&VAR_13->thread->stats.mutex);
        if (VAR_30) {
            VAR_13->thread->stats.touch_cmds++;
            VAR_13->thread->stats.touch_misses++;
        } else {
            VAR_13->thread->stats.get_misses++;
            VAR_13->thread->stats.get_cmds++;
        }
        FUNC_6(VAR_13->sfd, VAR_16, VAR_17, -1, 0);
        FUNC_27(&VAR_13->thread->stats.mutex);


        FUNC_25(VAR_13, "EN");
    }
    return;
error:
    if (VAR_18 && VAR_25.locked) {
        FUNC_18(VAR_26);
    }
    FUNC_24(VAR_13, VAR_31);
}
