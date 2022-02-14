
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef enum network_transport { ____Placeholder_network_transport } network_transport ;
typedef enum conn_states { ____Placeholder_conn_states } conn_states ;
struct TYPE_9__ {int num_threads; } ;
struct TYPE_8__ {int sfd; int init_state; int event_flags; int read_buffer_size; int transport; void* ssl; int mode; } ;
struct TYPE_7__ {int notify_send_fd; scalar_t__ thread_id; int new_conn_queue; } ;
typedef TYPE_1__ LIBEVENT_THREAD ;
typedef TYPE_2__ CQ_ITEM ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int ,char*,int) ;

void FUNC_7(int VAR_5, enum conn_states VAR_6, int VAR_7,
                       int VAR_8, enum network_transport VAR_9, void *VAR_10) {
    CQ_ITEM *VAR_11 = FUNC_3();
    char VAR_12[1];
    if (VAR_11 == ((void*)0)) {
        FUNC_1(VAR_5);

        FUNC_4(VAR_3, "Failed to allocate memory for connection object\n");
        return ;
    }

    int VAR_13 = (VAR_0 + 1) % VAR_2.num_threads;

    LIBEVENT_THREAD *VAR_14 = VAR_4 + VAR_13;

    VAR_0 = VAR_13;

    VAR_11->sfd = VAR_5;
    VAR_11->init_state = VAR_6;
    VAR_11->event_flags = VAR_7;
    VAR_11->read_buffer_size = VAR_8;
    VAR_11->transport = VAR_9;
    VAR_11->mode = VAR_1;
    VAR_11->ssl = VAR_10;

    FUNC_2(VAR_14->new_conn_queue, VAR_11);

    FUNC_0(VAR_5, (int64_t)VAR_14->thread_id);
    VAR_12[0] = 'c';
    if (FUNC_6(VAR_14->notify_send_fd, VAR_12, 1) != 1) {
        FUNC_5("Writing to thread notify pipe");
    }
}
