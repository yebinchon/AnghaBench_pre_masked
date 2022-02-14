
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int post_action; struct TYPE_8__* main; int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_9__ {int * next; TYPE_3__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_10__ {int last_buf; int sync; int last_in_chain; int flush; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_uint_t VAR_4)
{
    ngx_buf_t *VAR_5;
    ngx_chain_t VAR_6;

    VAR_5 = FUNC_0(VAR_3->pool);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_4 & VAR_2) {

        if (VAR_3 == VAR_3->main && !VAR_3->post_action) {
            VAR_5->last_buf = 1;

        } else {
            VAR_5->sync = 1;
            VAR_5->last_in_chain = 1;
        }
    }

    if (VAR_4 & VAR_1) {
        VAR_5->flush = 1;
    }

    VAR_6.buf = VAR_5;
    VAR_6.next = ((void*)0);

    return FUNC_1(VAR_3, &VAR_6);
}
