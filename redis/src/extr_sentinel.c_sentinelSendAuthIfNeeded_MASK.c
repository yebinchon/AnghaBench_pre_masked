
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; char* auth_pass; TYPE_1__* link; TYPE_2__* master; } ;
typedef TYPE_3__ sentinelRedisInstance ;
typedef int redisAsyncContext ;
struct TYPE_8__ {char* auth_pass; } ;
struct TYPE_7__ {int pending_commands; } ;


 char* FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_3__*,char*,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*) ;

void FUNC_3(sentinelRedisInstance *VAR_5, redisAsyncContext *VAR_6) {
    char *VAR_7 = ((void*)0);

    if (VAR_5->flags & VAR_1) {
        VAR_7 = VAR_5->auth_pass;
    } else if (VAR_5->flags & VAR_3) {
        VAR_7 = VAR_5->master->auth_pass;
    } else if (VAR_5->flags & VAR_2) {
        VAR_7 = FUNC_0();
    }

    if (VAR_7) {
        if (FUNC_1(VAR_6, VAR_4, VAR_5, "%s %s",
            FUNC_2(VAR_5,"AUTH"),
            VAR_7) == VAR_0) VAR_5->link->pending_commands++;
    }
}
