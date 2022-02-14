
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_24__ {int test_only; scalar_t__ err; int is_exec; int is_link; int is_dir; int is_file; int failed; int events; int errors; int min_uses; int valid; int directio; int read_ahead; } ;
typedef TYPE_3__ ngx_open_file_info_t ;
struct TYPE_25__ {int data; scalar_t__ len; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_26__ {int op; } ;
typedef TYPE_5__ ngx_http_script_file_code_t ;
struct TYPE_27__ {void* status; void* ip; TYPE_7__* request; TYPE_4__* sp; } ;
typedef TYPE_6__ ngx_http_script_engine_t ;
struct TYPE_28__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_29__ {int open_file_cache; int open_file_cache_events; int open_file_cache_errors; int open_file_cache_min_uses; int open_file_cache_valid; int directio; int read_ahead; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_8__* FUNC_0 (TYPE_7__*,int ) ;
 void* VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_7__*,TYPE_8__*,TYPE_2__*,TYPE_3__*) ;
 TYPE_4__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,void*,TYPE_2__*) ;
 int FUNC_4 (int ,int ,scalar_t__,char*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*,TYPE_3__*,int ) ;

void
FUNC_7(ngx_http_script_engine_t *VAR_11)
{
    ngx_str_t VAR_12;
    ngx_http_request_t *VAR_13;
    ngx_open_file_info_t VAR_14;
    ngx_http_core_loc_conf_t *VAR_15;
    ngx_http_variable_value_t *VAR_16;
    ngx_http_script_file_code_t *VAR_17;

    VAR_16 = VAR_11->sp - 1;

    VAR_17 = (ngx_http_script_file_code_t *) VAR_11->ip;
    VAR_11->ip += sizeof(ngx_http_script_file_code_t);

    VAR_12.len = VAR_16->len - 1;
    VAR_12.data = VAR_16->data;

    VAR_13 = VAR_11->request;

    FUNC_3(VAR_5, VAR_13->connection->log, 0,
                   "http script file op %p \"%V\"", (void *) VAR_17->op, &VAR_12);

    VAR_15 = FUNC_0(VAR_13, VAR_7);

    FUNC_5(&VAR_14, sizeof(ngx_open_file_info_t));

    VAR_14.read_ahead = VAR_15->read_ahead;
    VAR_14.directio = VAR_15->directio;
    VAR_14.valid = VAR_15->open_file_cache_valid;
    VAR_14.min_uses = VAR_15->open_file_cache_min_uses;
    VAR_14.test_only = 1;
    VAR_14.errors = VAR_15->open_file_cache_errors;
    VAR_14.events = VAR_15->open_file_cache_events;

    if (FUNC_1(VAR_13, VAR_15, &VAR_12, &VAR_14) != VAR_6) {
        VAR_11->ip = VAR_8;
        VAR_11->status = VAR_3;
        return;
    }

    if (FUNC_6(VAR_15->open_file_cache, &VAR_12, &VAR_14, VAR_13->pool)
        != VAR_6)
    {
        if (VAR_14.err == 0) {
            VAR_11->ip = VAR_8;
            VAR_11->status = VAR_3;
            return;
        }

        if (VAR_14.err != VAR_1
            && VAR_14.err != VAR_2
            && VAR_14.err != VAR_0)
        {
            FUNC_4(VAR_4, VAR_13->connection->log, VAR_14.err,
                          "%s \"%s\" failed", VAR_14.failed, VAR_16->data);
        }

        switch (VAR_17->op) {

        case 128:
        case 135:
        case 133:
        case 134:
             goto false_value;

        case 129:
        case 132:
        case 130:
        case 131:
             goto true_value;
        }

        goto false_value;
    }

    switch (VAR_17->op) {
    case 128:
        if (VAR_14.is_file) {
             goto true_value;
        }
        goto false_value;

    case 129:
        if (VAR_14.is_file) {
            goto false_value;
        }
        goto true_value;

    case 135:
        if (VAR_14.is_dir) {
             goto true_value;
        }
        goto false_value;

    case 132:
        if (VAR_14.is_dir) {
            goto false_value;
        }
        goto true_value;

    case 133:
        if (VAR_14.is_file || VAR_14.is_dir || VAR_14.is_link) {
             goto true_value;
        }
        goto false_value;

    case 130:
        if (VAR_14.is_file || VAR_14.is_dir || VAR_14.is_link) {
            goto false_value;
        }
        goto true_value;

    case 134:
        if (VAR_14.is_exec) {
             goto true_value;
        }
        goto false_value;

    case 131:
        if (VAR_14.is_exec) {
            goto false_value;
        }
        goto true_value;
    }

false_value:

    FUNC_2(VAR_5, VAR_13->connection->log, 0,
                   "http script file op false");

    *VAR_16 = VAR_9;
    return;

true_value:

    *VAR_16 = VAR_10;
    return;
}
