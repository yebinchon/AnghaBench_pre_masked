
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pollfd {int fd; scalar_t__ revents; scalar_t__ events; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {size_t slot; int flags; int fd; int socktype; struct TYPE_6__* next; int * client_host; int * client_port; int * client_ip; int * snd_callback; int * rcv_callback; int (* del_callback ) (TYPE_2__*) ;int * data; TYPE_1__* p; } ;
struct TYPE_5__ {size_t max; size_t min; TYPE_2__* first_free; int used; int slots; struct pollfd* fds; } ;
typedef TYPE_1__ POLLJOB ;
typedef TYPE_2__ POLLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,int,size_t,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int) ;

inline void FUNC_9(POLLINFO *VAR_3) {
    POLLJOB *VAR_4 = VAR_3->p;

    struct pollfd *VAR_5 = &VAR_4->fds[VAR_3->slot];
    FUNC_1(VAR_0, "POLLFD: DEL: request to clear slot %zu (fd %d), old next free was %zd", VAR_3->slot, VAR_5->fd, VAR_4->first_free?(ssize_t)VAR_4->first_free->slot:(ssize_t)-1);

    if(FUNC_8(VAR_5->fd == -1)) return;

    FUNC_5();

    if(VAR_3->flags & VAR_1) {
        VAR_3->del_callback(VAR_3);

        if(FUNC_4(!(VAR_3->flags & VAR_2))) {
            if(FUNC_0(VAR_5->fd) == -1)
                FUNC_2("Failed to close() poll_events() socket %d", VAR_5->fd);
        }
    }

    VAR_5->fd = -1;
    VAR_5->events = 0;
    VAR_5->revents = 0;

    VAR_3->fd = -1;
    VAR_3->socktype = -1;
    VAR_3->flags = 0;
    VAR_3->data = ((void*)0);

    VAR_3->del_callback = ((void*)0);
    VAR_3->rcv_callback = ((void*)0);
    VAR_3->snd_callback = ((void*)0);

    FUNC_3(VAR_3->client_ip);
    VAR_3->client_ip = ((void*)0);

    FUNC_3(VAR_3->client_port);
    VAR_3->client_port = ((void*)0);

    FUNC_3(VAR_3->client_host);
    VAR_3->client_host = ((void*)0);

    VAR_3->next = VAR_4->first_free;
    VAR_4->first_free = VAR_3;

    VAR_4->used--;
    if(FUNC_8(VAR_4->max == VAR_3->slot)) {
        VAR_4->max = VAR_4->min;
        ssize_t VAR_6;
        for(VAR_6 = (ssize_t)VAR_3->slot; VAR_6 > (ssize_t)VAR_4->min ;VAR_6--) {
            if (FUNC_8(VAR_4->fds[VAR_6].fd != -1)) {
                VAR_4->max = (size_t)VAR_6;
                break;
            }
        }
    }
    FUNC_6();

    FUNC_1(VAR_0, "POLLFD: DEL: completed, slots = %zu, used = %zu, min = %zu, max = %zu, next free = %zd", VAR_4->slots, VAR_4->used, VAR_4->min, VAR_4->max, VAR_4->first_free?(ssize_t)VAR_4->first_free->slot:(ssize_t)-1);
}
