
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pollfd {size_t slot; int fd; short events; int flags; int socktype; int port_acl; void (* del_callback ) (struct pollfd*) ;int (* rcv_callback ) (struct pollfd*,short*) ;int (* snd_callback ) (struct pollfd*,short*) ;int * data; scalar_t__ send_count; scalar_t__ recv_count; scalar_t__ last_sent_t; scalar_t__ last_received_t; int connected_t; int * client_host; int * client_port; int * client_ip; struct pollfd* next; TYPE_1__* p; scalar_t__ revents; } ;
typedef size_t ssize_t ;
typedef int WEB_CLIENT_ACL ;
struct TYPE_3__ {size_t slots; size_t used; size_t min; size_t max; void (* del_callback ) (struct pollfd*) ;int (* rcv_callback ) (struct pollfd*,short*) ;int (* snd_callback ) (struct pollfd*,short*) ;struct pollfd* first_free; struct pollfd* fds; struct pollfd* inf; } ;
typedef TYPE_1__ POLLJOB ;
typedef struct pollfd POLLINFO ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (struct pollfd*,int) ;
 void* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int) ;

inline POLLINFO *FUNC_7(POLLJOB *VAR_5
                             , int VAR_6
                             , int VAR_7
                             , WEB_CLIENT_ACL VAR_8
                             , uint32_t VAR_9
                             , const char *VAR_10
                             , const char *VAR_11
                             , const char *VAR_12
                             , void *(*VAR_13)(POLLINFO * , short int * , void * )
                             , void (*VAR_14)(POLLINFO * )
                             , int (*VAR_15)(POLLINFO * , short int * )
                             , int (*VAR_16)(POLLINFO * , short int * )
                             , void *VAR_17
) {
    FUNC_0(VAR_0, "POLLFD: ADD: request to add fd %d, slots = %zu, used = %zu, min = %zu, max = %zu, next free = %zd", VAR_6, VAR_5->slots, VAR_5->used, VAR_5->min, VAR_5->max, VAR_5->first_free?(ssize_t)VAR_5->first_free->slot:(ssize_t)-1);

    if(FUNC_6(VAR_6 < 0)) return ((void*)0);







    if(FUNC_6(!VAR_5->first_free)) {
        size_t VAR_18 = VAR_5->slots + VAR_4;
        FUNC_0(VAR_0, "POLLFD: ADD: increasing size (current = %zu, new = %zu, used = %zu, min = %zu, max = %zu)", VAR_5->slots, VAR_18, VAR_5->used, VAR_5->min, VAR_5->max);

        VAR_5->fds = FUNC_4(VAR_5->fds, sizeof(struct pollfd) * VAR_18);
        VAR_5->inf = FUNC_4(VAR_5->inf, sizeof(POLLINFO) * VAR_18);


        ssize_t VAR_19;
        for(VAR_19 = VAR_18 - 1; VAR_19 >= (ssize_t)VAR_5->slots ; VAR_19--) {
            FUNC_0(VAR_0, "POLLFD: ADD: resetting new slot %zd", VAR_19);
            VAR_5->fds[VAR_19].fd = -1;
            VAR_5->fds[VAR_19].events = 0;
            VAR_5->fds[VAR_19].revents = 0;

            VAR_5->inf[VAR_19].p = VAR_5;
            VAR_5->inf[VAR_19].slot = (size_t)VAR_19;
            VAR_5->inf[VAR_19].flags = 0;
            VAR_5->inf[VAR_19].socktype = -1;
            VAR_5->inf[VAR_19].port_acl = -1;

            VAR_5->inf[VAR_19].client_ip = ((void*)0);
            VAR_5->inf[VAR_19].client_port = ((void*)0);
            VAR_5->inf[VAR_19].client_host = ((void*)0);
            VAR_5->inf[VAR_19].del_callback = VAR_5->del_callback;
            VAR_5->inf[VAR_19].rcv_callback = VAR_5->rcv_callback;
            VAR_5->inf[VAR_19].snd_callback = VAR_5->snd_callback;
            VAR_5->inf[VAR_19].data = ((void*)0);



            VAR_5->inf[VAR_19].next = VAR_5->first_free;
            VAR_5->first_free = &VAR_5->inf[VAR_19];
        }

        VAR_5->slots = VAR_18;
    }

    POLLINFO *VAR_20 = VAR_5->first_free;
    VAR_5->first_free = VAR_5->first_free->next;

    FUNC_0(VAR_0, "POLLFD: ADD: selected slot %zu, next free is %zd", VAR_20->slot, VAR_5->first_free?(ssize_t)VAR_5->first_free->slot:(ssize_t)-1);

    struct pollfd *VAR_21 = &VAR_5->fds[VAR_20->slot];
    VAR_21->fd = VAR_6;
    VAR_21->events = VAR_1;
    VAR_21->revents = 0;

    VAR_20->fd = VAR_6;
    VAR_20->p = VAR_5;
    VAR_20->socktype = VAR_7;
    VAR_20->port_acl = VAR_8;
    VAR_20->flags = VAR_9;
    VAR_20->next = ((void*)0);
    VAR_20->client_ip = FUNC_5(VAR_10);
    VAR_20->client_port = FUNC_5(VAR_11);
    VAR_20->client_host = FUNC_5(VAR_12);

    VAR_20->del_callback = VAR_14;
    VAR_20->rcv_callback = VAR_15;
    VAR_20->snd_callback = VAR_16;

    VAR_20->connected_t = FUNC_3();
    VAR_20->last_received_t = 0;
    VAR_20->last_sent_t = 0;
    VAR_20->last_sent_t = 0;
    VAR_20->recv_count = 0;
    VAR_20->send_count = 0;

    FUNC_1();
    VAR_5->used++;
    if(FUNC_6(VAR_20->slot > VAR_5->max))
        VAR_5->max = VAR_20->slot;

    if(VAR_20->flags & VAR_2) {
        VAR_20->data = VAR_13(VAR_20, &VAR_21->events, VAR_17);
    }

    if(VAR_20->flags & VAR_3) {
        VAR_5->min = VAR_20->slot;
    }
    FUNC_2();

    FUNC_0(VAR_0, "POLLFD: ADD: completed, slots = %zu, used = %zu, min = %zu, max = %zu, next free = %zd", VAR_5->slots, VAR_5->used, VAR_5->min, VAR_5->max, VAR_5->first_free?(ssize_t)VAR_5->first_free->slot:(ssize_t)-1);

    return VAR_20;
}
