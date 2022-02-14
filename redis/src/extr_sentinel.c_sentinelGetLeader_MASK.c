
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int flags; char* leader; scalar_t__ leader_epoch; scalar_t__ quorum; int * sentinels; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_7__ {scalar_t__ current_epoch; char* myid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_11 (int *,char*) ;
 char* FUNC_12 (TYPE_1__*,scalar_t__,char*,scalar_t__*) ;
 int FUNC_13 (int) ;

char *FUNC_14(sentinelRedisInstance *VAR_4, uint64_t VAR_5) {
    dict *VAR_6;
    dictIterator *VAR_7;
    dictEntry *VAR_8;
    unsigned int VAR_9 = 0, VAR_10;
    char *VAR_11;
    char *VAR_12 = ((void*)0);
    uint64_t VAR_13;
    uint64_t VAR_14 = 0;

    FUNC_13(VAR_4->flags & (VAR_1|VAR_0));
    VAR_6 = FUNC_0(&VAR_2,((void*)0));

    VAR_9 = FUNC_8(VAR_4->sentinels)+1;


    VAR_7 = FUNC_1(VAR_4->sentinels);
    while((VAR_8 = FUNC_5(VAR_7)) != ((void*)0)) {
        sentinelRedisInstance *VAR_15 = FUNC_4(VAR_8);
        if (VAR_15->leader != ((void*)0) && VAR_15->leader_epoch == VAR_3.current_epoch)
            FUNC_11(VAR_6,VAR_15->leader);
    }
    FUNC_7(VAR_7);




    VAR_7 = FUNC_1(VAR_6);
    while((VAR_8 = FUNC_5(VAR_7)) != ((void*)0)) {
        uint64_t VAR_16 = FUNC_3(VAR_8);

        if (VAR_16 > VAR_14) {
            VAR_14 = VAR_16;
            VAR_12 = FUNC_2(VAR_8);
        }
    }
    FUNC_7(VAR_7);




    if (VAR_12)
        VAR_11 = FUNC_12(VAR_4,VAR_5,VAR_12,&VAR_13);
    else
        VAR_11 = FUNC_12(VAR_4,VAR_5,VAR_3.myid,&VAR_13);

    if (VAR_11 && VAR_13 == VAR_5) {
        uint64_t VAR_17 = FUNC_11(VAR_6,VAR_11);

        if (VAR_17 > VAR_14) {
            VAR_14 = VAR_17;
            VAR_12 = VAR_11;
        }
    }

    VAR_10 = VAR_9/2+1;
    if (VAR_12 && (VAR_14 < VAR_10 || VAR_14 < VAR_4->quorum))
        VAR_12 = ((void*)0);

    VAR_12 = VAR_12 ? FUNC_10(VAR_12) : ((void*)0);
    FUNC_9(VAR_11);
    FUNC_6(VAR_6);
    return VAR_12;
}
