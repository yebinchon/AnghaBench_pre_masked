
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_play_entry_t ;
struct TYPE_7__ {scalar_t__ nelts; int elts; } ;
struct TYPE_5__ {int nbuckets; int * ctx; TYPE_4__ entries; int local_path; int temp_path; } ;
typedef TYPE_1__ ngx_rtmp_play_app_conf_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int ** FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int **,int ,int) ;
 int * FUNC_3 (int ,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_rtmp_play_app_conf_t *VAR_5 = VAR_3;
    ngx_rtmp_play_app_conf_t *VAR_6 = VAR_4;
    ngx_rtmp_play_entry_t **VAR_7;

    FUNC_1(VAR_6->temp_path, VAR_5->temp_path, "/tmp");
    FUNC_1(VAR_6->local_path, VAR_5->local_path, "");

    if (VAR_5->entries.nelts == 0) {
        goto done;
    }

    if (VAR_6->entries.nelts == 0) {
        VAR_6->entries = VAR_5->entries;
        goto done;
    }

    VAR_7 = FUNC_0(&VAR_6->entries, VAR_5->entries.nelts);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_7, VAR_5->entries.elts, VAR_5->entries.nelts * sizeof(void *));

done:

    if (VAR_6->entries.nelts == 0) {
        return VAR_1;
    }

    VAR_6->ctx = FUNC_3(VAR_2->pool, sizeof(void *) * VAR_6->nbuckets);
    if (VAR_6->ctx == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
