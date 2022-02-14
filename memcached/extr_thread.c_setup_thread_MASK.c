
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct event_config {int dummy; } ;
struct conn_queue {int dummy; } ;
typedef int io_wrap ;
struct TYPE_8__ {scalar_t__ ssl_wbuf_size; scalar_t__ ssl_enabled; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {char* ssl_wbuf; int * io_cache; int * suffix_cache; TYPE_1__ stats; int * new_conn_queue; int notify_event; int base; int notify_receive_fd; } ;
typedef TYPE_2__ LIBEVENT_THREAD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char*,int,int,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct event_config*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct event_config*) ;
 struct event_config* FUNC_6 () ;
 int FUNC_7 (struct event_config*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,int,int ,TYPE_2__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;
 int * FUNC_12 (size_t) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_15(LIBEVENT_THREAD *VAR_8) {







    VAR_8->base = FUNC_8();


    if (! VAR_8->base) {
        FUNC_11(VAR_6, "Can't allocate event base\n");
        FUNC_10(1);
    }


    FUNC_9(&VAR_8->notify_event, VAR_8->notify_receive_fd,
              VAR_2 | VAR_1, VAR_7, VAR_8);
    FUNC_4(VAR_8->base, &VAR_8->notify_event);

    if (FUNC_2(&VAR_8->notify_event, 0) == -1) {
        FUNC_11(VAR_6, "Can't monitor libevent notify pipe\n");
        FUNC_10(1);
    }

    VAR_8->new_conn_queue = FUNC_12(sizeof(struct conn_queue));
    if (VAR_8->new_conn_queue == ((void*)0)) {
        FUNC_13("Failed to allocate memory for connection queue");
        FUNC_10(VAR_3);
    }
    FUNC_1(VAR_8->new_conn_queue);

    if (FUNC_14(&VAR_8->stats.mutex, ((void*)0)) != 0) {
        FUNC_13("Failed to initialize mutex");
        FUNC_10(VAR_3);
    }

    VAR_8->suffix_cache = FUNC_0("suffix", VAR_4, sizeof(char*),
                                    ((void*)0), ((void*)0));
    if (VAR_8->suffix_cache == ((void*)0)) {
        FUNC_11(VAR_6, "Failed to create suffix cache\n");
        FUNC_10(VAR_3);
    }
}
