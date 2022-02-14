
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_7__ {int expires; int dict; } ;
typedef TYPE_2__ redisDb ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

int FUNC_3(redisDb *VAR_1, robj *VAR_2) {


    FUNC_2(((void*)0),VAR_2,FUNC_1(VAR_1->dict,VAR_2->ptr) != ((void*)0));
    return FUNC_0(VAR_1->expires,VAR_2->ptr) == VAR_0;
}
