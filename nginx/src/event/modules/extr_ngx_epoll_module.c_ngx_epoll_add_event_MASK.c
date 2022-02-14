
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {void* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int active; uintptr_t instance; int oneshot; int log; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_7__ {int fd; TYPE_2__* read; TYPE_2__* write; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,int ,struct epoll_event*) ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_14, ngx_int_t VAR_15, ngx_uint_t VAR_16)
{
    int VAR_17;
    uint32_t VAR_18, VAR_19;
    ngx_event_t *VAR_20;
    ngx_connection_t *VAR_21;
    struct epoll_event VAR_22;

    VAR_21 = VAR_14->data;

    VAR_18 = (uint32_t) VAR_15;

    if (VAR_15 == VAR_11) {
        VAR_20 = VAR_21->write;
        VAR_19 = VAR_1;




    } else {
        VAR_20 = VAR_21->read;
        VAR_19 = VAR_0|VAR_2;



    }

    if (VAR_20->active) {
        VAR_17 = VAR_4;
        VAR_18 |= VAR_19;

    } else {
        VAR_17 = VAR_3;
    }







    VAR_22.events = VAR_18 | (uint32_t) VAR_16;
    VAR_22.data.ptr = (void *) ((uintptr_t) VAR_21 | VAR_14->instance);

    FUNC_1(VAR_8, VAR_14->log, 0,
                   "epoll add event: fd:%d op:%d ev:%08XD",
                   VAR_21->fd, VAR_17, VAR_22.events);

    if (FUNC_0(VAR_12, VAR_17, VAR_21->fd, &VAR_22) == -1) {
        FUNC_2(VAR_7, VAR_14->log, VAR_13,
                      "epoll_ctl(%d, %d) failed", VAR_17, VAR_21->fd);
        return VAR_5;
    }

    VAR_14->active = 1;




    return VAR_9;
}
