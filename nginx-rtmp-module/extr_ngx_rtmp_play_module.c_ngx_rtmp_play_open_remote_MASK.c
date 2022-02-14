
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_23__ {TYPE_3__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_play_t ;
struct TYPE_24__ {int url; } ;
typedef TYPE_5__ ngx_rtmp_play_entry_t ;
struct TYPE_21__ {scalar_t__ fd; } ;
struct TYPE_25__ {scalar_t__ file_id; TYPE_2__ file; scalar_t__ nbody; scalar_t__ nheader; scalar_t__ ncrs; } ;
typedef TYPE_6__ ngx_rtmp_play_ctx_t ;
struct TYPE_20__ {scalar_t__ len; } ;
struct TYPE_26__ {TYPE_1__ local_path; } ;
typedef TYPE_7__ ngx_rtmp_play_app_conf_t ;
struct TYPE_27__ {int argsize; int * arg; int handle; int sink; int create; int url; } ;
typedef TYPE_8__ ngx_rtmp_netcall_init_t ;
typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;
typedef int ci ;
struct TYPE_22__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int *,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (TYPE_8__*,int) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 TYPE_7__* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_8__*) ;
 TYPE_5__* FUNC_7 (TYPE_4__*) ;
 int * FUNC_8 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_10, ngx_rtmp_play_t *VAR_11)
{
    ngx_rtmp_play_app_conf_t *VAR_12;
    ngx_rtmp_play_ctx_t *VAR_13;
    ngx_rtmp_play_entry_t *VAR_14;
    ngx_rtmp_netcall_init_t VAR_15;
    u_char *VAR_16;
    ngx_err_t VAR_17;
    static ngx_uint_t VAR_18;

    VAR_12 = FUNC_4(VAR_10, VAR_6);

    VAR_13 = FUNC_5(VAR_10, VAR_6);

    VAR_13->ncrs = 0;
    VAR_13->nheader = 0;
    VAR_13->nbody = 0;

    for ( ;; ) {
        VAR_13->file_id = ++VAR_18;


        if (VAR_13->file_id == 0) {
            continue;
        }

        VAR_16 = FUNC_8(VAR_10);

        VAR_13->file.fd = FUNC_3(VAR_16, VAR_12->local_path.len, 0);

        if (VAR_12->local_path.len == 0) {
            VAR_13->file_id = 0;
        }

        if (VAR_13->file.fd != VAR_2) {
            break;
        }

        VAR_17 = VAR_5;

        if (VAR_17 != VAR_0) {
            VAR_13->file_id = 0;

            FUNC_1(VAR_4, VAR_10->connection->log, VAR_17,
                          "play: failed to create temp file");

            return VAR_1;
        }
    }

    FUNC_0(VAR_3, VAR_10->connection->log, 0,
                   "play: temp file '%s' file_id=%ui",
                   VAR_16, VAR_13->file_id);

    VAR_14 = FUNC_7(VAR_10);

    FUNC_2(&VAR_15, sizeof(VAR_15));

    VAR_15.url = VAR_14->url;
    VAR_15.create = VAR_7;
    VAR_15.sink = VAR_9;
    VAR_15.handle = VAR_8;
    VAR_15.arg = VAR_11;
    VAR_15.argsize = sizeof(*VAR_11);

    return FUNC_6(VAR_10, &VAR_15);
}
