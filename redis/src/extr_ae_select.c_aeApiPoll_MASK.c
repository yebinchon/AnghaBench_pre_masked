
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int fd_set ;
struct TYPE_7__ {int mask; } ;
typedef TYPE_2__ aeFileEvent ;
struct TYPE_8__ {int maxfd; TYPE_1__* fired; TYPE_2__* events; TYPE_4__* apidata; } ;
typedef TYPE_3__ aeEventLoop ;
struct TYPE_9__ {int _wfds; int _rfds; int wfds; int rfds; } ;
typedef TYPE_4__ aeApiState ;
struct TYPE_6__ {int fd; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_3(aeEventLoop *VAR_3, struct timeval *VAR_4) {
    aeApiState *VAR_5 = VAR_3->apidata;
    int VAR_6, VAR_7, VAR_8 = 0;

    FUNC_1(&VAR_5->_rfds,&VAR_5->rfds,sizeof(fd_set));
    FUNC_1(&VAR_5->_wfds,&VAR_5->wfds,sizeof(fd_set));

    VAR_6 = FUNC_2(VAR_3->maxfd+1,
                &VAR_5->_rfds,&VAR_5->_wfds,((void*)0),VAR_4);
    if (VAR_6 > 0) {
        for (VAR_7 = 0; VAR_7 <= VAR_3->maxfd; VAR_7++) {
            int VAR_9 = 0;
            aeFileEvent *VAR_10 = &VAR_3->events[VAR_7];

            if (VAR_10->mask == VAR_0) continue;
            if (VAR_10->mask & VAR_1 && FUNC_0(VAR_7,&VAR_5->_rfds))
                VAR_9 |= VAR_1;
            if (VAR_10->mask & VAR_2 && FUNC_0(VAR_7,&VAR_5->_wfds))
                VAR_9 |= VAR_2;
            VAR_3->fired[VAR_8].fd = VAR_7;
            VAR_3->fired[VAR_8].mask = VAR_9;
            VAR_8++;
        }
    }
    return VAR_8;
}
