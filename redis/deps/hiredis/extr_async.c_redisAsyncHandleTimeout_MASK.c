
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; int err; } ;
typedef TYPE_1__ redisContext ;
typedef int redisCallback ;
struct TYPE_11__ {int * head; } ;
struct TYPE_10__ {TYPE_5__ replies; int (* onConnect ) (TYPE_2__*,int ) ;TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(redisAsyncContext *VAR_4) {
    redisContext *VAR_5 = &(VAR_4->c);
    redisCallback VAR_6;

    if ((VAR_5->flags & VAR_0) && VAR_4->replies.head == ((void*)0)) {

        return;
    }

    if (!VAR_5->err) {
        FUNC_2(VAR_5, VAR_2, "Timeout");
    }

    if (!(VAR_5->flags & VAR_0) && VAR_4->onConnect) {
        VAR_4->onConnect(VAR_4, VAR_1);
    }

    while (FUNC_3(&VAR_4->replies, &VAR_6) == VAR_3) {
        FUNC_1(VAR_4, &VAR_6, ((void*)0));
    }





    FUNC_0(VAR_4);
}
