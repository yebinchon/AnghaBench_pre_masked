
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ content_length_n; scalar_t__ chunked; } ;
struct TYPE_16__ {int discard_body; int count; int read_event_handler; scalar_t__ lingering_close; TYPE_3__ headers_in; TYPE_9__* header_in; TYPE_2__* connection; TYPE_1__* stream; scalar_t__ request_body; struct TYPE_16__* main; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ timer_set; int log; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_18__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_14__ {TYPE_5__* read; } ;
struct TYPE_13__ {int skip_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_9__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_5)
{
    ssize_t VAR_6;
    ngx_int_t VAR_7;
    ngx_event_t *VAR_8;

    if (VAR_5 != VAR_5->main || VAR_5->discard_body || VAR_5->request_body) {
        return VAR_3;
    }
    if (FUNC_4(VAR_5) != VAR_3) {
        return VAR_0;
    }

    VAR_8 = VAR_5->connection->read;

    FUNC_5(VAR_2, VAR_8->log, 0, "http set discard body");

    if (VAR_8->timer_set) {
        FUNC_0(VAR_8);
    }

    if (VAR_5->headers_in.content_length_n <= 0 && !VAR_5->headers_in.chunked) {
        return VAR_3;
    }

    VAR_6 = VAR_5->header_in->last - VAR_5->header_in->pos;

    if (VAR_6 || VAR_5->headers_in.chunked) {
        VAR_7 = FUNC_2(VAR_5, VAR_5->header_in);

        if (VAR_7 != VAR_3) {
            return VAR_7;
        }

        if (VAR_5->headers_in.content_length_n == 0) {
            return VAR_3;
        }
    }

    VAR_7 = FUNC_3(VAR_5);

    if (VAR_7 == VAR_3) {
        VAR_5->lingering_close = 0;
        return VAR_3;
    }

    if (VAR_7 >= VAR_1) {
        return VAR_7;
    }



    VAR_5->read_event_handler = VAR_4;

    if (FUNC_1(VAR_8, 0) != VAR_3) {
        return VAR_0;
    }

    VAR_5->count++;
    VAR_5->discard_body = 1;

    return VAR_3;
}
