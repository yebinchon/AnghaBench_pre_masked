
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_11__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_12__ {TYPE_5__* avc_header; } ;
typedef TYPE_4__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_1__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
typedef int ngx_buf_t ;
struct TYPE_10__ {int log; } ;
struct TYPE_9__ {int * last; int * pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *,int *,size_t) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_5, ngx_buf_t *VAR_6)
{
    u_char *VAR_7, *VAR_8;
    ngx_chain_t *VAR_9;
    ngx_rtmp_codec_ctx_t *VAR_10;

    VAR_10 = FUNC_1(VAR_5, VAR_4);

    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9 = VAR_10->avc_header;
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_6, "avcC");
    VAR_8 = VAR_9->buf->pos + 5;

    if (VAR_8 < VAR_9->buf->last) {
        FUNC_2(VAR_6, VAR_8, (size_t) (VAR_9->buf->last - VAR_8));
    } else {
        FUNC_0(VAR_1, VAR_5->connection->log, VAR_3,
                      "dash: invalid avcc received");
    }

    FUNC_4(VAR_6, VAR_7);

    return VAR_2;
}
