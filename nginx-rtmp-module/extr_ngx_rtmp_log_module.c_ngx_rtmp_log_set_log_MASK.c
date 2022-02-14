
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_22__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_23__ {TYPE_7__* format; int * file; } ;
typedef TYPE_5__ ngx_rtmp_log_t ;
struct TYPE_20__ {scalar_t__ nelts; TYPE_7__* elts; } ;
struct TYPE_24__ {int combined_used; TYPE_2__ formats; } ;
typedef TYPE_6__ ngx_rtmp_log_main_conf_t ;
struct TYPE_21__ {scalar_t__ len; int data; } ;
struct TYPE_25__ {TYPE_3__ name; } ;
typedef TYPE_7__ ngx_rtmp_log_fmt_t ;
struct TYPE_26__ {int off; int * logs; } ;
typedef TYPE_8__ ngx_rtmp_log_app_conf_t ;
struct TYPE_27__ {TYPE_1__* args; int cycle; int pool; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_19__ {int nelts; TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_9__*,int ,char*,TYPE_4__*) ;
 int * FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 TYPE_6__* FUNC_5 (TYPE_9__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;

__attribute__((used)) static char *
FUNC_9(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_rtmp_log_app_conf_t *VAR_7 = VAR_6;

    ngx_rtmp_log_main_conf_t *VAR_8;
    ngx_rtmp_log_fmt_t *VAR_9;
    ngx_rtmp_log_t *VAR_10;
    ngx_str_t *VAR_11, VAR_12;
    ngx_uint_t VAR_13;

    VAR_11 = VAR_4->args->elts;

    if (FUNC_7(VAR_11[1].data, "off") == 0) {
        VAR_7->off = 1;
        return VAR_1;
    }

    if (VAR_7->logs == ((void*)0)) {
        VAR_7->logs = FUNC_0(VAR_4->pool, 2, sizeof(ngx_rtmp_log_t));
        if (VAR_7->logs == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_10 = FUNC_1(VAR_7->logs);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_10, sizeof(*VAR_10));

    VAR_8 = FUNC_5(VAR_4, VAR_3);

    VAR_10->file = FUNC_3(VAR_4->cycle, &VAR_11[1]);
    if (VAR_10->file == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_4->args->nelts == 2) {
        FUNC_6(&VAR_12, "combined");
        VAR_8->combined_used = 1;

    } else {
        VAR_12 = VAR_11[2];
        if (FUNC_7(VAR_12.data, "combined") == 0) {
            VAR_8->combined_used = 1;
        }
    }

    VAR_9 = VAR_8->formats.elts;
    for (VAR_13 = 0; VAR_13 < VAR_8->formats.nelts; ++VAR_13, ++VAR_9) {
        if (VAR_9->name.len == VAR_12.len &&
            FUNC_8(VAR_9->name.data, VAR_12.data, VAR_12.len) == 0)
        {
            VAR_10->format = VAR_9;
            break;
        }
    }

    if (VAR_10->format == ((void*)0)) {
        FUNC_2(VAR_2, VAR_4, 0, "unknown log format \"%V\"",
                           &VAR_12);
        return VAR_0;
    }

    return VAR_1;
}
