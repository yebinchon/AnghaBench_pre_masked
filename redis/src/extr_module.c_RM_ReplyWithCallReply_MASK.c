
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
typedef int client ;
struct TYPE_3__ {int protolen; int proto; } ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ RedisModuleCallReply ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(RedisModuleCtx *VAR_1, RedisModuleCallReply *VAR_2) {
    client *VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0)) return VAR_0;
    sds VAR_4 = FUNC_2(VAR_2->proto, VAR_2->protolen);
    FUNC_0(VAR_3,VAR_4);
    return VAR_0;
}
