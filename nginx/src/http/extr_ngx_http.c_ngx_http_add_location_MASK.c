
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_queue_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int queue; int list; int line; int file_name; int * name; TYPE_5__* inclusive; TYPE_5__* exact; } ;
typedef TYPE_4__ ngx_http_location_queue_t ;
struct TYPE_13__ {int name; scalar_t__ noname; scalar_t__ named; scalar_t__ regex; scalar_t__ exact_match; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {TYPE_3__* conf_file; int temp_pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_10__ {TYPE_1__ name; } ;
struct TYPE_11__ {int line; TYPE_2__ file; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

ngx_int_t
FUNC_3(ngx_conf_t *VAR_2, ngx_queue_t **VAR_3,
    ngx_http_core_loc_conf_t *VAR_4)
{
    ngx_http_location_queue_t *VAR_5;

    if (*VAR_3 == ((void*)0)) {
        *VAR_3 = FUNC_0(VAR_2->temp_pool,
                                sizeof(ngx_http_location_queue_t));
        if (*VAR_3 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_1(*VAR_3);
    }

    VAR_5 = FUNC_0(VAR_2->temp_pool, sizeof(ngx_http_location_queue_t));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_4->exact_match



        || VAR_4->named || VAR_4->noname)
    {
        VAR_5->exact = VAR_4;
        VAR_5->inclusive = ((void*)0);

    } else {
        VAR_5->exact = ((void*)0);
        VAR_5->inclusive = VAR_4;
    }

    VAR_5->name = &VAR_4->name;
    VAR_5->file_name = VAR_2->conf_file->file.name.data;
    VAR_5->line = VAR_2->conf_file->line;

    FUNC_1(&VAR_5->list);

    FUNC_2(*VAR_3, &VAR_5->queue);

    return VAR_1;
}
