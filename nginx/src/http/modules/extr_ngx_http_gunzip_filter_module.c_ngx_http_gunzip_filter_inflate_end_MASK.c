
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_14__ {struct TYPE_14__* main; int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {int done; TYPE_5__** last_out; TYPE_2__* request; TYPE_6__* out_buf; int zstream; } ;
typedef TYPE_4__ ngx_http_gunzip_ctx_t ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_17__ {int last_buf; int last_in_chain; int sync; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_13__ {int pool; } ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_5,
    ngx_http_gunzip_ctx_t *VAR_6)
{
    int VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t *VAR_9;

    FUNC_4(VAR_2, VAR_5->connection->log, 0,
                   "gunzip inflate end");

    VAR_7 = FUNC_0(&VAR_6->zstream);

    if (VAR_7 != VAR_4) {
        FUNC_5(VAR_1, VAR_5->connection->log, 0,
                      "inflateEnd() failed: %d", VAR_7);
        return VAR_0;
    }

    VAR_8 = VAR_6->out_buf;

    if (FUNC_2(VAR_8) == 0) {

        VAR_8 = FUNC_3(VAR_6->request->pool);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_9 = FUNC_1(VAR_5->pool);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->buf = VAR_8;
    VAR_9->next = ((void*)0);
    *VAR_6->last_out = VAR_9;
    VAR_6->last_out = &VAR_9->next;

    VAR_8->last_buf = (VAR_5 == VAR_5->main) ? 1 : 0;
    VAR_8->last_in_chain = 1;
    VAR_8->sync = 1;

    VAR_6->done = 1;

    return VAR_3;
}
