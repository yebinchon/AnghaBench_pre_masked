
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_13__ {int timestamp; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_1__ cursor; } ;
typedef TYPE_4__ ngx_rtmp_mp4_track_t ;
struct TYPE_17__ {size_t ntracks; size_t start_timestamp; int epoch; TYPE_4__* tracks; } ;
typedef TYPE_5__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_file_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,size_t) ;
 size_t FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_5, ngx_file_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_rtmp_mp4_ctx_t *VAR_8;
    ngx_rtmp_mp4_track_t *VAR_9;
    ngx_uint_t VAR_10;

    VAR_8 = FUNC_1(VAR_5, VAR_4);

    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_0(VAR_0, VAR_5->connection->log, 0,
                   "mp4: seek timestamp=%ui", VAR_7);

    for (VAR_10 = 0; VAR_10 < VAR_8->ntracks; ++VAR_10) {
        VAR_9 = &VAR_8->tracks[VAR_10];

        if (VAR_9->type != VAR_2) {
            continue;
        }

        FUNC_0(VAR_0, VAR_5->connection->log, 0,
                       "mp4: track#%ui seek video", VAR_10);

        FUNC_3(VAR_5, VAR_9, VAR_7);

        VAR_7 = FUNC_4(VAR_9, VAR_9->cursor.timestamp);

        break;
    }

    for (VAR_10 = 0; VAR_10 < VAR_8->ntracks; ++VAR_10) {
        VAR_9 = &VAR_8->tracks[VAR_10];

        if (VAR_9->type == VAR_2) {
            continue;
        }

        FUNC_0(VAR_0, VAR_5->connection->log, 0,
                       "mp4: track#%ui seek", VAR_10);

        FUNC_3(VAR_5, &VAR_8->tracks[VAR_10], VAR_7);
    }

    VAR_8->start_timestamp = VAR_7;
    VAR_8->epoch = VAR_3;

    return FUNC_2(VAR_5);
}
