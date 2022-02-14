
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_socket_t ;
struct TYPE_18__ {scalar_t__ len; int * data; } ;
struct TYPE_14__ {int (* handler ) (TYPE_5__*) ;int addr_text_max_len; scalar_t__ addr_ntop; scalar_t__ post_accept_buffer_size; scalar_t__ socklen; int fd; TYPE_8__ addr_text; } ;
typedef TYPE_3__ ngx_listening_t ;
struct TYPE_12__ {int error; } ;
struct TYPE_15__ {scalar_t__ available; TYPE_1__ ovlp; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_16__ {int number; TYPE_8__ addr_text; int socklen; int sockaddr; int pool; TYPE_2__* buffer; int local_socklen; int local_sockaddr; TYPE_7__* log; int fd; TYPE_3__* listening; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_17__ {int handler; } ;
struct TYPE_13__ {scalar_t__ start; scalar_t__ end; int last; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,int *,int *,int *,int *) ;
 int FUNC_3 (int ,TYPE_7__*,int ,char*,int ) ;
 int FUNC_4 (int ,TYPE_7__*,int ,char*,TYPE_8__*) ;
 int * FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ,char*,int) ;
 int FUNC_8 (TYPE_5__*) ;

void
FUNC_9(ngx_event_t *VAR_7)
{
    ngx_listening_t *VAR_8;
    ngx_connection_t *VAR_9;

    VAR_9 = VAR_7->data;
    VAR_8 = VAR_9->listening;

    VAR_9->log->handler = VAR_4;

    FUNC_3(VAR_1, VAR_9->log, 0, "AcceptEx: %d", VAR_9->fd);

    if (VAR_7->ovlp.error) {
        FUNC_4(VAR_0, VAR_9->log, VAR_7->ovlp.error,
                      "AcceptEx() %V failed", &VAR_8->addr_text);
        return;
    }



    if (FUNC_7(VAR_9->fd, VAR_2, VAR_3,
                   (char *) &VAR_8->fd, sizeof(ngx_socket_t))
        == -1)
    {
        FUNC_4(VAR_0, VAR_9->log, VAR_6,
                      "setsockopt(SO_UPDATE_ACCEPT_CONTEXT) failed for %V",
                      &VAR_9->addr_text);

        return;
    }

    FUNC_2(VAR_9->buffer->pos,
                             VAR_8->post_accept_buffer_size,
                             VAR_8->socklen + 16,
                             VAR_8->socklen + 16,
                             &VAR_9->local_sockaddr, &VAR_9->local_socklen,
                             &VAR_9->sockaddr, &VAR_9->socklen);

    if (VAR_8->post_accept_buffer_size) {
        VAR_9->buffer->last += VAR_7->available;
        VAR_9->buffer->end = VAR_9->buffer->start + VAR_8->post_accept_buffer_size;

    } else {
        VAR_9->buffer = ((void*)0);
    }

    if (VAR_8->addr_ntop) {
        VAR_9->addr_text.data = FUNC_5(VAR_9->pool, VAR_8->addr_text_max_len);
        if (VAR_9->addr_text.data == ((void*)0)) {

            return;
        }

        VAR_9->addr_text.len = FUNC_6(VAR_9->sockaddr, VAR_9->socklen,
                                         VAR_9->addr_text.data,
                                         VAR_8->addr_text_max_len, 0);
        if (VAR_9->addr_text.len == 0) {

            return;
        }
    }

    FUNC_1(VAR_8, 1);

    VAR_9->number = FUNC_0(VAR_5, 1);

    VAR_8->handler(VAR_9);

    return;

}
