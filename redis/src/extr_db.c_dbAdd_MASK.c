
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sds ;
struct TYPE_12__ {scalar_t__ type; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_13__ {int dict; } ;
typedef TYPE_2__ redisDb ;
struct TYPE_14__ {scalar_t__ cluster_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(redisDb *VAR_4, robj *VAR_5, robj *VAR_6) {
    sds VAR_7 = FUNC_1(VAR_5->ptr);
    int VAR_8 = FUNC_0(VAR_4->dict, VAR_7, VAR_6);

    FUNC_2(((void*)0),VAR_5,VAR_8 == VAR_0);
    if (VAR_6->type == VAR_1 ||
        VAR_6->type == VAR_2)
        FUNC_3(VAR_4, VAR_5);
    if (VAR_3.cluster_enabled) FUNC_4(VAR_5);
}
