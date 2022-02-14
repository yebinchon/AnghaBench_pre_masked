
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sfd; TYPE_2__* thread; int state; } ;
typedef TYPE_1__ conn ;
struct TYPE_9__ {int mode; TYPE_1__* c; int init_state; int sfd; } ;
struct TYPE_8__ {int notify_send_fd; int new_conn_queue; } ;
typedef TYPE_2__ LIBEVENT_THREAD ;
typedef TYPE_3__ CQ_ITEM ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(conn *VAR_3) {
    CQ_ITEM *VAR_4 = FUNC_2();
    char VAR_5[1];
    if (VAR_4 == ((void*)0)) {

        VAR_3->state = VAR_0;
        FUNC_0(VAR_3->sfd);
        return;
    }
    LIBEVENT_THREAD *VAR_6 = VAR_3->thread;
    VAR_4->sfd = VAR_3->sfd;
    VAR_4->init_state = VAR_1;
    VAR_4->c = VAR_3;
    VAR_4->mode = VAR_2;

    FUNC_1(VAR_6->new_conn_queue, VAR_4);

    VAR_5[0] = 'c';
    if (FUNC_4(VAR_6->notify_send_fd, VAR_5, 1) != 1) {
        FUNC_3("Writing to thread notify pipe");
    }
}
