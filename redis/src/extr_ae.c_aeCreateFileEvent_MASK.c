
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int aeFileProc ;
struct TYPE_5__ {int mask; void* clientData; int * wfileProc; int * rfileProc; } ;
typedef TYPE_1__ aeFileEvent ;
struct TYPE_6__ {int setsize; int maxfd; TYPE_1__* events; } ;
typedef TYPE_2__ aeEventLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int VAR_5 ;

int FUNC_1(aeEventLoop *VAR_6, int VAR_7, int VAR_8,
        aeFileProc *VAR_9, void *VAR_10)
{
    if (VAR_7 >= VAR_6->setsize) {
        VAR_5 = VAR_4;
        return VAR_0;
    }
    aeFileEvent *VAR_11 = &VAR_6->events[VAR_7];

    if (FUNC_0(VAR_6, VAR_7, VAR_8) == -1)
        return VAR_0;
    VAR_11->mask |= VAR_8;
    if (VAR_8 & VAR_2) VAR_11->rfileProc = VAR_9;
    if (VAR_8 & VAR_3) VAR_11->wfileProc = VAR_9;
    VAR_11->clientData = VAR_10;
    if (VAR_7 > VAR_6->maxfd)
        VAR_6->maxfd = VAR_7;
    return VAR_1;
}
