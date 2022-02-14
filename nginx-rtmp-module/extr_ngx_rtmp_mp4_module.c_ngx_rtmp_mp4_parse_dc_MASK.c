
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_char ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_12__ {TYPE_2__* track; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int codec; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_7, u_char *VAR_8, u_char *VAR_9)
{
    uint8_t VAR_10;
    ngx_rtmp_mp4_ctx_t *VAR_11;
    ngx_int_t *VAR_12;

    VAR_11 = FUNC_1(VAR_7, VAR_6);

    if (VAR_11->track == ((void*)0)) {
        return VAR_2;
    }

    if (VAR_8 + 13 > VAR_9) {
        return VAR_0;
    }

    VAR_10 = * (uint8_t *) VAR_8;
    VAR_8 += 13;
    VAR_12 = &VAR_11->track->codec;

    switch (VAR_10) {
        case 0x21:
            *VAR_12 = VAR_5;
            break;

        case 0x40:
        case 0x66:
        case 0x67:
        case 0x68:
            *VAR_12 = VAR_3;
            break;

        case 0x69:
        case 0x6b:
            *VAR_12 = VAR_4;
            break;
    }

    FUNC_0(VAR_1, VAR_7->connection->log, 0,
                   "mp4: decoder descriptor id=%i codec=%i",
                   (ngx_int_t) VAR_10, *VAR_12);

    return FUNC_2(VAR_7, VAR_8, VAR_9);
}
