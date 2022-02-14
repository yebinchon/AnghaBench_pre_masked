
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; } ;
typedef TYPE_1__ aeFileEvent ;
struct TYPE_6__ {int setsize; int maxfd; TYPE_1__* events; } ;
typedef TYPE_2__ aeEventLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int) ;

void FUNC_1(aeEventLoop *VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_4 >= VAR_3->setsize) return;
    aeFileEvent *VAR_6 = &VAR_3->events[VAR_4];
    if (VAR_6->mask == VAR_1) return;



    if (VAR_5 & VAR_2) VAR_5 |= VAR_0;

    FUNC_0(VAR_3, VAR_4, VAR_5);
    VAR_6->mask = VAR_6->mask & (~VAR_5);
    if (VAR_4 == VAR_3->maxfd && VAR_6->mask == VAR_1) {

        int VAR_7;

        for (VAR_7 = VAR_3->maxfd-1; VAR_7 >= 0; VAR_7--)
            if (VAR_3->events[VAR_7].mask != VAR_1) break;
        VAR_3->maxfd = VAR_7;
    }
}
