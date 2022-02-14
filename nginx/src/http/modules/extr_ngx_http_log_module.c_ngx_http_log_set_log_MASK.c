
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_27__ ;
typedef struct TYPE_38__ TYPE_26__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef int ssize_t ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_syslog_peer_t ;
struct TYPE_44__ {char* data; scalar_t__ len; } ;
typedef TYPE_6__ ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_45__ {int complete_lengths; int complete_values; TYPE_26__* file; int * syslog_peer; TYPE_3__* script; int * complex_value; int * filter; TYPE_6__* value; TYPE_14__* cf; TYPE_11__* format; scalar_t__ variables; int * values; int * lengths; TYPE_6__* source; } ;
typedef TYPE_7__ ngx_http_script_compile_t ;
typedef TYPE_7__ ngx_http_log_t ;
typedef int ngx_http_log_script_t ;
struct TYPE_37__ {scalar_t__ nelts; TYPE_11__* elts; } ;
struct TYPE_46__ {int combined_used; TYPE_1__ formats; } ;
typedef TYPE_9__ ngx_http_log_main_conf_t ;
struct TYPE_33__ {int off; int * logs; } ;
typedef TYPE_10__ ngx_http_log_loc_conf_t ;
struct TYPE_40__ {scalar_t__ len; int data; } ;
struct TYPE_34__ {TYPE_2__ name; } ;
typedef TYPE_11__ ngx_http_log_fmt_t ;
struct TYPE_35__ {scalar_t__ flush; int gzip; TYPE_4__* event; int * start; int * last; int * pos; } ;
typedef TYPE_12__ ngx_http_log_buf_t ;
typedef int ngx_http_complex_value_t ;
typedef TYPE_7__ ngx_http_compile_complex_value_t ;
typedef int ngx_event_t ;
struct TYPE_36__ {TYPE_27__* cycle; int pool; TYPE_5__* args; } ;
typedef TYPE_14__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_43__ {int nelts; TYPE_6__* elts; } ;
struct TYPE_42__ {int cancelable; int * log; int handler; TYPE_26__* data; } ;
struct TYPE_41__ {int values; int lengths; } ;
struct TYPE_39__ {int new_log; } ;
struct TYPE_38__ {TYPE_12__* data; int flush; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_7__* FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (TYPE_27__*,TYPE_6__*,int ) ;
 int FUNC_4 (int ,TYPE_14__*,int ,char*,...) ;
 TYPE_26__* FUNC_5 (TYPE_27__*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 TYPE_9__* FUNC_7 (TYPE_14__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_7__*,int) ;
 int * FUNC_11 (int ,int) ;
 int FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (TYPE_6__*,int ) ;
 void* FUNC_14 (int ,int) ;
 int * FUNC_15 (int ,int) ;
 int FUNC_16 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_17 (int ,char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (char*,char*,int) ;
 char* FUNC_20 (TYPE_14__*,int *) ;

__attribute__((used)) static char *
FUNC_21(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_http_log_loc_conf_t *VAR_12 = VAR_11;

    ssize_t VAR_13;
    ngx_int_t VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_msec_t VAR_17;
    ngx_str_t *VAR_18, VAR_19, VAR_20;
    ngx_http_log_t *VAR_21;
    ngx_syslog_peer_t *VAR_22;
    ngx_http_log_buf_t *VAR_23;
    ngx_http_log_fmt_t *VAR_24;
    ngx_http_log_main_conf_t *VAR_25;
    ngx_http_script_compile_t VAR_26;
    ngx_http_compile_complex_value_t VAR_27;

    VAR_18 = VAR_9->args->elts;

    if (FUNC_18(VAR_18[1].data, "off") == 0) {
        VAR_12->off = 1;
        if (VAR_9->args->nelts == 2) {
            return VAR_1;
        }

        FUNC_4(VAR_3, VAR_9, 0,
                           "invalid parameter \"%V\"", &VAR_18[2]);
        return VAR_0;
    }

    if (VAR_12->logs == ((void*)0)) {
        VAR_12->logs = FUNC_0(VAR_9->pool, 2, sizeof(ngx_http_log_t));
        if (VAR_12->logs == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_25 = FUNC_7(VAR_9, VAR_8);

    VAR_21 = FUNC_1(VAR_12->logs);
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_10(VAR_21, sizeof(ngx_http_log_t));


    if (FUNC_19(VAR_18[1].data, "syslog:", 7) == 0) {

        VAR_22 = FUNC_14(VAR_9->pool, sizeof(ngx_syslog_peer_t));
        if (VAR_22 == ((void*)0)) {
            return VAR_0;
        }

        if (FUNC_20(VAR_9, VAR_22) != VAR_1) {
            return VAR_0;
        }

        VAR_21->syslog_peer = VAR_22;

        goto process_formats;
    }

    VAR_16 = FUNC_9(&VAR_18[1]);

    if (VAR_16 == 0) {
        VAR_21->file = FUNC_5(VAR_9->cycle, &VAR_18[1]);
        if (VAR_21->file == ((void*)0)) {
            return VAR_0;
        }

    } else {
        if (FUNC_3(VAR_9->cycle, &VAR_18[1], 0) != VAR_4) {
            return VAR_0;
        }

        VAR_21->script = FUNC_14(VAR_9->pool, sizeof(ngx_http_log_script_t));
        if (VAR_21->script == ((void*)0)) {
            return VAR_0;
        }

        FUNC_10(&VAR_26, sizeof(ngx_http_script_compile_t));

        VAR_26.cf = VAR_9;
        VAR_26.source = &VAR_18[1];
        VAR_26.lengths = &VAR_21->script->lengths;
        VAR_26.values = &VAR_21->script->values;
        VAR_26.variables = VAR_16;
        VAR_26.complete_lengths = 1;
        VAR_26.complete_values = 1;

        if (FUNC_8(&VAR_26) != VAR_4) {
            return VAR_0;
        }
    }

process_formats:

    if (VAR_9->args->nelts >= 3) {
        VAR_19 = VAR_18[2];

        if (FUNC_18(VAR_19.data, "combined") == 0) {
            VAR_25->combined_used = 1;
        }

    } else {
        FUNC_16(&VAR_19, "combined");
        VAR_25->combined_used = 1;
    }

    VAR_24 = VAR_25->formats.elts;
    for (VAR_15 = 0; VAR_15 < VAR_25->formats.nelts; VAR_15++) {
        if (VAR_24[VAR_15].name.len == VAR_19.len
            && FUNC_17(VAR_24[VAR_15].name.data, VAR_19.data) == 0)
        {
            VAR_21->format = &VAR_24[VAR_15];
            break;
        }
    }

    if (VAR_21->format == ((void*)0)) {
        FUNC_4(VAR_3, VAR_9, 0,
                           "unknown log format \"%V\"", &VAR_19);
        return VAR_0;
    }

    VAR_13 = 0;
    VAR_17 = 0;
    VAR_14 = 0;

    for (VAR_15 = 3; VAR_15 < VAR_9->args->nelts; VAR_15++) {

        if (FUNC_19(VAR_18[VAR_15].data, "buffer=", 7) == 0) {
            VAR_20.len = VAR_18[VAR_15].len - 7;
            VAR_20.data = VAR_18[VAR_15].data + 7;

            VAR_13 = FUNC_12(&VAR_20);

            if (VAR_13 == VAR_2 || VAR_13 == 0) {
                FUNC_4(VAR_3, VAR_9, 0,
                                   "invalid buffer size \"%V\"", &VAR_20);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_19(VAR_18[VAR_15].data, "flush=", 6) == 0) {
            VAR_20.len = VAR_18[VAR_15].len - 6;
            VAR_20.data = VAR_18[VAR_15].data + 6;

            VAR_17 = FUNC_13(&VAR_20, 0);

            if (VAR_17 == (ngx_msec_t) VAR_2 || VAR_17 == 0) {
                FUNC_4(VAR_3, VAR_9, 0,
                                   "invalid flush time \"%V\"", &VAR_20);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_19(VAR_18[VAR_15].data, "gzip", 4) == 0
            && (VAR_18[VAR_15].len == 4 || VAR_18[VAR_15].data[4] == '='))
        {
            FUNC_4(VAR_3, VAR_9, 0,
                               "nginx was built without zlib support");
            return VAR_0;

        }

        if (FUNC_19(VAR_18[VAR_15].data, "if=", 3) == 0) {
            VAR_20.len = VAR_18[VAR_15].len - 3;
            VAR_20.data = VAR_18[VAR_15].data + 3;

            FUNC_10(&VAR_27, sizeof(ngx_http_compile_complex_value_t));

            VAR_27.cf = VAR_9;
            VAR_27.value = &VAR_20;
            VAR_27.complex_value = FUNC_11(VAR_9->pool,
                                           sizeof(ngx_http_complex_value_t));
            if (VAR_27.complex_value == ((void*)0)) {
                return VAR_0;
            }

            if (FUNC_6(&VAR_27) != VAR_4) {
                return VAR_0;
            }

            VAR_21->filter = VAR_27.complex_value;

            continue;
        }

        FUNC_4(VAR_3, VAR_9, 0,
                           "invalid parameter \"%V\"", &VAR_18[VAR_15]);
        return VAR_0;
    }

    if (VAR_17 && VAR_13 == 0) {
        FUNC_4(VAR_3, VAR_9, 0,
                           "no buffer is defined for access_log \"%V\"",
                           &VAR_18[1]);
        return VAR_0;
    }

    if (VAR_13) {

        if (VAR_21->script) {
            FUNC_4(VAR_3, VAR_9, 0,
                               "buffered logs cannot have variables in name");
            return VAR_0;
        }

        if (VAR_21->syslog_peer) {
            FUNC_4(VAR_3, VAR_9, 0,
                               "logs to syslog cannot be buffered");
            return VAR_0;
        }

        if (VAR_21->file->data) {
            VAR_23 = VAR_21->file->data;

            if (VAR_23->last - VAR_23->start != VAR_13
                || VAR_23->flush != VAR_17
                || VAR_23->gzip != VAR_14)
            {
                FUNC_4(VAR_3, VAR_9, 0,
                                   "access_log \"%V\" already defined "
                                   "with conflicting parameters",
                                   &VAR_18[1]);
                return VAR_0;
            }

            return VAR_1;
        }

        VAR_23 = FUNC_14(VAR_9->pool, sizeof(ngx_http_log_buf_t));
        if (VAR_23 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->start = FUNC_15(VAR_9->pool, VAR_13);
        if (VAR_23->start == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->pos = VAR_23->start;
        VAR_23->last = VAR_23->start + VAR_13;

        if (VAR_17) {
            VAR_23->event = FUNC_14(VAR_9->pool, sizeof(ngx_event_t));
            if (VAR_23->event == ((void*)0)) {
                return VAR_0;
            }

            VAR_23->event->data = VAR_21->file;
            VAR_23->event->handler = VAR_7;
            VAR_23->event->log = &VAR_9->cycle->new_log;
            VAR_23->event->cancelable = 1;

            VAR_23->flush = VAR_17;
        }

        VAR_23->gzip = VAR_14;

        VAR_21->file->flush = VAR_6;
        VAR_21->file->data = VAR_23;
    }

    return VAR_1;
}
