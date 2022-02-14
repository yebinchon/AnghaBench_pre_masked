
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int refcount; scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
typedef int redisDb ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

robj *FUNC_6(redisDb *VAR_2, robj *VAR_3, robj *VAR_4) {
    FUNC_5(VAR_4->type == VAR_1);
    if (VAR_4->refcount != 1 || VAR_4->encoding != VAR_0) {
        robj *VAR_5 = FUNC_3(VAR_4);
        VAR_4 = FUNC_0(VAR_5->ptr, FUNC_4(VAR_5->ptr));
        FUNC_2(VAR_5);
        FUNC_1(VAR_2,VAR_3,VAR_4);
    }
    return VAR_4;
}
