
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int active; size_t index; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_7__ {int fd; TYPE_1__* read; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_8__ {short events; scalar_t__ revents; int fd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__** VAR_7 ;
 TYPE_4__* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_10, ngx_int_t VAR_11, ngx_uint_t VAR_12)
{
    ngx_event_t *VAR_13;
    ngx_connection_t *VAR_14;

    VAR_14 = VAR_10->data;

    VAR_10->active = 1;

    if (VAR_10->index != VAR_0) {
        FUNC_2(VAR_1, VAR_10->log, 0,
                      "poll event fd:%d ev:%i is already set", VAR_14->fd, VAR_11);
        return VAR_3;
    }

    if (VAR_11 == VAR_4) {
        VAR_13 = VAR_14->write;




    } else {
        VAR_13 = VAR_14->read;



    }

    FUNC_1(VAR_2, VAR_10->log, 0,
                   "poll add event: fd:%d ev:%i", VAR_14->fd, VAR_11);

    if (VAR_13 == ((void*)0) || VAR_13->index == VAR_0) {

        VAR_8[VAR_9].fd = VAR_14->fd;
        VAR_8[VAR_9].events = (short) VAR_11;
        VAR_8[VAR_9].revents = 0;

        VAR_7[VAR_9] = VAR_14;

        VAR_10->index = VAR_9;
        VAR_9++;

    } else {
        FUNC_0(VAR_2, VAR_10->log, 0,
                       "poll add index: %i", VAR_13->index);

        VAR_8[VAR_13->index].events |= (short) VAR_11;
        VAR_10->index = VAR_13->index;
    }

    return VAR_3;
}
