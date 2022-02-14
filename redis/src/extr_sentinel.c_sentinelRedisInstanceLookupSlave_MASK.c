
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int slaves; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int sds ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

sentinelRedisInstance *FUNC_5(
                sentinelRedisInstance *VAR_2, char *VAR_3, int VAR_4)
{
    sds VAR_5;
    sentinelRedisInstance *VAR_6;
    char VAR_7[VAR_0];

    FUNC_4(VAR_2->flags & VAR_1);
    FUNC_0(VAR_7,sizeof(VAR_7),VAR_3,VAR_4);
    VAR_5 = FUNC_3(VAR_7);
    VAR_6 = FUNC_1(VAR_2->slaves,VAR_5);
    FUNC_2(VAR_5);
    return VAR_6;
}
