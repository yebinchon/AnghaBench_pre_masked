
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_19__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_20__ {int test_dir; int test_only; scalar_t__ err; scalar_t__ is_dir; int failed; int errors; int valid; } ;
typedef TYPE_3__ ngx_open_file_info_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_22__ {int open_file_cache; int open_file_cache_errors; int open_file_cache_valid; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_18__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,char*,...) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_10, ngx_http_core_loc_conf_t *VAR_11,
    u_char *VAR_12, u_char *VAR_13)
{
    u_char VAR_14;
    ngx_str_t VAR_15;
    ngx_open_file_info_t VAR_16;

    VAR_14 = *VAR_13;
    if (VAR_14 != '/' || VAR_12 == VAR_13) {

        VAR_14 = *(++VAR_13);
    }
    *VAR_13 = '\0';

    VAR_15.len = VAR_13 - VAR_12;
    VAR_15.data = VAR_12;

    FUNC_2(VAR_8, VAR_10->connection->log, 0,
                   "http index check dir: \"%V\"", &VAR_15);

    FUNC_4(&VAR_16, sizeof(ngx_open_file_info_t));

    VAR_16.test_dir = 1;
    VAR_16.test_only = 1;
    VAR_16.valid = VAR_11->open_file_cache_valid;
    VAR_16.errors = VAR_11->open_file_cache_errors;

    if (FUNC_1(VAR_10, VAR_11, &VAR_15, &VAR_16) != VAR_9) {
        return VAR_5;
    }

    if (FUNC_5(VAR_11->open_file_cache, &VAR_15, &VAR_16, VAR_10->pool)
        != VAR_9)
    {
        if (VAR_16.err) {
            if (VAR_16.err == VAR_3) {
                *VAR_13 = VAR_14;
                return FUNC_0(VAR_10, VAR_11, VAR_15.data, VAR_3);
            }

            if (VAR_16.err == VAR_0) {

                *VAR_13 = VAR_14;







                return VAR_9;
            }

            FUNC_3(VAR_7, VAR_10->connection->log, VAR_16.err,
                          "%s \"%s\" failed", VAR_16.failed, VAR_15.data);
        }

        return VAR_5;
    }

    *VAR_13 = VAR_14;

    if (VAR_16.is_dir) {
        return VAR_9;
    }

    FUNC_3(VAR_6, VAR_10->connection->log, 0,
                  "\"%s\" is not a directory", VAR_15.data);

    return VAR_5;
}
