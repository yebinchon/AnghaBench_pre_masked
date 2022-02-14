
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_11__ {TYPE_2__* track; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {scalar_t__ codec; size_t header_size; int * header; } ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_4, u_char *VAR_5, u_char *VAR_6)
{
    ngx_rtmp_mp4_ctx_t *VAR_7;

    if (VAR_5 == VAR_6) {
        return VAR_1;
    }

    VAR_7 = FUNC_1(VAR_4, VAR_3);

    if (VAR_7->track == ((void*)0) || VAR_7->track->codec != VAR_2) {
        return VAR_1;
    }

    VAR_7->track->header = VAR_5;
    VAR_7->track->header_size = (size_t) (VAR_6 - VAR_5);

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
                   "mp4: video h264 header size=%uz",
                   VAR_7->track->header_size);

    return VAR_1;
}
