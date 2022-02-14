
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int u_char ;
struct TYPE_15__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_16__ {size_t mlen; size_t msid; size_t timestamp; scalar_t__ type; } ;
typedef TYPE_3__ ngx_rtmp_header_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {struct TYPE_17__* next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_18__ {int * last; int * pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int ,scalar_t__,size_t,size_t,size_t,size_t) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_4__**,size_t*,int) ;
 scalar_t__ FUNC_4 (TYPE_4__**,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_4__*) ;

ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_4, ngx_rtmp_header_t *VAR_5,
                                   ngx_chain_t *VAR_6)
{
    uint32_t VAR_7, VAR_8, VAR_9;
    size_t VAR_10;
    ngx_int_t VAR_11;
    u_char *VAR_12;
    ngx_int_t VAR_13;
    ngx_buf_t *VAR_14;
    ngx_chain_t *VAR_15, *VAR_16;
    ngx_rtmp_header_t VAR_17;

    VAR_17 = *VAR_5;

    VAR_11 = 1;
    VAR_7 = 0;

    while (VAR_6) {
        if (FUNC_4(&VAR_6, &VAR_17.type) != VAR_3) {
            return VAR_3;
        }

        if (FUNC_3(&VAR_6, &VAR_17.mlen, 3) != VAR_3) {
            return VAR_0;
        }

        if (FUNC_3(&VAR_6, &VAR_8, 3) != VAR_3) {
            return VAR_0;
        }

        if (FUNC_4(&VAR_6, (uint8_t *) &VAR_8 + 3) != VAR_3)
        {
            return VAR_0;
        }

        if (FUNC_3(&VAR_6, &VAR_17.msid, 3) != VAR_3)
        {
            return VAR_0;
        }

        if (VAR_11) {
            VAR_7 = VAR_8;
            VAR_11 = 0;
        }

        FUNC_1(VAR_1, VAR_4->connection->log, 0,
                       "RTMP aggregate %s (%d) len=%uD time=%uD (+%D) msid=%uD",
                       FUNC_5(VAR_17.type),
                       (ngx_int_t) VAR_17.type, VAR_17.mlen, VAR_17.timestamp,
                       VAR_8 - VAR_7, VAR_17.msid);



        VAR_10 = 0;
        VAR_15 = VAR_6;
        while (VAR_15) {
            VAR_14 = VAR_15->buf;
            VAR_10 += (VAR_14->last - VAR_14->pos);
            if (VAR_10 > VAR_17.mlen) {
                break;
            }
            VAR_15 = VAR_15->next;
        }

        if (VAR_15 == ((void*)0)) {
            FUNC_2(VAR_2, VAR_4->connection->log, 0,
                          "RTMP error parsing aggregate");
            return VAR_0;
        }

        VAR_16 = VAR_15->next;
        VAR_15->next = ((void*)0);
        VAR_14 = VAR_15->buf;
        VAR_12 = VAR_14->last;
        VAR_14->last -= (VAR_10 - VAR_17.mlen);



        VAR_17.timestamp = VAR_5->timestamp + VAR_8 - VAR_7;

        VAR_13 = FUNC_6(VAR_4, &VAR_17, VAR_6);



        VAR_6 = VAR_15;
        VAR_6->next = VAR_16;
        VAR_14->pos = VAR_14->last;
        VAR_14->last = VAR_12;

        if (VAR_13 != VAR_3) {
            return VAR_13;
        }



        if (FUNC_3(&VAR_6, &VAR_9, 4) != VAR_3) {
            return VAR_3;
        }

        FUNC_0(VAR_1, VAR_4->connection->log, 0,
                       "RTMP aggregate prev_size=%uD", VAR_9);
    }

    return VAR_3;
}
