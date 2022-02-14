
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct kevent {scalar_t__ filter; int ident; } ;
struct TYPE_6__ {TYPE_1__* fired; int setsize; TYPE_3__* apidata; } ;
typedef TYPE_2__ aeEventLoop ;
struct TYPE_7__ {struct kevent* events; int kqfd; } ;
typedef TYPE_3__ aeApiState ;
struct TYPE_5__ {int mask; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,int ,struct kevent*,int ,struct timespec*) ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_4, struct timeval *VAR_5) {
    aeApiState *VAR_6 = VAR_4->apidata;
    int VAR_7, VAR_8 = 0;

    if (VAR_5 != ((void*)0)) {
        struct timespec VAR_9;
        VAR_9.tv_sec = VAR_5->tv_sec;
        VAR_9.tv_nsec = VAR_5->tv_usec * 1000;
        VAR_7 = FUNC_0(VAR_6->kqfd, ((void*)0), 0, VAR_6->events, VAR_4->setsize,
                        &VAR_9);
    } else {
        VAR_7 = FUNC_0(VAR_6->kqfd, ((void*)0), 0, VAR_6->events, VAR_4->setsize,
                        ((void*)0));
    }

    if (VAR_7 > 0) {
        int VAR_10;

        VAR_8 = VAR_7;
        for(VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
            int VAR_11 = 0;
            struct kevent *VAR_12 = VAR_6->events+VAR_10;

            if (VAR_12->filter == VAR_2) VAR_11 |= VAR_0;
            if (VAR_12->filter == VAR_3) VAR_11 |= VAR_1;
            VAR_4->fired[VAR_10].fd = VAR_12->ident;
            VAR_4->fired[VAR_10].mask = VAR_11;
        }
    }
    return VAR_8;
}
