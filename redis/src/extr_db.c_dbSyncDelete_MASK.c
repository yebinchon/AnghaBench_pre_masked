
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_8__ {int dict; int expires; } ;
typedef TYPE_2__ redisDb ;
struct TYPE_9__ {scalar_t__ cluster_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(redisDb *VAR_2, robj *VAR_3) {


    if (FUNC_1(VAR_2->expires) > 0) FUNC_0(VAR_2->expires,VAR_3->ptr);
    if (FUNC_0(VAR_2->dict,VAR_3->ptr) == VAR_0) {
        if (VAR_1.cluster_enabled) FUNC_2(VAR_3);
        return 1;
    } else {
        return 0;
    }
}
