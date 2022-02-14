
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct statsd_udp {int* running; int size; TYPE_3__* msgs; TYPE_1__* iovecs; int type; } ;
struct mmsghdr {int dummy; } ;
struct iovec {int dummy; } ;
struct collection_thread_status {int status; int max_sockets; } ;
struct TYPE_8__ {int recvmmsg_size; int update_every; int tcp_idle_timeout; int sockets; } ;
struct TYPE_6__ {int msg_iovlen; TYPE_1__* msg_iov; } ;
struct TYPE_7__ {TYPE_2__ msg_hdr; } ;
struct TYPE_5__ {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct statsd_udp*) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int *,int ,void*,int ,int ,int,void*,int ) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void *FUNC_7(void *VAR_9) {
    struct collection_thread_status *VAR_10 = VAR_9;
    VAR_10->status = 1;

    FUNC_2("STATSD collector thread started with taskid %d", FUNC_1());

    struct statsd_udp *VAR_11 = FUNC_0(sizeof(struct statsd_udp), 1);
    VAR_11->running = &VAR_10->status;

    FUNC_5(VAR_4, VAR_11);
    FUNC_6(&VAR_2.sockets
            , VAR_3
            , VAR_5
            , VAR_6
            , VAR_7
            , VAR_8
            , ((void*)0)
            , 0
            , (void *)VAR_11
            , 0
            , VAR_2.tcp_idle_timeout
            , VAR_2.update_every * 1000
            , VAR_9
            , VAR_10->max_sockets
    );

    FUNC_4(1);
    return ((void*)0);
}
