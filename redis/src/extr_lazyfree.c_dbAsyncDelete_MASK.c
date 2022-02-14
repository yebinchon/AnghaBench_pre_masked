
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int refcount; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {int dict; int expires; } ;
typedef TYPE_2__ redisDb ;
typedef int dictEntry ;
struct TYPE_12__ {scalar_t__ cluster_enabled; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ) ;
 size_t FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(redisDb *VAR_4, robj *VAR_5) {


    if (FUNC_6(VAR_4->expires) > 0) FUNC_2(VAR_4->expires,VAR_5->ptr);




    dictEntry *VAR_6 = FUNC_7(VAR_4->dict,VAR_5->ptr);
    if (VAR_6) {
        robj *VAR_7 = FUNC_4(VAR_6);
        size_t VAR_8 = FUNC_8(VAR_7);
        if (VAR_8 > VAR_1 && VAR_7->refcount == 1) {
            FUNC_0(VAR_2,1);
            FUNC_1(VAR_0,VAR_7,((void*)0),((void*)0));
            FUNC_5(VAR_4->dict,VAR_6,((void*)0));
        }
    }



    if (VAR_6) {
        FUNC_3(VAR_4->dict,VAR_6);
        if (VAR_3.cluster_enabled) FUNC_9(VAR_5);
        return 1;
    } else {
        return 0;
    }
}
