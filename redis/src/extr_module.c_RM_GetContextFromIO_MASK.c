
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * client; int module; } ;
struct TYPE_9__ {TYPE_3__* ctx; TYPE_1__* type; } ;
struct TYPE_8__ {int module; } ;
typedef TYPE_2__ RedisModuleIO ;
typedef TYPE_3__ RedisModuleCtx ;


 TYPE_3__ VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

RedisModuleCtx *FUNC_1(RedisModuleIO *VAR_1) {
    if (VAR_1->ctx) return VAR_1->ctx;
    RedisModuleCtx VAR_2 = VAR_0;
    VAR_1->ctx = FUNC_0(sizeof(RedisModuleCtx));
    *(VAR_1->ctx) = VAR_2;
    VAR_1->ctx->module = VAR_1->type->module;
    VAR_1->ctx->client = ((void*)0);
    return VAR_1->ctx;
}
