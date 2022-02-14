
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_15__ {int * module; } ;
struct TYPE_14__ {scalar_t__ id; } ;
struct TYPE_13__ {int * callback; TYPE_3__ event; int * module; } ;
typedef TYPE_2__ RedisModuleEventListener ;
typedef int * RedisModuleEventCallback ;
typedef TYPE_3__ RedisModuleEvent ;
typedef TYPE_4__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int) ;

int FUNC_6(RedisModuleCtx *VAR_3, RedisModuleEvent VAR_4, RedisModuleEventCallback VAR_5) {
    RedisModuleEventListener *VAR_6;


    if (VAR_3->module == ((void*)0)) return VAR_0;


    listIter VAR_7;
    listNode *VAR_8;
    FUNC_3(VAR_2,&VAR_7);
    while((VAR_8 = FUNC_2(&VAR_7))) {
        VAR_6 = VAR_8->value;
        if (VAR_6->module == VAR_3->module && VAR_6->event.id == VAR_4.id)
            break;
    }


    if (VAR_8) {
        if (VAR_5 == ((void*)0)) {
            FUNC_1(VAR_2,VAR_8);
            FUNC_4(VAR_6);
        } else {
            VAR_6->callback = VAR_5;
        }
        return VAR_1;
    }


    VAR_6 = FUNC_5(sizeof(*VAR_6));
    VAR_6->module = VAR_3->module;
    VAR_6->event = VAR_4;
    VAR_6->callback = VAR_5;
    FUNC_0(VAR_2,VAR_6);
    return VAR_1;
}
