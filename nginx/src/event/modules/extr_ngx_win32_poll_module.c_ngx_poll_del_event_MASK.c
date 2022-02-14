
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
typedef size_t ngx_int_t ;
struct TYPE_6__ {size_t index; int log; scalar_t__ active; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_7__ {size_t fd; TYPE_1__* write; TYPE_1__* read; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_8__ {short events; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_2__** VAR_7 ;
 TYPE_4__* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,size_t,size_t) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_10, ngx_int_t VAR_11, ngx_uint_t VAR_12)
{
    ngx_event_t *VAR_13;
    ngx_connection_t *VAR_14;

    VAR_14 = VAR_10->data;

    VAR_10->active = 0;

    if (VAR_10->index == VAR_0) {
        FUNC_2(VAR_1, VAR_10->log, 0,
                      "poll event fd:%d ev:%i is already deleted",
                      VAR_14->fd, VAR_11);
        return VAR_3;
    }

    if (VAR_11 == VAR_4) {
        VAR_13 = VAR_14->write;




    } else {
        VAR_13 = VAR_14->read;



    }

    FUNC_1(VAR_2, VAR_10->log, 0,
                   "poll del event: fd:%d ev:%i", VAR_14->fd, VAR_11);

    if (VAR_13 == ((void*)0) || VAR_13->index == VAR_0) {
        VAR_9--;

        if (VAR_10->index < VAR_9) {

            FUNC_1(VAR_2, VAR_10->log, 0,
                           "index: copy event %ui to %i", VAR_9, VAR_10->index);

            VAR_8[VAR_10->index] = VAR_8[VAR_9];
            VAR_7[VAR_10->index] = VAR_7[VAR_9];

            VAR_14 = VAR_7[VAR_10->index];

            if (VAR_14->fd == (ngx_socket_t) -1) {
                FUNC_2(VAR_1, VAR_10->log, 0,
                              "unexpected last event");

            } else {
                if (VAR_14->read->index == VAR_9) {
                    VAR_14->read->index = VAR_10->index;
                }

                if (VAR_14->write->index == VAR_9) {
                    VAR_14->write->index = VAR_10->index;
                }
            }
        }

    } else {
        FUNC_0(VAR_2, VAR_10->log, 0,
                       "poll del index: %i", VAR_13->index);

        VAR_8[VAR_13->index].events &= (short) ~VAR_11;
    }

    VAR_10->index = VAR_0;

    return VAR_3;
}
