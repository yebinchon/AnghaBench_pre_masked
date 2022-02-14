
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ robj ;
typedef int rio ;
struct TYPE_13__ {int value; TYPE_3__* type; } ;
typedef TYPE_2__ moduleValue ;
struct TYPE_14__ {int (* aof_rewrite ) (TYPE_4__*,TYPE_1__*,int ) ;} ;
typedef TYPE_3__ moduleType ;
struct TYPE_15__ {scalar_t__ error; scalar_t__ ctx; } ;
typedef TYPE_4__ RedisModuleIO ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__,TYPE_3__*,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(rio *VAR_0, robj *VAR_1, robj *VAR_2) {
    RedisModuleIO VAR_3;
    moduleValue *VAR_4 = VAR_2->ptr;
    moduleType *VAR_5 = VAR_4->type;
    FUNC_1(VAR_3,VAR_5,VAR_0,VAR_1);
    VAR_5->aof_rewrite(&VAR_3,VAR_1,VAR_4->value);
    if (VAR_3.ctx) {
        FUNC_0(VAR_3.ctx);
        FUNC_3(VAR_3.ctx);
    }
    return VAR_3.error ? 0 : 1;
}
