
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int timeout_fd ;
struct TYPE_8__ {TYPE_2__* thread; int ssl_wbuf; int * ssl; } ;
typedef TYPE_1__ conn ;
struct TYPE_11__ {scalar_t__ verbose; int ssl_enabled; } ;
struct TYPE_10__ {int sfd; int c; int ssl; int transport; int read_buffer_size; int event_flags; int init_state; int mode; } ;
struct TYPE_9__ {int base; int ssl_wbuf; int new_conn_queue; } ;
typedef TYPE_2__ LIBEVENT_THREAD ;
typedef TYPE_3__ CQ_ITEM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int * VAR_0 ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*,...) ;


 int FUNC_13 (int,...) ;
 int FUNC_14 () ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_15(int VAR_3, short VAR_4, void *VAR_5) {
    LIBEVENT_THREAD *VAR_6 = VAR_5;
    CQ_ITEM *VAR_7;
    char VAR_8[1];
    conn *VAR_9;
    unsigned int VAR_10;

    if (FUNC_13(VAR_3, VAR_8, 1) != 1) {
        if (VAR_1.verbose > 0)
            FUNC_12(VAR_2, "Can't read from libevent pipe\n");
        return;
    }

    switch (VAR_8[0]) {
    case 'c':
        VAR_7 = FUNC_8(VAR_6->new_conn_queue);

        if (((void*)0) == VAR_7) {
            break;
        }
        switch (VAR_7->mode) {
            case 129:
                VAR_9 = FUNC_6(VAR_7->sfd, VAR_7->init_state, VAR_7->event_flags,
                                   VAR_7->read_buffer_size, VAR_7->transport,
                                   VAR_6->base, VAR_7->ssl);
                if (VAR_9 == ((void*)0)) {
                    if (FUNC_0(VAR_7->transport)) {
                        FUNC_12(VAR_2, "Can't listen for events on UDP socket\n");
                        FUNC_11(1);
                    } else {
                        if (VAR_1.verbose > 0) {
                            FUNC_12(VAR_2, "Can't listen for events on fd %d\n",
                                VAR_7->sfd);
                        }






                        FUNC_4(VAR_7->sfd);
                    }
                } else {
                    VAR_9->thread = VAR_6;






                }
                break;

            case 128:
                FUNC_7(VAR_7->c);
                break;
        }
        FUNC_9(VAR_7);
        break;

    case 'p':
        FUNC_14();
        break;

    case 't':
        if (FUNC_13(VAR_3, &VAR_10, sizeof(VAR_10)) != sizeof(VAR_10)) {
            if (VAR_1.verbose > 0)
                FUNC_12(VAR_2, "Can't read timeout fd from libevent pipe\n");
            return;
        }
        FUNC_5(VAR_0[VAR_10]);
        break;

    case 's':
        FUNC_10(VAR_6->base, ((void*)0));
        break;
    }
}
