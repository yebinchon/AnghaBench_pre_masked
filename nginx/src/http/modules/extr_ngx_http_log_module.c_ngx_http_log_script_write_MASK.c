
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ssize_t ;
struct TYPE_27__ {char* data; int len; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_28__ {int test_dir; int test_only; scalar_t__ err; int log; char* fd; int failed; int directio; int min_uses; int valid; int is_dir; int events; int errors; } ;
typedef TYPE_5__ ngx_open_file_info_t ;
struct TYPE_29__ {TYPE_3__* connection; int pool; int root_tested; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_30__ {TYPE_2__* values; TYPE_1__* lengths; } ;
typedef TYPE_7__ ngx_http_log_script_t ;
struct TYPE_31__ {int open_file_cache; int open_file_cache_min_uses; int open_file_cache_valid; } ;
typedef TYPE_8__ ngx_http_log_loc_conf_t ;
struct TYPE_32__ {int open_file_cache; int open_file_cache_events; int open_file_cache_errors; int open_file_cache_min_uses; int open_file_cache_valid; } ;
typedef TYPE_9__ ngx_http_core_loc_conf_t ;
struct TYPE_26__ {int log; } ;
struct TYPE_25__ {int elts; } ;
struct TYPE_24__ {int elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (TYPE_6__*,int ) ;
 int VAR_8 ;
 int * FUNC_1 (TYPE_6__*,TYPE_4__*,size_t*,int ) ;
 int * FUNC_2 (TYPE_6__*,TYPE_4__*,int ,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_9__*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,char*,char*) ;
 int FUNC_5 (int ,int ,scalar_t__,char*,char*,...) ;
 int FUNC_6 (TYPE_5__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,TYPE_5__*,int ) ;
 size_t FUNC_8 (char*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_9(ngx_http_request_t *VAR_9, ngx_http_log_script_t *VAR_10,
    u_char **VAR_11, u_char *VAR_12, size_t VAR_13)
{
    size_t VAR_14;
    ssize_t VAR_15;
    ngx_str_t VAR_16, VAR_17;
    ngx_open_file_info_t VAR_18;
    ngx_http_log_loc_conf_t *VAR_19;
    ngx_http_core_loc_conf_t *VAR_20;

    VAR_20 = FUNC_0(VAR_9, VAR_7);

    if (!VAR_9->root_tested) {



        if (FUNC_1(VAR_9, &VAR_17, &VAR_14, 0) == ((void*)0)) {

            return VAR_13;
        }

        VAR_17.data[VAR_14] = '\0';

        FUNC_6(&VAR_18, sizeof(ngx_open_file_info_t));

        VAR_18.valid = VAR_20->open_file_cache_valid;
        VAR_18.min_uses = VAR_20->open_file_cache_min_uses;
        VAR_18.test_dir = 1;
        VAR_18.test_only = 1;
        VAR_18.errors = VAR_20->open_file_cache_errors;
        VAR_18.events = VAR_20->open_file_cache_events;

        if (FUNC_3(VAR_9, VAR_20, &VAR_17, &VAR_18) != VAR_4) {

            return VAR_13;
        }

        if (FUNC_7(VAR_20->open_file_cache, &VAR_17, &VAR_18, VAR_9->pool)
            != VAR_4)
        {
            if (VAR_18.err == 0) {

                return VAR_13;
            }

            FUNC_5(VAR_3, VAR_9->connection->log, VAR_18.err,
                          "testing \"%s\" existence failed", VAR_17.data);


            return VAR_13;
        }

        if (!VAR_18.is_dir) {
            FUNC_5(VAR_3, VAR_9->connection->log, VAR_0,
                          "testing \"%s\" existence failed", VAR_17.data);


            return VAR_13;
        }
    }

    if (FUNC_2(VAR_9, &VAR_16, VAR_10->lengths->elts, 1,
                            VAR_10->values->elts)
        == ((void*)0))
    {

        return VAR_13;
    }

    VAR_16.data[VAR_16.len - 1] = '\0';
    *VAR_11 = VAR_16.data;

    FUNC_4(VAR_2, VAR_9->connection->log, 0,
                   "http log \"%s\"", VAR_16.data);

    VAR_19 = FUNC_0(VAR_9, VAR_8);

    FUNC_6(&VAR_18, sizeof(ngx_open_file_info_t));

    VAR_18.log = 1;
    VAR_18.valid = VAR_19->open_file_cache_valid;
    VAR_18.min_uses = VAR_19->open_file_cache_min_uses;
    VAR_18.directio = VAR_5;

    if (FUNC_3(VAR_9, VAR_20, &VAR_16, &VAR_18) != VAR_4) {

        return VAR_13;
    }

    if (FUNC_7(VAR_19->open_file_cache, &VAR_16, &VAR_18, VAR_9->pool)
        != VAR_4)
    {
        if (VAR_18.err == 0) {

            return VAR_13;
        }

        FUNC_5(VAR_1, VAR_9->connection->log, VAR_6,
                      "%s \"%s\" failed", VAR_18.failed, VAR_16.data);

        return VAR_13;
    }

    FUNC_4(VAR_2, VAR_9->connection->log, 0,
                   "http log #%d", VAR_18.fd);

    VAR_15 = FUNC_8(VAR_18.fd, VAR_12, VAR_13);

    return VAR_15;
}
