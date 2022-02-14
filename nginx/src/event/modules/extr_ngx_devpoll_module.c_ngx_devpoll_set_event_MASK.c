
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pollfd {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int index; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_8__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_9__ {short events; scalar_t__ revents; int fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__** VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_12, ngx_int_t VAR_13, ngx_uint_t VAR_14)
{
    size_t VAR_15;
    ngx_connection_t *VAR_16;

    VAR_16 = VAR_12->data;

    FUNC_0(VAR_3, VAR_12->log, 0,
                   "devpoll fd:%d ev:%04Xi fl:%04Xi", VAR_16->fd, VAR_13, VAR_14);

    if (VAR_10 >= VAR_9) {
        FUNC_1(VAR_4, VAR_12->log, 0,
                      "/dev/pool change list is filled up");

        VAR_15 = VAR_10 * sizeof(struct pollfd);
        if (FUNC_2(VAR_8, VAR_7, VAR_15) != (ssize_t) VAR_15) {
            FUNC_1(VAR_2, VAR_12->log, VAR_11,
                          "write(/dev/poll) failed");
            return VAR_1;
        }

        VAR_10 = 0;
    }

    VAR_7[VAR_10].fd = VAR_16->fd;
    VAR_7[VAR_10].events = (short) VAR_13;
    VAR_7[VAR_10].revents = 0;

    VAR_6[VAR_10] = VAR_12;
    VAR_12->index = VAR_10;

    VAR_10++;

    if (VAR_14 & VAR_0) {
        VAR_15 = VAR_10 * sizeof(struct pollfd);
        if (FUNC_2(VAR_8, VAR_7, VAR_15) != (ssize_t) VAR_15) {
            FUNC_1(VAR_2, VAR_12->log, VAR_11,
                          "write(/dev/poll) failed");
            return VAR_1;
        }

        VAR_10 = 0;
    }

    return VAR_5;
}
