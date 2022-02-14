
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rec; scalar_t__ flags; int url; int interval; int notify; int lock_file; int append; int unique; int max_frames; int max_size; int suffix; int path; } ;
typedef TYPE_1__ ngx_rtmp_record_app_conf_t ;
typedef int ngx_msec_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_rtmp_record_app_conf_t *VAR_6 = VAR_4;
    ngx_rtmp_record_app_conf_t *VAR_7 = VAR_5;
    ngx_rtmp_record_app_conf_t **VAR_8;

    FUNC_5(VAR_7->path, VAR_6->path, "");
    FUNC_5(VAR_7->suffix, VAR_6->suffix, ".flv");
    FUNC_4(VAR_7->max_size, VAR_6->max_size, 0);
    FUNC_4(VAR_7->max_frames, VAR_6->max_frames, 0);
    FUNC_6(VAR_7->unique, VAR_6->unique, 0);
    FUNC_6(VAR_7->append, VAR_6->append, 0);
    FUNC_6(VAR_7->lock_file, VAR_6->lock_file, 0);
    FUNC_6(VAR_7->notify, VAR_6->notify, 0);
    FUNC_2(VAR_7->interval, VAR_6->interval,
                              (ngx_msec_t) VAR_2);
    FUNC_1(VAR_7->flags, VAR_6->flags, 0);
    FUNC_3(VAR_7->url, VAR_6->url, ((void*)0));

    if (VAR_7->flags) {
        VAR_8 = FUNC_0(&VAR_7->rec);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_8 = VAR_7;
    }

    return VAR_1;
}
