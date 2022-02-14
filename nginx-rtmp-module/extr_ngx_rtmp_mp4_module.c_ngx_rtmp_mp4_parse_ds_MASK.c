
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_10__ {size_t header_size; int * header; } ;
typedef TYPE_3__ ngx_rtmp_mp4_track_t ;
struct TYPE_11__ {TYPE_3__* track; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3, u_char *VAR_4, u_char *VAR_5)
{
    ngx_rtmp_mp4_ctx_t *VAR_6;
    ngx_rtmp_mp4_track_t *VAR_7;

    VAR_6 = FUNC_1(VAR_3, VAR_2);

    VAR_7 = VAR_6->track;

    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7->header = VAR_4;
    VAR_7->header_size = (size_t) (VAR_5 - VAR_4);

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                   "mp4: decoder header size=%uz", VAR_7->header_size);

    return VAR_1;
}
