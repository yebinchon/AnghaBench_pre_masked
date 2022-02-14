
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* link; } ;
typedef TYPE_2__ sentinelRedisInstance ;
typedef int portstr ;
struct TYPE_6__ {int pending_commands; int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*,char*,int ,...) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,char*) ;

int FUNC_4(sentinelRedisInstance *VAR_3, char *VAR_4, int VAR_5) {
    char VAR_6[32];
    int VAR_7;

    FUNC_0(VAR_6,sizeof(VAR_6),VAR_5);



    if (VAR_4 == ((void*)0)) {
        VAR_4 = "NO";
        FUNC_1(VAR_6,"ONE",4);
    }
    VAR_7 = FUNC_2(VAR_3->link->cc,
        VAR_2, VAR_3, "%s",
        FUNC_3(VAR_3,"MULTI"));
    if (VAR_7 == VAR_0) return VAR_7;
    VAR_3->link->pending_commands++;

    VAR_7 = FUNC_2(VAR_3->link->cc,
        VAR_2, VAR_3, "%s %s %s",
        FUNC_3(VAR_3,"SLAVEOF"),
        VAR_4, VAR_6);
    if (VAR_7 == VAR_0) return VAR_7;
    VAR_3->link->pending_commands++;

    VAR_7 = FUNC_2(VAR_3->link->cc,
        VAR_2, VAR_3, "%s REWRITE",
        FUNC_3(VAR_3,"CONFIG"));
    if (VAR_7 == VAR_0) return VAR_7;
    VAR_3->link->pending_commands++;






    VAR_7 = FUNC_2(VAR_3->link->cc,
        VAR_2, VAR_3, "%s KILL TYPE normal",
        FUNC_3(VAR_3,"CLIENT"));
    if (VAR_7 == VAR_0) return VAR_7;
    VAR_3->link->pending_commands++;

    VAR_7 = FUNC_2(VAR_3->link->cc,
        VAR_2, VAR_3, "%s",
        FUNC_3(VAR_3,"EXEC"));
    if (VAR_7 == VAR_0) return VAR_7;
    VAR_3->link->pending_commands++;

    return VAR_1;
}
