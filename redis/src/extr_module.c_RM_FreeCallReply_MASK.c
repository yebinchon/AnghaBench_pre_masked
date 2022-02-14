
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ctx; } ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ RedisModuleCallReply ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

void FUNC_2(RedisModuleCallReply *VAR_1) {

    RedisModuleCtx *VAR_2 = VAR_1->ctx;
    FUNC_0(VAR_1,0);
    FUNC_1(VAR_2,VAR_0,VAR_1);
}
