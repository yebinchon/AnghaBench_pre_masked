
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct TYPE_10__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_11__ {TYPE_1__* track; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int log; } ;
struct TYPE_8__ {int csid; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (char,char,unsigned char,char) ;
 int VAR_7 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_8, u_char *VAR_9, u_char *VAR_10)
{
    ngx_rtmp_mp4_ctx_t *VAR_11;
    uint32_t VAR_12;

    VAR_11 = FUNC_1(VAR_8, VAR_7);

    if (VAR_11->track == ((void*)0)) {
        return VAR_2;
    }

    if (VAR_9 + 12 > VAR_10) {
        return VAR_0;
    }

    VAR_12 = *(uint32_t *)(VAR_9 + 8);

    if (VAR_12 == FUNC_2('v','i','d','e')) {
        VAR_11->track->type = VAR_6;
        VAR_11->track->csid = VAR_4;

        FUNC_0(VAR_1, VAR_8->connection->log, 0,
                       "mp4: video track");

    } else if (VAR_12 == FUNC_2('s','o','u','n')) {
        VAR_11->track->type = VAR_5;
        VAR_11->track->csid = VAR_3;

        FUNC_0(VAR_1, VAR_8->connection->log, 0,
                       "mp4: audio track");
    } else {
        FUNC_0(VAR_1, VAR_8->connection->log, 0,
                       "mp4: unknown track");
    }

    return VAR_2;
}
