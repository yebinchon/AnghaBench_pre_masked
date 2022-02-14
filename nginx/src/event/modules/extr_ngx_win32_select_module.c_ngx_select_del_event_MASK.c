
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {size_t index; int log; scalar_t__ active; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 int FUNC_0 (int ,int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_event_t *VAR_11, ngx_int_t VAR_12, ngx_uint_t VAR_13)
{
    ngx_event_t *VAR_14;
    ngx_connection_t *VAR_15;

    VAR_15 = VAR_11->data;

    VAR_11->active = 0;

    if (VAR_11->index == VAR_0) {
        return VAR_2;
    }

    FUNC_1(VAR_1, VAR_11->log, 0,
                   "select del event fd:%d ev:%i", VAR_15->fd, VAR_12);

    if (VAR_12 == VAR_3) {
        FUNC_0(VAR_15->fd, &VAR_6);
        VAR_8--;

    } else if (VAR_12 == VAR_4) {
        FUNC_0(VAR_15->fd, &VAR_7);
        VAR_9--;
    }

    if (VAR_11->index < --VAR_10) {
        VAR_14 = VAR_5[VAR_10];
        VAR_5[VAR_11->index] = VAR_14;
        VAR_14->index = VAR_11->index;
    }

    VAR_11->index = VAR_0;

    return VAR_2;
}
