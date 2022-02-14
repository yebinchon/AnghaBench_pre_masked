
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ssize_t ;
struct TYPE_21__ {TYPE_3__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
struct TYPE_22__ {int open_file_cache; int open_file_cache_min_uses; int open_file_cache_valid; } ;
typedef TYPE_5__ ngx_stream_log_srv_conf_t ;
struct TYPE_23__ {TYPE_2__* values; TYPE_1__* lengths; } ;
typedef TYPE_6__ ngx_stream_log_script_t ;
struct TYPE_24__ {char* data; int len; } ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_25__ {int log; scalar_t__ err; char* fd; int failed; int directio; int min_uses; int valid; } ;
typedef TYPE_8__ ngx_open_file_info_t ;
struct TYPE_20__ {int log; int pool; } ;
struct TYPE_19__ {int elts; } ;
struct TYPE_18__ {int elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,char*) ;
 int FUNC_2 (TYPE_8__*,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_7__*,TYPE_8__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int ) ;
 int VAR_5 ;
 int * FUNC_5 (TYPE_4__*,TYPE_7__*,int ,int,int ) ;
 size_t FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_7(ngx_stream_session_t *VAR_6,
    ngx_stream_log_script_t *VAR_7, u_char **VAR_8, u_char *VAR_9, size_t VAR_10)
{
    ssize_t VAR_11;
    ngx_str_t VAR_12;
    ngx_open_file_info_t VAR_13;
    ngx_stream_log_srv_conf_t *VAR_14;

    if (FUNC_5(VAR_6, &VAR_12, VAR_7->lengths->elts, 1,
                              VAR_7->values->elts)
        == ((void*)0))
    {

        return VAR_10;
    }

    VAR_12.data[VAR_12.len - 1] = '\0';
    *VAR_8 = VAR_12.data;

    FUNC_0(VAR_1, VAR_6->connection->log, 0,
                   "stream log \"%s\"", VAR_12.data);

    VAR_14 = FUNC_4(VAR_6, VAR_5);

    FUNC_2(&VAR_13, sizeof(ngx_open_file_info_t));

    VAR_13.log = 1;
    VAR_13.valid = VAR_14->open_file_cache_valid;
    VAR_13.min_uses = VAR_14->open_file_cache_min_uses;
    VAR_13.directio = VAR_3;

    if (FUNC_3(VAR_14->open_file_cache, &VAR_12, &VAR_13,
                             VAR_6->connection->pool)
        != VAR_2)
    {
        if (VAR_13.err == 0) {

            return VAR_10;
        }

        FUNC_1(VAR_0, VAR_6->connection->log, VAR_4,
                      "%s \"%s\" failed", VAR_13.failed, VAR_12.data);

        return VAR_10;
    }

    FUNC_0(VAR_1, VAR_6->connection->log, 0,
                   "stream log #%d", VAR_13.fd);

    VAR_11 = FUNC_6(VAR_13.fd, VAR_9, VAR_10);

    return VAR_11;
}
