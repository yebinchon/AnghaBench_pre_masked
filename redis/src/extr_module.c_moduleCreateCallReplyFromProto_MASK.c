
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int* sds ;
struct TYPE_4__ {int* proto; int type; int flags; int protolen; int * ctx; } ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ RedisModuleCallReply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 TYPE_1__* FUNC_1 (int) ;

RedisModuleCallReply *FUNC_2(RedisModuleCtx *VAR_7, sds VAR_8) {
    RedisModuleCallReply *VAR_9 = FUNC_1(sizeof(*VAR_9));
    VAR_9->ctx = VAR_7;
    VAR_9->proto = VAR_8;
    VAR_9->protolen = FUNC_0(VAR_8);
    VAR_9->flags = VAR_0;
    switch(VAR_8[0]) {
    case '$':
    case '+': VAR_9->type = VAR_5; break;
    case '-': VAR_9->type = VAR_2; break;
    case ':': VAR_9->type = VAR_3; break;
    case '*': VAR_9->type = VAR_1; break;
    default: VAR_9->type = VAR_6; break;
    }
    if ((VAR_8[0] == '*' || VAR_8[0] == '$') && VAR_8[1] == '-')
        VAR_9->type = VAR_4;
    return VAR_9;
}
