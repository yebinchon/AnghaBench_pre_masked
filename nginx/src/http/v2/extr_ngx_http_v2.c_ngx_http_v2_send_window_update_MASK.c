
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_2__* first; } ;
typedef TYPE_3__ ngx_http_v2_out_frame_t ;
struct TYPE_14__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_15__ {int last; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_12__ {TYPE_5__* buf; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,int ,int ,char*,int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_v2_connection_t *VAR_6, ngx_uint_t VAR_7,
    size_t VAR_8)
{
    ngx_buf_t *VAR_9;
    ngx_http_v2_out_frame_t *VAR_10;

    FUNC_3(VAR_4, VAR_6->connection->log, 0,
                   "http2 send WINDOW_UPDATE frame sid:%ui, window:%uz",
                   VAR_7, VAR_8);

    VAR_10 = FUNC_0(VAR_6, VAR_3,
                                  VAR_2,
                                  VAR_1, VAR_7);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9 = VAR_10->first->buf;

    VAR_9->last = FUNC_2(VAR_9->last, VAR_8);

    FUNC_1(VAR_6, VAR_10);

    return VAR_5;
}
