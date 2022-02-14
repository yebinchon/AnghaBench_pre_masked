
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef int accept_filter_arg ;
typedef int socklen_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_sockaddr_t ;
struct TYPE_14__ {size_t len; int * data; } ;
struct TYPE_11__ {int socklen; int ignore; scalar_t__ type; int rcvbuf; int sndbuf; int setfib; int reuseport; int fastopen; int deferred_accept; TYPE_6__ addr_text; TYPE_6__* fd; int * accept_filter; int backlog; TYPE_4__* sockaddr; void* addr_text_max_len; } ;
typedef TYPE_2__ ngx_listening_t ;
typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_10__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_12__ {int log; int pool; TYPE_1__ listening; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_13__ {int sa_family; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (TYPE_6__*,TYPE_4__*,int*) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int*,int*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,TYPE_6__*) ;
 int FUNC_4 (int*,int) ;
 void* FUNC_5 (int ,int) ;
 int * FUNC_6 (int ,size_t) ;
 size_t FUNC_7 (TYPE_4__*,int,int *,size_t,int) ;
 scalar_t__ VAR_24 ;

ngx_int_t
FUNC_8(ngx_cycle_t *VAR_25)
{
    size_t VAR_26;
    ngx_uint_t VAR_27;
    ngx_listening_t *VAR_28;
    socklen_t VAR_29;
    VAR_28 = VAR_25->listening.elts;
    for (VAR_27 = 0; VAR_27 < VAR_25->listening.nelts; VAR_27++) {

        VAR_28[VAR_27].sockaddr = FUNC_5(VAR_25->pool, sizeof(ngx_sockaddr_t));
        if (VAR_28[VAR_27].sockaddr == ((void*)0)) {
            return VAR_4;
        }

        VAR_28[VAR_27].socklen = sizeof(ngx_sockaddr_t);
        if (FUNC_0(VAR_28[VAR_27].fd, VAR_28[VAR_27].sockaddr, &VAR_28[VAR_27].socklen) == -1) {
            FUNC_3(VAR_9, VAR_25->log, VAR_24,
                          "getsockname() of the inherited "
                          "socket #%d failed", VAR_28[VAR_27].fd);
            VAR_28[VAR_27].ignore = 1;
            continue;
        }

        if (VAR_28[VAR_27].socklen > (socklen_t) sizeof(ngx_sockaddr_t)) {
            VAR_28[VAR_27].socklen = sizeof(ngx_sockaddr_t);
        }

        switch (VAR_28[VAR_27].sockaddr->sa_family) {
        case 130:
            VAR_28[VAR_27].addr_text_max_len = VAR_6;
            VAR_26 = VAR_6 + sizeof(":65535") - 1;
            break;

        default:
            FUNC_3(VAR_9, VAR_25->log, VAR_24,
                          "the inherited socket #%d has "
                          "an unsupported protocol family", VAR_28[VAR_27].fd);
            VAR_28[VAR_27].ignore = 1;
            continue;
        }

        VAR_28[VAR_27].addr_text.data = FUNC_6(VAR_25->pool, VAR_26);
        if (VAR_28[VAR_27].addr_text.data == ((void*)0)) {
            return VAR_4;
        }

        VAR_26 = FUNC_7(VAR_28[VAR_27].sockaddr, VAR_28[VAR_27].socklen,
                            VAR_28[VAR_27].addr_text.data, VAR_26, 1);
        if (VAR_26 == 0) {
            return VAR_4;
        }

        VAR_28[VAR_27].addr_text.len = VAR_26;

        VAR_28[VAR_27].backlog = VAR_7;

        VAR_29 = sizeof(int);

        if (FUNC_1(VAR_28[VAR_27].fd, VAR_14, VAR_21, (void *) &VAR_28[VAR_27].type,
                       &VAR_29)
            == -1)
        {
            FUNC_3(VAR_9, VAR_25->log, VAR_24,
                          "getsockopt(SO_TYPE) %V failed", &VAR_28[VAR_27].addr_text);
            VAR_28[VAR_27].ignore = 1;
            continue;
        }

        VAR_29 = sizeof(int);

        if (FUNC_1(VAR_28[VAR_27].fd, VAR_14, VAR_16, (void *) &VAR_28[VAR_27].rcvbuf,
                       &VAR_29)
            == -1)
        {
            FUNC_3(VAR_8, VAR_25->log, VAR_24,
                          "getsockopt(SO_RCVBUF) %V failed, ignored",
                          &VAR_28[VAR_27].addr_text);

            VAR_28[VAR_27].rcvbuf = -1;
        }

        VAR_29 = sizeof(int);

        if (FUNC_1(VAR_28[VAR_27].fd, VAR_14, VAR_20, (void *) &VAR_28[VAR_27].sndbuf,
                       &VAR_29)
            == -1)
        {
            FUNC_3(VAR_8, VAR_25->log, VAR_24,
                          "getsockopt(SO_SNDBUF) %V failed, ignored",
                          &VAR_28[VAR_27].addr_text);

            VAR_28[VAR_27].sndbuf = -1;
        }
        if (VAR_28[VAR_27].type != VAR_13) {
            continue;
        }
    }

    return VAR_11;
}
