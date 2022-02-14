
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_7__ {int dict; int expires; } ;
typedef TYPE_2__ redisDb ;
typedef int dictEntry ;


 int * FUNC_0 (int ,int ) ;
 long long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

long long FUNC_4(redisDb *VAR_0, robj *VAR_1) {
    dictEntry *VAR_2;


    if (FUNC_2(VAR_0->expires) == 0 ||
       (VAR_2 = FUNC_0(VAR_0->expires,VAR_1->ptr)) == ((void*)0)) return -1;



    FUNC_3(((void*)0),VAR_1,FUNC_0(VAR_0->dict,VAR_1->ptr) != ((void*)0));
    return FUNC_1(VAR_2);
}
