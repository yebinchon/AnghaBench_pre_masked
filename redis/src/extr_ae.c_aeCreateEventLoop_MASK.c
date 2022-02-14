
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int aeFiredEvent ;
typedef int aeFileEvent ;
struct TYPE_5__ {int setsize; int maxfd; struct TYPE_5__* fired; struct TYPE_5__* events; int mask; scalar_t__ flags; int * aftersleep; int * beforesleep; scalar_t__ stop; scalar_t__ timeEventNextId; int * timeEventHead; int lastTime; } ;
typedef TYPE_1__ aeEventLoop ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int) ;

aeEventLoop *FUNC_4(int VAR_1) {
    aeEventLoop *VAR_2;
    int VAR_3;

    if ((VAR_2 = FUNC_3(sizeof(*VAR_2))) == ((void*)0)) goto err;
    VAR_2->events = FUNC_3(sizeof(aeFileEvent)*VAR_1);
    VAR_2->fired = FUNC_3(sizeof(aeFiredEvent)*VAR_1);
    if (VAR_2->events == ((void*)0) || VAR_2->fired == ((void*)0)) goto err;
    VAR_2->setsize = VAR_1;
    VAR_2->lastTime = FUNC_1(((void*)0));
    VAR_2->timeEventHead = ((void*)0);
    VAR_2->timeEventNextId = 0;
    VAR_2->stop = 0;
    VAR_2->maxfd = -1;
    VAR_2->beforesleep = ((void*)0);
    VAR_2->aftersleep = ((void*)0);
    VAR_2->flags = 0;
    if (FUNC_0(VAR_2) == -1) goto err;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        VAR_2->events[VAR_3].mask = VAR_0;
    return VAR_2;

err:
    if (VAR_2) {
        FUNC_2(VAR_2->events);
        FUNC_2(VAR_2->fired);
        FUNC_2(VAR_2);
    }
    return ((void*)0);
}
