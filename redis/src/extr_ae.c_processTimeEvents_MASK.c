
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_9__ {long when_sec; long long id; long when_ms; int (* timeProc ) (TYPE_3__*,long long,int ) ;struct TYPE_9__* next; int clientData; int (* finalizerProc ) (TYPE_3__*,int ) ;TYPE_1__* prev; } ;
typedef TYPE_2__ aeTimeEvent ;
struct TYPE_10__ {scalar_t__ lastTime; int timeEventNextId; TYPE_2__* timeEventHead; } ;
typedef TYPE_3__ aeEventLoop ;
struct TYPE_8__ {TYPE_2__* next; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,long*,long*) ;
 int FUNC_1 (long*,long*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,long long,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(aeEventLoop *VAR_2) {
    int VAR_3 = 0;
    aeTimeEvent *VAR_4;
    long long VAR_5;
    time_t VAR_6 = FUNC_4(((void*)0));
    if (VAR_6 < VAR_2->lastTime) {
        VAR_4 = VAR_2->timeEventHead;
        while(VAR_4) {
            VAR_4->when_sec = 0;
            VAR_4 = VAR_4->next;
        }
    }
    VAR_2->lastTime = VAR_6;

    VAR_4 = VAR_2->timeEventHead;
    VAR_5 = VAR_2->timeEventNextId-1;
    while(VAR_4) {
        long VAR_7, VAR_8;
        long long VAR_9;


        if (VAR_4->id == VAR_0) {
            aeTimeEvent *VAR_10 = VAR_4->next;
            if (VAR_4->prev)
                VAR_4->prev->next = VAR_4->next;
            else
                VAR_2->timeEventHead = VAR_4->next;
            if (VAR_4->next)
                VAR_4->next->prev = VAR_4->prev;
            if (VAR_4->finalizerProc)
                VAR_4->finalizerProc(VAR_2, VAR_4->clientData);
            FUNC_5(VAR_4);
            VAR_4 = VAR_10;
            continue;
        }






        if (VAR_4->id > VAR_5) {
            VAR_4 = VAR_4->next;
            continue;
        }
        FUNC_1(&VAR_7, &VAR_8);
        if (VAR_7 > VAR_4->when_sec ||
            (VAR_7 == VAR_4->when_sec && VAR_8 >= VAR_4->when_ms))
        {
            int VAR_11;

            VAR_9 = VAR_4->id;
            VAR_11 = VAR_4->timeProc(VAR_2, VAR_9, VAR_4->clientData);
            VAR_3++;
            if (VAR_11 != VAR_1) {
                FUNC_0(VAR_11,&VAR_4->when_sec,&VAR_4->when_ms);
            } else {
                VAR_4->id = VAR_0;
            }
        }
        VAR_4 = VAR_4->next;
    }
    return VAR_3;
}
