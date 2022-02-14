
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ (* sink ) (int ,TYPE_4__*) ;scalar_t__ (* filter ) (TYPE_4__*) ;int timeout; TYPE_4__* in; TYPE_4__* inlast; int bufsize; int session; int detached; } ;
typedef TYPE_1__ ngx_rtmp_netcall_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {scalar_t__ timer_set; scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_18__ {int timedout; scalar_t__ (* recv ) (TYPE_3__*,scalar_t__,scalar_t__) ;int pool; scalar_t__ destroyed; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_19__ {TYPE_5__* buf; struct TYPE_19__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_20__ {scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;
typedef TYPE_5__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_3)
{
    ngx_rtmp_netcall_session_t *VAR_4;
    ngx_connection_t *VAR_5;
    ngx_chain_t *VAR_6;
    ngx_int_t VAR_7;
    ngx_buf_t *VAR_8;

    VAR_5 = VAR_3->data;
    VAR_4 = VAR_5->data;

    if (VAR_5->destroyed) {
        return;
    }

    if (VAR_3->timedout) {
        VAR_5->timedout = 1;
        FUNC_5(VAR_5);
        return;
    }

    if (VAR_3->timer_set) {
        FUNC_3(VAR_3);
    }

    for ( ;; ) {

        if (VAR_4->inlast == ((void*)0) ||
            VAR_4->inlast->buf->last == VAR_4->inlast->buf->end)
        {
            if (VAR_4->in && VAR_4->sink) {
                if (!VAR_4->detached) {
                    if (VAR_4->sink(VAR_4->session, VAR_4->in) != VAR_2) {
                        FUNC_5(VAR_5);
                        return;
                    }
                }

                VAR_8 = VAR_4->in->buf;
                VAR_8->pos = VAR_8->last = VAR_8->start;

            } else {
                VAR_6 = FUNC_1(VAR_5->pool);
                if (VAR_6 == ((void*)0)) {
                    FUNC_5(VAR_5);
                    return;
                }

                VAR_6->next = ((void*)0);

                VAR_6->buf = FUNC_2(VAR_5->pool, VAR_4->bufsize);
                if (VAR_6->buf == ((void*)0)) {
                    FUNC_5(VAR_5);
                    return;
                }

                if (VAR_4->in == ((void*)0)) {
                    VAR_4->in = VAR_6;
                } else {
                    VAR_4->inlast->next = VAR_6;
                }

                VAR_4->inlast = VAR_6;
            }
        }

        VAR_8 = VAR_4->inlast->buf;

        VAR_7 = VAR_5->recv(VAR_5, VAR_8->last, VAR_8->end - VAR_8->last);

        if (VAR_7 == VAR_1 || VAR_7 == 0) {
            FUNC_5(VAR_5);
            return;
        }

        if (VAR_7 == VAR_0) {
            if (VAR_4->filter && VAR_4->in
                && VAR_4->filter(VAR_4->in) != VAR_0)
            {
                FUNC_5(VAR_5);
                return;
            }

            FUNC_0(VAR_3, VAR_4->timeout);
            if (FUNC_4(VAR_3, 0) != VAR_2) {
                FUNC_5(VAR_5);
            }
            return;
        }

        VAR_8->last += VAR_7;
    }
}
