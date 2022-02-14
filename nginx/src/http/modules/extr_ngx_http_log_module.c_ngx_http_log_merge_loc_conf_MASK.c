
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * format; int * file; } ;
typedef TYPE_2__ ngx_http_log_t ;
struct TYPE_11__ {int * elts; } ;
struct TYPE_13__ {int combined_used; TYPE_1__ formats; } ;
typedef TYPE_3__ ngx_http_log_main_conf_t ;
struct TYPE_14__ {int * logs; scalar_t__ off; int * open_file_cache; int open_file_cache_min_uses; int open_file_cache_valid; } ;
typedef TYPE_4__ ngx_http_log_loc_conf_t ;
typedef int ngx_http_log_fmt_t ;
struct TYPE_15__ {int cycle; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ngx_http_log_loc_conf_t *VAR_8 = VAR_6;
    ngx_http_log_loc_conf_t *VAR_9 = VAR_7;

    ngx_http_log_t *VAR_10;
    ngx_http_log_fmt_t *VAR_11;
    ngx_http_log_main_conf_t *VAR_12;

    if (VAR_9->open_file_cache == VAR_2) {

        VAR_9->open_file_cache = VAR_8->open_file_cache;
        VAR_9->open_file_cache_valid = VAR_8->open_file_cache_valid;
        VAR_9->open_file_cache_min_uses = VAR_8->open_file_cache_min_uses;

        if (VAR_9->open_file_cache == VAR_2) {
            VAR_9->open_file_cache = ((void*)0);
        }
    }

    if (VAR_9->logs || VAR_9->off) {
        return VAR_1;
    }

    VAR_9->logs = VAR_8->logs;
    VAR_9->off = VAR_8->off;

    if (VAR_9->logs || VAR_9->off) {
        return VAR_1;
    }

    VAR_9->logs = FUNC_0(VAR_5->pool, 2, sizeof(ngx_http_log_t));
    if (VAR_9->logs == ((void*)0)) {
        return VAR_0;
    }

    VAR_10 = FUNC_1(VAR_9->logs);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_10, sizeof(ngx_http_log_t));

    VAR_10->file = FUNC_2(VAR_5->cycle, &VAR_3);
    if (VAR_10->file == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = FUNC_3(VAR_5, VAR_4);
    VAR_11 = VAR_12->formats.elts;


    VAR_10->format = &VAR_11[0];
    VAR_12->combined_used = 1;

    return VAR_1;
}
