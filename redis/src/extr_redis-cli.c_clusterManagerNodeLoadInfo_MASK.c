
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* sds ;
struct TYPE_16__ {char* str; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_15__ {int flags; int migrating_count; int importing_count; int* slots; void* ping_recv; void* ping_sent; void* current_epoch; int * flags_str; void* replicate; void* name; int * friends; scalar_t__ dirty; scalar_t__ slots_count; struct TYPE_15__** importing; struct TYPE_15__** migrating; } ;
typedef TYPE_1__ clusterManagerNode ;


 TYPE_2__* FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,char**) ;
 TYPE_1__* FUNC_5 (void*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 void* FUNC_11 () ;
 int FUNC_12 (void*) ;
 void* FUNC_13 (char*) ;
 int VAR_7 ;
 char* FUNC_14 (char*,char) ;
 scalar_t__ FUNC_15 (TYPE_1__*,char*) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (char*,char) ;
 char* FUNC_18 (char*,char*) ;
 void* FUNC_19 (TYPE_1__**,int) ;

__attribute__((used)) static int FUNC_20(clusterManagerNode *VAR_8, int VAR_9,
                                      char **VAR_10)
{
    redisReply *VAR_11 = FUNC_0(VAR_8, "CLUSTER NODES");
    int VAR_12 = 1;
    *VAR_10 = ((void*)0);
    if (!FUNC_4(VAR_8, VAR_11, VAR_10)) {
        VAR_12 = 0;
        goto cleanup;
    }
    int VAR_13 = (VAR_9 & VAR_6);
    char *VAR_14 = VAR_11->str, *VAR_15, *VAR_16;
    while ((VAR_15 = FUNC_18(VAR_14, "\n")) != ((void*)0)) {
        *VAR_15 = '\0';
        VAR_16 = VAR_14;
        VAR_14 = VAR_15 + 1;
        char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20 = ((void*)0),
             *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23 = ((void*)0),
             *VAR_24 = ((void*)0);
        FUNC_1(VAR_24);
        int VAR_25 = 0;
        while ((VAR_15 = FUNC_14(VAR_16, ' ')) != ((void*)0)) {
            *VAR_15 = '\0';
            char *VAR_26 = VAR_16;
            VAR_16 = VAR_15 + 1;
            switch(VAR_25++){
            case 0: VAR_17 = VAR_26; break;
            case 1: VAR_18 = VAR_26; break;
            case 2: VAR_19 = VAR_26; break;
            case 3: VAR_20 = VAR_26; break;
            case 4: VAR_21 = VAR_26; break;
            case 5: VAR_22 = VAR_26; break;
            case 6: VAR_23 = VAR_26; break;
            case 7: VAR_24 = VAR_26; break;
            }
            if (VAR_25 == 8) break;
        }
        if (!VAR_19) {
            VAR_12 = 0;
            goto cleanup;
        }
        int VAR_27 = (FUNC_18(VAR_19, "myself") != ((void*)0));
        clusterManagerNode *VAR_28 = ((void*)0);
        if (VAR_27) {
            VAR_8->flags |= VAR_3;
            VAR_28 = VAR_8;
            FUNC_6(VAR_8);
            if (VAR_25 == 8) {
                int VAR_29 = FUNC_16(VAR_16);
                while (VAR_29 > 0) {
                    VAR_15 = FUNC_14(VAR_16, ' ');
                    if (VAR_15 == ((void*)0)) VAR_15 = VAR_16 + VAR_29;
                    VAR_29 -= (VAR_15 - VAR_16);

                    char *VAR_30 = VAR_16;
                    *VAR_15 = '\0';
                    if (VAR_29) {
                        VAR_16 = VAR_15 + 1;
                        VAR_29--;
                    } else VAR_16 = VAR_15;
                    char *VAR_31 = ((void*)0);
                    if (VAR_30[0] == '[') {
                        VAR_30++;
                        if ((VAR_15 = FUNC_18(VAR_30, "->-"))) {
                            *VAR_15 = '\0';
                            VAR_15 += 3;
                            char *VAR_32 = FUNC_14(VAR_15, ']');
                            if (VAR_32) *VAR_32 = '\0';
                            sds VAR_33 = FUNC_13(VAR_30);
                            sds VAR_34 = FUNC_13(VAR_15);
                            VAR_8->migrating_count += 2;
                            VAR_8->migrating = FUNC_19(VAR_8->migrating,
                                (VAR_8->migrating_count * sizeof(sds)));
                            VAR_8->migrating[VAR_8->migrating_count - 2] =
                                VAR_33;
                            VAR_8->migrating[VAR_8->migrating_count - 1] =
                                VAR_34;
                        } else if ((VAR_15 = FUNC_18(VAR_30, "-<-"))) {
                            *VAR_15 = '\0';
                            VAR_15 += 3;
                            char *VAR_35 = FUNC_14(VAR_15, ']');
                            if (VAR_35) *VAR_35 = '\0';
                            sds VAR_36 = FUNC_13(VAR_30);
                            sds VAR_37 = FUNC_13(VAR_15);
                            VAR_8->importing_count += 2;
                            VAR_8->importing = FUNC_19(VAR_8->importing,
                                (VAR_8->importing_count * sizeof(sds)));
                            VAR_8->importing[VAR_8->importing_count - 2] =
                                VAR_36;
                            VAR_8->importing[VAR_8->importing_count - 1] =
                                VAR_37;
                        }
                    } else if ((VAR_31 = FUNC_14(VAR_30, '-')) != ((void*)0)) {
                        VAR_15 = VAR_31;
                        int VAR_38, VAR_39;
                        *VAR_15 = '\0';
                        VAR_38 = FUNC_2(VAR_30);
                        VAR_39 = FUNC_2(VAR_15 + 1);
                        VAR_8->slots_count += (VAR_39 - (VAR_38 - 1));
                        while (VAR_38 <= VAR_39) VAR_8->slots[VAR_38++] = 1;
                    } else if (VAR_15 > VAR_30) {
                        VAR_8->slots[FUNC_2(VAR_30)] = 1;
                        VAR_8->slots_count++;
                    }
                }
            }
            VAR_8->dirty = 0;
        } else if (!VAR_13) {
            if (!(VAR_8->flags & VAR_3)) continue;
            else break;
        } else {
            if (VAR_18 == ((void*)0)) {
                FUNC_7(VAR_7, "Error: invalid CLUSTER NODES reply\n");
                VAR_12 = 0;
                goto cleanup;
            }
            char *VAR_40 = FUNC_17(VAR_18, '@');
            if (VAR_40 != ((void*)0)) *VAR_40 = '\0';
            VAR_40 = FUNC_17(VAR_18, ':');
            if (VAR_40 == ((void*)0)) {
                FUNC_7(VAR_7, "Error: invalid CLUSTER NODES reply\n");
                VAR_12 = 0;
                goto cleanup;
            }
            *VAR_40 = '\0';
            int VAR_41 = FUNC_2(++VAR_40);
            VAR_28 = FUNC_5(FUNC_13(VAR_18), VAR_41);
            VAR_28->flags |= VAR_2;
            if (VAR_8->friends == ((void*)0)) VAR_8->friends = FUNC_11();
            FUNC_10(VAR_8->friends, VAR_28);
        }
        if (VAR_17 != ((void*)0)) {
            if (VAR_28->name) FUNC_12(VAR_28->name);
            VAR_28->name = FUNC_13(VAR_17);
        }
        if (VAR_28->flags_str != ((void*)0))
            FUNC_8(VAR_28->flags_str);
        VAR_28->flags_str = FUNC_11();
        int VAR_42;
        while ((VAR_42 = FUNC_16(VAR_19)) > 0) {
            sds VAR_43 = ((void*)0);
            char *VAR_44 = FUNC_14(VAR_19, ',');
            if (VAR_44) {
                *VAR_44 = '\0';
                VAR_43 = FUNC_13(VAR_19);
                VAR_19 = VAR_44 + 1;
            } else {
                VAR_43 = FUNC_13(VAR_19);
                VAR_19 += VAR_42;
            }
            if (FUNC_15(VAR_43, "noaddr") == 0)
                VAR_28->flags |= VAR_4;
            else if (FUNC_15(VAR_43, "disconnected") == 0)
                VAR_28->flags |= VAR_0;
            else if (FUNC_15(VAR_43, "fail") == 0)
                VAR_28->flags |= VAR_1;
            else if (FUNC_15(VAR_43, "slave") == 0) {
                VAR_28->flags |= VAR_5;
                if (VAR_20 != ((void*)0)) {
                    if (VAR_28->replicate) FUNC_12(VAR_28->replicate);
                    VAR_28->replicate = FUNC_13(VAR_20);
                }
            }
            FUNC_10(VAR_28->flags_str, VAR_43);
        }
        if (VAR_23 != ((void*)0))
            VAR_28->current_epoch = FUNC_3(VAR_23);
        if (VAR_21 != ((void*)0)) VAR_28->ping_sent = FUNC_3(VAR_21);
        if (VAR_22 != ((void*)0)) VAR_28->ping_recv = FUNC_3(VAR_22);
        if (!VAR_13 && VAR_27) break;
    }
cleanup:
    if (VAR_11) FUNC_9(VAR_11);
    return VAR_12;
}
