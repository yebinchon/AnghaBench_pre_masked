
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef int u_char ;
struct TYPE_20__ {void** app_conf; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_24__ {scalar_t__ fd; } ;
struct TYPE_21__ {TYPE_6__ file; scalar_t__ audio; scalar_t__ video; scalar_t__ initialized; TYPE_5__* conf; } ;
typedef TYPE_3__ ngx_rtmp_record_rec_ctx_t ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_22__ {int path; TYPE_16__ recorder; } ;
typedef TYPE_4__ ngx_rtmp_record_done_t ;
struct TYPE_23__ {void** rec_conf; TYPE_16__ id; scalar_t__ notify; } ;
typedef TYPE_5__ ngx_rtmp_record_app_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_19__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_16__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_16__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,char*,char*,char*) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int*,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_rtmp_session_t *VAR_7,
                           ngx_rtmp_record_rec_ctx_t *VAR_8)
{
    ngx_rtmp_record_app_conf_t *VAR_9;
    ngx_err_t VAR_10;
    void **VAR_11;
    ngx_int_t VAR_12;
    ngx_rtmp_record_done_t VAR_13;
    u_char VAR_14;

    VAR_9 = VAR_8->conf;

    if (VAR_8->file.fd == VAR_3) {
        return VAR_0;
    }

    if (VAR_8->initialized) {
        VAR_14 = 0;

        if (VAR_8->video) {
            VAR_14 |= 0x01;
        }

        if (VAR_8->audio) {
            VAR_14 |= 0x04;
        }

        if (FUNC_7(&VAR_8->file, &VAR_14, 1, 4) == VAR_1) {
            FUNC_2(VAR_4, VAR_7->connection->log, VAR_6,
                          "record: %V error writing av mask", &VAR_9->id);
        }
    }

    if (FUNC_0(VAR_8->file.fd) == VAR_2) {
        VAR_10 = VAR_6;
        FUNC_2(VAR_4, VAR_7->connection->log, VAR_10,
                      "record: %V error closing file", &VAR_9->id);

        FUNC_5(VAR_7, VAR_8);
    }

    VAR_8->file.fd = VAR_3;

    FUNC_1(VAR_5, VAR_7->connection->log, 0,
                   "record: %V closed", &VAR_9->id);

    if (VAR_9->notify) {
        FUNC_6(VAR_7, "NetStream.Record.Stop", "status",
                             VAR_9->id.data ? (char *) VAR_9->id.data : "");
    }

    VAR_11 = VAR_7->app_conf;

    if (VAR_9->rec_conf) {
        VAR_7->app_conf = VAR_9->rec_conf;
    }

    VAR_13.recorder = VAR_9->id;
    FUNC_4(VAR_7, VAR_8, &VAR_13.path);

    VAR_12 = FUNC_3(VAR_7, &VAR_13);

    VAR_7->app_conf = VAR_11;

    return VAR_12;
}
