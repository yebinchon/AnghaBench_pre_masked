
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u_char ;
struct TYPE_19__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_24__ {scalar_t__ offset; int fd; } ;
struct TYPE_20__ {int video; int audio; int epoch; scalar_t__ nframes; TYPE_8__ file; TYPE_5__* conf; } ;
typedef TYPE_4__ ngx_rtmp_record_rec_ctx_t ;
struct TYPE_21__ {scalar_t__ max_frames; scalar_t__ max_size; int id; } ;
typedef TYPE_5__ ngx_rtmp_record_app_conf_t ;
struct TYPE_22__ {int mlen; scalar_t__ type; int timestamp; } ;
typedef TYPE_6__ ngx_rtmp_header_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {TYPE_2__* buf; struct TYPE_23__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
typedef scalar_t__ int32_t ;
struct TYPE_18__ {void** pos; void** last; } ;
struct TYPE_17__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*,void**,int,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4,
                            ngx_rtmp_record_rec_ctx_t *VAR_5,
                            ngx_rtmp_header_t *VAR_6, ngx_chain_t *VAR_7,
                            ngx_int_t VAR_8)
{
    u_char VAR_9[11], *VAR_10, *VAR_11;
    uint32_t VAR_12, VAR_13;
    ngx_rtmp_record_app_conf_t *VAR_14;

    VAR_14 = VAR_5->conf;

    FUNC_1(VAR_1, VAR_4->connection->log, 0,
                   "record: %V frame: mlen=%uD",
                   &VAR_14->id, VAR_6->mlen);

    if (VAR_6->type == VAR_3) {
        VAR_5->video = 1;
    } else {
        VAR_5->audio = 1;
    }

    VAR_12 = VAR_6->timestamp - VAR_5->epoch;

    if ((int32_t) VAR_12 < 0) {
        FUNC_1(VAR_1, VAR_4->connection->log, 0,
                       "record: %V cut timestamp=%D", &VAR_14->id, VAR_12);

        VAR_12 = 0;
    }


    VAR_11 = VAR_9;

    *VAR_11++ = (u_char)VAR_6->type;

    VAR_10 = (u_char*)&VAR_6->mlen;
    *VAR_11++ = VAR_10[2];
    *VAR_11++ = VAR_10[1];
    *VAR_11++ = VAR_10[0];

    VAR_10 = (u_char*)&VAR_12;
    *VAR_11++ = VAR_10[2];
    *VAR_11++ = VAR_10[1];
    *VAR_11++ = VAR_10[0];
    *VAR_11++ = VAR_10[3];

    *VAR_11++ = 0;
    *VAR_11++ = 0;
    *VAR_11++ = 0;

    VAR_13 = (VAR_11 - VAR_9) + VAR_6->mlen;

    if (FUNC_4(&VAR_5->file, VAR_9, VAR_11 - VAR_9, VAR_5->file.offset)
        == VAR_0)
    {
        FUNC_3(VAR_4, VAR_5);

        FUNC_0(VAR_5->file.fd);

        return VAR_0;
    }







    for(; VAR_7; VAR_7 = VAR_7->next) {
        if (VAR_7->buf->pos == VAR_7->buf->last) {
            continue;
        }

        if (FUNC_4(&VAR_5->file, VAR_7->buf->pos, VAR_7->buf->last
                           - VAR_7->buf->pos, VAR_5->file.offset)
            == VAR_0)
        {
            return VAR_0;
        }
    }


    VAR_11 = VAR_9;
    VAR_10 = (u_char*)&VAR_13;

    *VAR_11++ = VAR_10[3];
    *VAR_11++ = VAR_10[2];
    *VAR_11++ = VAR_10[1];
    *VAR_11++ = VAR_10[0];

    if (FUNC_4(&VAR_5->file, VAR_9, VAR_11 - VAR_9,
                       VAR_5->file.offset)
        == VAR_0)
    {
        return VAR_0;
    }

    VAR_5->nframes += VAR_8;


    if ((VAR_14->max_size && VAR_5->file.offset >= (ngx_int_t) VAR_14->max_size) ||
        (VAR_14->max_frames && VAR_5->nframes >= VAR_14->max_frames))
    {
        FUNC_2(VAR_4, VAR_5);
    }

    return VAR_2;
}
