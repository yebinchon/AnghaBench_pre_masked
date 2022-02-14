
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct TYPE_15__ {TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_16__ {scalar_t__ csid; scalar_t__ mlen; scalar_t__ timestamp; int msid; scalar_t__ type; } ;
typedef TYPE_3__ ngx_rtmp_header_t ;
struct TYPE_17__ {scalar_t__ play_time_fix; scalar_t__ max_streams; } ;
typedef TYPE_4__ ngx_rtmp_core_srv_conf_t ;
typedef size_t ngx_int_t ;
struct TYPE_18__ {int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_19__ {TYPE_1__* buf; struct TYPE_19__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_14__ {scalar_t__ last; scalar_t__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int,int,scalar_t__,scalar_t__,scalar_t__,int ,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int*,int*,size_t) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (scalar_t__) ;

void
FUNC_6(ngx_rtmp_session_t *VAR_3, ngx_rtmp_header_t *VAR_4,
        ngx_rtmp_header_t *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_chain_t *VAR_7;
    u_char *VAR_8, *VAR_9;
    ngx_int_t VAR_10, VAR_11, VAR_12;
    uint32_t VAR_13, VAR_14, VAR_15;
    static uint8_t VAR_16[] = { 12, 8, 4, 1 };
    u_char VAR_17[7];
    ngx_rtmp_core_srv_conf_t *VAR_18;
    uint8_t VAR_19;
    ngx_connection_t *VAR_20;

    VAR_20 = VAR_3->connection;
    VAR_18 = FUNC_4(VAR_3, VAR_2);

    if (VAR_4->csid >= (uint32_t)VAR_18->max_streams) {
        FUNC_1(VAR_1, VAR_20->log, 0,
                "RTMP out chunk stream too big: %D >= %D",
                VAR_4->csid, VAR_18->max_streams);
        FUNC_3(VAR_3);
        return;
    }


    VAR_13 = 0;
    VAR_12 = 0;
    for(VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next) {
        VAR_13 += (VAR_7->buf->last - VAR_7->buf->pos);
        ++VAR_12;
    }

    VAR_19 = 0;
    if (VAR_5 && VAR_5->csid && VAR_4->msid == VAR_5->msid) {
        ++VAR_19;
        if (VAR_4->type == VAR_5->type && VAR_13 && VAR_13 == VAR_5->mlen) {
            ++VAR_19;
            if (VAR_4->timestamp == VAR_5->timestamp) {
                ++VAR_19;
            }
        }
        VAR_14 = VAR_4->timestamp - VAR_5->timestamp;
    } else {
        VAR_14 = VAR_4->timestamp;
    }






    VAR_10 = VAR_16[VAR_19];

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
            "RTMP prep %s (%d) fmt=%d csid=%uD timestamp=%uD "
            "mlen=%uD msid=%uD nbufs=%d",
            FUNC_5(VAR_4->type), (int)VAR_4->type, (int)VAR_19,
            VAR_4->csid, VAR_14, VAR_13, VAR_4->msid, VAR_12);

    VAR_15 = 0;
    if (VAR_14 >= 0x00ffffff) {
        VAR_15 = VAR_14;
        VAR_14 = 0x00ffffff;
        VAR_10 += 4;
    }

    if (VAR_4->csid >= 64) {
        ++VAR_10;
        if (VAR_4->csid >= 320) {
            ++VAR_10;
        }
    }


    VAR_6->buf->pos -= VAR_10;
    VAR_8 = VAR_6->buf->pos;


    *VAR_8 = (VAR_19 << 6);
    if (VAR_4->csid >= 2 && VAR_4->csid <= 63) {
        *VAR_8++ |= (((uint8_t)VAR_4->csid) & 0x3f);
    } else if (VAR_4->csid >= 64 && VAR_4->csid < 320) {
        ++VAR_8;
        *VAR_8++ = (uint8_t)(VAR_4->csid - 64);
    } else {
        *VAR_8++ |= 1;
        *VAR_8++ = (uint8_t)(VAR_4->csid - 64);
        *VAR_8++ = (uint8_t)((VAR_4->csid - 64) >> 8);
    }


    VAR_11 = VAR_8 - VAR_6->buf->pos;
    FUNC_2(VAR_17, VAR_6->buf->pos, VAR_11);
    VAR_17[0] |= 0xc0;


    if (VAR_19 <= 2) {
        VAR_9 = (u_char*)&VAR_14;
        *VAR_8++ = VAR_9[2];
        *VAR_8++ = VAR_9[1];
        *VAR_8++ = VAR_9[0];
        if (VAR_19 <= 1) {
            VAR_9 = (u_char*)&VAR_13;
            *VAR_8++ = VAR_9[2];
            *VAR_8++ = VAR_9[1];
            *VAR_8++ = VAR_9[0];
            *VAR_8++ = VAR_4->type;
            if (VAR_19 == 0) {
                VAR_9 = (u_char*)&VAR_4->msid;
                *VAR_8++ = VAR_9[0];
                *VAR_8++ = VAR_9[1];
                *VAR_8++ = VAR_9[2];
                *VAR_8++ = VAR_9[3];
            }
        }
    }


    if (VAR_15) {
        VAR_9 = (u_char*)&VAR_15;
        *VAR_8++ = VAR_9[3];
        *VAR_8++ = VAR_9[2];
        *VAR_8++ = VAR_9[1];
        *VAR_8++ = VAR_9[0];





        if (VAR_18->play_time_fix) {
            FUNC_2(&VAR_17[VAR_11], VAR_8 - 4, 4);
            VAR_11 += 4;
        }
    }


    for(VAR_6 = VAR_6->next; VAR_6; VAR_6 = VAR_6->next) {
        VAR_6->buf->pos -= VAR_11;
        FUNC_2(VAR_6->buf->pos, VAR_17, VAR_11);
    }
}
