
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u_char ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_12__ {TYPE_2__* track; void* height; void* width; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ codec; scalar_t__ fhdr; } ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__,void*,void*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__*,scalar_t__*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_4, u_char *VAR_5, u_char *VAR_6,
                         ngx_int_t VAR_7)
{
    ngx_rtmp_mp4_ctx_t *VAR_8;

    VAR_8 = FUNC_1(VAR_4, VAR_3);

    if (VAR_8->track == ((void*)0)) {
        return VAR_2;
    }

    VAR_8->track->codec = VAR_7;

    if (VAR_5 + 78 > VAR_6) {
        return VAR_0;
    }

    VAR_5 += 24;

    VAR_8->width = FUNC_3(*(uint16_t *) VAR_5);

    VAR_5 += 2;

    VAR_8->height = FUNC_3(*(uint16_t *) VAR_5);

    VAR_5 += 52;

    FUNC_0(VAR_1, VAR_4->connection->log, 0,
                   "mp4: video settings codec=%i, width=%ui, height=%ui",
                   VAR_7, VAR_8->width, VAR_8->height);

    if (FUNC_2(VAR_4, VAR_5, VAR_6) != VAR_2) {
        return VAR_0;
    }

    VAR_8->track->fhdr = (u_char) VAR_8->track->codec;

    return VAR_2;
}
