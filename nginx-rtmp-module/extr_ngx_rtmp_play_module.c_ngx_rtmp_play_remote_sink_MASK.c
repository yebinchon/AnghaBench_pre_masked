
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_11__ {int fd; } ;
struct TYPE_14__ {int ncrs; int nheader; int nbody; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_6__* buf; struct TYPE_15__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_16__ {int* pos; int* last; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_12__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_rtmp_play_ctx_t *VAR_7;
    ngx_buf_t *VAR_8;
    ngx_int_t VAR_9;

    VAR_7 = FUNC_1(VAR_5, VAR_4);


    while (VAR_6 && VAR_7->ncrs != 2) {
        VAR_8 = VAR_6->buf;

        for (; VAR_8->pos != VAR_8->last && VAR_7->ncrs != 2; ++VAR_8->pos) {
            switch (*VAR_8->pos) {
                case '\n':
                    ++VAR_7->ncrs;
                case '\r':
                    break;
                default:
                    VAR_7->ncrs = 0;
            }

            if (++VAR_7->nheader == 10 && *VAR_8->pos != (u_char) '2') {
                FUNC_0(VAR_1, VAR_5->connection->log, 0,
                              "play: remote HTTP response code: %cxx",
                              *VAR_8->pos);
                return VAR_0;
            }
        }

        if (VAR_8->pos == VAR_8->last) {
            VAR_6 = VAR_6->next;
        }
    }


    for (; VAR_6; VAR_6 = VAR_6->next) {
        VAR_8 = VAR_6->buf;

        if (VAR_8->pos == VAR_8->last) {
            continue;
        }

        VAR_9 = FUNC_2(VAR_7->file.fd, VAR_8->pos, VAR_8->last - VAR_8->pos);

        if (VAR_9 == VAR_0) {
            FUNC_0(VAR_1, VAR_5->connection->log, VAR_3,
                          "play: error writing to temp file");
            return VAR_0;
        }

        VAR_7->nbody += VAR_9;
    }

    return VAR_2;
}
