
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_6__ {int nbuckets; int active; int * pull; TYPE_3__* conf; int respawn; } ;
typedef TYPE_1__ ngx_rtmp_exec_app_conf_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ngx_rtmp_exec_app_conf_t *VAR_8 = VAR_6;
    ngx_rtmp_exec_app_conf_t *VAR_9 = VAR_7;

    ngx_uint_t VAR_10;

    FUNC_1(VAR_9->respawn, VAR_8->respawn, 1);
    FUNC_0(VAR_9->nbuckets, VAR_8->nbuckets, 1024);

    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
        if (FUNC_3(&VAR_9->conf[VAR_10], &VAR_8->conf[VAR_10]) != VAR_2)
        {
            return VAR_0;
        }

        if (VAR_9->conf[VAR_10].nelts) {
            VAR_9->active = 1;
            VAR_8->active = 1;
        }
    }

    if (VAR_9->conf[VAR_4].nelts > 0) {
        VAR_9->pull = FUNC_2(VAR_5->pool, sizeof(void *) * VAR_9->nbuckets);
        if (VAR_9->pull == ((void*)0)) {
            return VAR_0;
        }
    }

    return VAR_1;
}
