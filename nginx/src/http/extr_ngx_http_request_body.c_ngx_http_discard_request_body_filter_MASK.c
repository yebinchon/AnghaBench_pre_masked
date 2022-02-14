
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {scalar_t__ content_length_n; scalar_t__ chunked; } ;
struct TYPE_13__ {TYPE_2__ headers_in; TYPE_1__* connection; TYPE_4__* request_body; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_8__* chunked; } ;
typedef TYPE_4__ ngx_http_request_body_t ;
typedef int ngx_http_chunked_t ;
struct TYPE_15__ {size_t last; size_t pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ length; } ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__*,TYPE_8__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 void* FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_6, ngx_buf_t *VAR_7)
{
    size_t VAR_8;
    ngx_int_t VAR_9;
    ngx_http_request_body_t *VAR_10;

    if (VAR_6->headers_in.chunked) {

        VAR_10 = VAR_6->request_body;

        if (VAR_10 == ((void*)0)) {

            VAR_10 = FUNC_2(VAR_6->pool, sizeof(ngx_http_request_body_t));
            if (VAR_10 == ((void*)0)) {
                return VAR_3;
            }

            VAR_10->chunked = FUNC_2(VAR_6->pool, sizeof(ngx_http_chunked_t));
            if (VAR_10->chunked == ((void*)0)) {
                return VAR_3;
            }

            VAR_6->request_body = VAR_10;
        }

        for ( ;; ) {

            VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_10->chunked);

            if (VAR_9 == VAR_5) {



                VAR_8 = VAR_7->last - VAR_7->pos;

                if ((off_t) VAR_8 > VAR_10->chunked->size) {
                    VAR_7->pos += (size_t) VAR_10->chunked->size;
                    VAR_10->chunked->size = 0;

                } else {
                    VAR_10->chunked->size -= VAR_8;
                    VAR_7->pos = VAR_7->last;
                }

                continue;
            }

            if (VAR_9 == VAR_1) {



                VAR_6->headers_in.content_length_n = 0;
                break;
            }

            if (VAR_9 == VAR_0) {



                VAR_6->headers_in.content_length_n = VAR_10->chunked->length;
                break;
            }



            FUNC_1(VAR_4, VAR_6->connection->log, 0,
                          "client sent invalid chunked body");

            return VAR_2;
        }

    } else {
        VAR_8 = VAR_7->last - VAR_7->pos;

        if ((off_t) VAR_8 > VAR_6->headers_in.content_length_n) {
            VAR_7->pos += (size_t) VAR_6->headers_in.content_length_n;
            VAR_6->headers_in.content_length_n = 0;

        } else {
            VAR_7->pos = VAR_7->last;
            VAR_6->headers_in.content_length_n -= VAR_8;
        }
    }

    return VAR_5;
}
