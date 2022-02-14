
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_16__ {TYPE_9__* shm_zone; } ;
typedef TYPE_2__ ngx_stream_upstream_srv_conf_t ;
typedef int ngx_stream_upstream_main_conf_t ;
struct TYPE_17__ {int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_18__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_19__ {int noreuse; int * data; int init; } ;
struct TYPE_15__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_9__* FUNC_2 (TYPE_4__*,TYPE_3__*,scalar_t__,int *) ;
 int * FUNC_3 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_4 (TYPE_4__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    ssize_t VAR_10;
    ngx_str_t *VAR_11;
    ngx_stream_upstream_srv_conf_t *VAR_12;
    ngx_stream_upstream_main_conf_t *VAR_13;

    VAR_12 = FUNC_4(VAR_7, VAR_6);
    VAR_13 = FUNC_3(VAR_7, VAR_6);

    VAR_11 = VAR_7->args->elts;

    if (!VAR_11[1].len) {
        FUNC_0(VAR_3, VAR_7, 0,
                           "invalid zone name \"%V\"", &VAR_11[1]);
        return VAR_0;
    }

    if (VAR_7->args->nelts == 3) {
        VAR_10 = FUNC_1(&VAR_11[2]);

        if (VAR_10 == VAR_2) {
            FUNC_0(VAR_3, VAR_7, 0,
                               "invalid zone size \"%V\"", &VAR_11[2]);
            return VAR_0;
        }

        if (VAR_10 < (ssize_t) (8 * VAR_4)) {
            FUNC_0(VAR_3, VAR_7, 0,
                               "zone \"%V\" is too small", &VAR_11[1]);
            return VAR_0;
        }

    } else {
        VAR_10 = 0;
    }

    VAR_12->shm_zone = FUNC_2(VAR_7, &VAR_11[1], VAR_10,
                                           &VAR_6);
    if (VAR_12->shm_zone == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->shm_zone->init = VAR_5;
    VAR_12->shm_zone->data = VAR_13;

    VAR_12->shm_zone->noreuse = 1;

    return VAR_1;
}
