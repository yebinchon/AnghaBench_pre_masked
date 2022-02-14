
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redisCommand {int flags; int keystep; int lastkey; int firstkey; scalar_t__ getkeys_proc; int arity; int name; } ;
typedef int client ;


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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct redisCommand*) ;
 scalar_t__ FUNC_3 (int *,struct redisCommand*,int ,char*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,void*,int) ;

void FUNC_9(client *VAR_16, struct redisCommand *VAR_17) {
    if (!VAR_17) {
        FUNC_6(VAR_16);
    } else {

        FUNC_0(VAR_16, 7);
        FUNC_1(VAR_16, VAR_17->name);
        FUNC_5(VAR_16, VAR_17->arity);

        int VAR_18 = 0;
        void *VAR_19 = FUNC_4(VAR_16);
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_15, "write");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_10, "readonly");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_2, "denyoom");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_0, "admin");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_8, "pubsub");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_7, "noscript");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_9, "random");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_13,"sort_for_script");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_4, "loading");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_14, "stale");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_11, "skip_monitor");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_12, "skip_slowlog");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_1, "asking");
        VAR_18 += FUNC_3(VAR_16,VAR_17,VAR_3, "fast");
        if ((VAR_17->getkeys_proc && !(VAR_17->flags & VAR_5)) ||
            VAR_17->flags & VAR_6)
        {
            FUNC_7(VAR_16, "movablekeys");
            VAR_18 += 1;
        }
        FUNC_8(VAR_16, VAR_19, VAR_18);

        FUNC_5(VAR_16, VAR_17->firstkey);
        FUNC_5(VAR_16, VAR_17->lastkey);
        FUNC_5(VAR_16, VAR_17->keystep);

        FUNC_2(VAR_16,VAR_17);
    }
}
