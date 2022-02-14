
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {scalar_t__ active; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {TYPE_1__* read; TYPE_1__* write; int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_event_t *VAR_8, ngx_int_t VAR_9, ngx_uint_t VAR_10)
{
    ngx_event_t *VAR_11;
    ngx_connection_t *VAR_12;

    VAR_12 = VAR_8->data;





    FUNC_1(VAR_2, VAR_8->log, 0,
                   "devpoll del event: fd:%d ev:%04Xi", VAR_12->fd, VAR_9);

    if (FUNC_0(VAR_8, VAR_7, VAR_10) == VAR_1) {
        return VAR_1;
    }

    VAR_8->active = 0;

    if (VAR_10 & VAR_0) {
        VAR_11 = (VAR_9 == VAR_5) ? VAR_12->write : VAR_12->read;

        if (VAR_11) {
            VAR_11->active = 0;
        }

        return VAR_3;
    }



    if (VAR_9 == VAR_5) {
        VAR_11 = VAR_12->write;
        VAR_9 = VAR_6;

    } else {
        VAR_11 = VAR_12->read;
        VAR_9 = VAR_5;
    }

    if (VAR_11 && VAR_11->active) {
        return FUNC_0(VAR_11, VAR_9, 0);
    }

    return VAR_3;
}
