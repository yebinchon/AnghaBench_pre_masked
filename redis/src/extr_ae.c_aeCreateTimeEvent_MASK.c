
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int aeTimeProc ;
struct TYPE_5__ {long long id; struct TYPE_5__* prev; struct TYPE_5__* next; void* clientData; int * finalizerProc; int * timeProc; int when_ms; int when_sec; } ;
typedef TYPE_1__ aeTimeEvent ;
struct TYPE_6__ {TYPE_1__* timeEventHead; int timeEventNextId; } ;
typedef TYPE_2__ aeEventLoop ;
typedef int aeEventFinalizerProc ;


 long long VAR_0 ;
 int FUNC_0 (long long,int *,int *) ;
 TYPE_1__* FUNC_1 (int) ;

long long FUNC_2(aeEventLoop *VAR_1, long long VAR_2,
        aeTimeProc *VAR_3, void *VAR_4,
        aeEventFinalizerProc *VAR_5)
{
    long long VAR_6 = VAR_1->timeEventNextId++;
    aeTimeEvent *VAR_7;

    VAR_7 = FUNC_1(sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) return VAR_0;
    VAR_7->id = VAR_6;
    FUNC_0(VAR_2,&VAR_7->when_sec,&VAR_7->when_ms);
    VAR_7->timeProc = VAR_3;
    VAR_7->finalizerProc = VAR_5;
    VAR_7->clientData = VAR_4;
    VAR_7->prev = ((void*)0);
    VAR_7->next = VAR_1->timeEventHead;
    if (VAR_7->next)
        VAR_7->next->prev = VAR_7;
    VAR_1->timeEventHead = VAR_7;
    return VAR_6;
}
