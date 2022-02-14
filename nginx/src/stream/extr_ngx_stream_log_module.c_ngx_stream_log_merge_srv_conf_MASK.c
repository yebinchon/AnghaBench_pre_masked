
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ off; scalar_t__ logs; int * open_file_cache; int open_file_cache_min_uses; int open_file_cache_valid; } ;
typedef TYPE_1__ ngx_stream_log_srv_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_stream_log_srv_conf_t *VAR_5 = VAR_3;
    ngx_stream_log_srv_conf_t *VAR_6 = VAR_4;

    if (VAR_6->open_file_cache == VAR_1) {

        VAR_6->open_file_cache = VAR_5->open_file_cache;
        VAR_6->open_file_cache_valid = VAR_5->open_file_cache_valid;
        VAR_6->open_file_cache_min_uses = VAR_5->open_file_cache_min_uses;

        if (VAR_6->open_file_cache == VAR_1) {
            VAR_6->open_file_cache = ((void*)0);
        }
    }

    if (VAR_6->logs || VAR_6->off) {
        return VAR_0;
    }

    VAR_6->logs = VAR_5->logs;
    VAR_6->off = VAR_5->off;

    return VAR_0;
}
