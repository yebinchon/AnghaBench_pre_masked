
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sentinelRedisInstance ;
typedef int sds ;
struct TYPE_2__ {int masters; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_0 ;

sentinelRedisInstance *FUNC_3(char *VAR_1) {
    sentinelRedisInstance *VAR_2;
    sds VAR_3 = FUNC_2(VAR_1);

    VAR_2 = FUNC_0(VAR_0.masters,VAR_3);
    FUNC_1(VAR_3);
    return VAR_2;
}
