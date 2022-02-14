
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct redisCommand {int flags; } ;
typedef char* sds ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (char**,int) ;
 char** FUNC_2 (char*,int*) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(struct redisCommand *VAR_23, char *VAR_24) {
    int VAR_25;
    sds *VAR_26;


    VAR_26 = FUNC_2(VAR_24,&VAR_25);
    if (VAR_26 == ((void*)0)) return VAR_21;

    for (int VAR_27 = 0; VAR_27 < VAR_25; VAR_27++) {
        char *VAR_28 = VAR_26[VAR_27];
        if (!FUNC_3(VAR_28,"write")) {
            VAR_23->flags |= VAR_20|VAR_8;
        } else if (!FUNC_3(VAR_28,"read-only")) {
            VAR_23->flags |= VAR_15|VAR_6;
        } else if (!FUNC_3(VAR_28,"use-memory")) {
            VAR_23->flags |= VAR_9;
        } else if (!FUNC_3(VAR_28,"admin")) {
            VAR_23->flags |= VAR_0|VAR_2|VAR_3;
        } else if (!FUNC_3(VAR_28,"pub-sub")) {
            VAR_23->flags |= VAR_13|VAR_5;
        } else if (!FUNC_3(VAR_28,"no-script")) {
            VAR_23->flags |= VAR_12;
        } else if (!FUNC_3(VAR_28,"random")) {
            VAR_23->flags |= VAR_14;
        } else if (!FUNC_3(VAR_28,"to-sort")) {
            VAR_23->flags |= VAR_18;
        } else if (!FUNC_3(VAR_28,"ok-loading")) {
            VAR_23->flags |= VAR_11;
        } else if (!FUNC_3(VAR_28,"ok-stale")) {
            VAR_23->flags |= VAR_19;
        } else if (!FUNC_3(VAR_28,"no-monitor")) {
            VAR_23->flags |= VAR_16;
        } else if (!FUNC_3(VAR_28,"no-slowlog")) {
            VAR_23->flags |= VAR_17;
        } else if (!FUNC_3(VAR_28,"cluster-asking")) {
            VAR_23->flags |= VAR_1;
        } else if (!FUNC_3(VAR_28,"fast")) {
            VAR_23->flags |= VAR_10 | VAR_4;
        } else {

            uint64_t VAR_29;
            if (VAR_28[0] == '@' &&
                (VAR_29 = FUNC_0(VAR_28+1)) != 0)
            {
                VAR_23->flags |= VAR_29;
            } else {
                FUNC_1(VAR_26,VAR_25);
                return VAR_21;
            }
        }
    }

    if (!(VAR_23->flags & VAR_4)) VAR_23->flags |= VAR_7;

    FUNC_1(VAR_26,VAR_25);
    return VAR_22;
}
