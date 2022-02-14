
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * format; scalar_t__ error_log_time; scalar_t__ disk_full_time; int * file; } ;
typedef TYPE_2__ ngx_rtmp_log_t ;
struct TYPE_10__ {int * elts; } ;
struct TYPE_12__ {int combined_used; TYPE_1__ formats; } ;
typedef TYPE_3__ ngx_rtmp_log_main_conf_t ;
typedef int ngx_rtmp_log_fmt_t ;
struct TYPE_13__ {int * logs; scalar_t__ off; } ;
typedef TYPE_4__ ngx_rtmp_log_app_conf_t ;
struct TYPE_14__ {int cycle; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ngx_rtmp_log_app_conf_t *VAR_8 = VAR_6;
    ngx_rtmp_log_app_conf_t *VAR_9 = VAR_7;
    ngx_rtmp_log_main_conf_t *VAR_10;
    ngx_rtmp_log_fmt_t *VAR_11;
    ngx_rtmp_log_t *VAR_12;

    if (VAR_9->logs || VAR_9->off) {
        return VAR_2;
    }

    VAR_9->logs = VAR_8->logs;
    VAR_9->off = VAR_8->off;

    if (VAR_9->logs || VAR_9->off) {
        return VAR_2;
    }

    VAR_9->logs = FUNC_0(VAR_5->pool, 2, sizeof(ngx_rtmp_log_t));
    if (VAR_9->logs == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = FUNC_1(VAR_9->logs);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->file = FUNC_2(VAR_5->cycle, &VAR_3);
    if (VAR_12->file == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->disk_full_time = 0;
    VAR_12->error_log_time = 0;

    VAR_10 = FUNC_3(VAR_5, VAR_4);
    VAR_11 = VAR_10->formats.elts;

    VAR_12->format = &VAR_11[0];
    VAR_10->combined_used = 1;

    return VAR_1;
}
