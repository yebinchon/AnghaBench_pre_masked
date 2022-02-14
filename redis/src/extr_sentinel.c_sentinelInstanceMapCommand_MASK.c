
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int renamed_commands; struct TYPE_3__* master; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int sds ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

char *FUNC_3(sentinelRedisInstance *VAR_0, char *VAR_1) {
    sds VAR_2 = FUNC_2(VAR_1);
    if (VAR_0->master) VAR_0 = VAR_0->master;
    char *VAR_3 = FUNC_0(VAR_0->renamed_commands, VAR_2);
    FUNC_1(VAR_2);
    return VAR_3 ? VAR_3 : VAR_1;
}
