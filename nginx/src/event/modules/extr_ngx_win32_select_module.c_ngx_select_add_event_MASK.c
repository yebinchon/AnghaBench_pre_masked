
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {size_t index; int active; int log; scalar_t__ write; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_15, ngx_int_t VAR_16, ngx_uint_t VAR_17)
{
    ngx_connection_t *VAR_18;

    VAR_18 = VAR_15->data;

    FUNC_1(VAR_4, VAR_15->log, 0,
                   "select add event fd:%d ev:%i", VAR_18->fd, VAR_16);

    if (VAR_15->index != VAR_2) {
        FUNC_2(VAR_3, VAR_15->log, 0,
                      "select event fd:%d ev:%i is already set", VAR_18->fd, VAR_16);
        return VAR_6;
    }

    if ((VAR_16 == VAR_7 && VAR_15->write)
        || (VAR_16 == VAR_8 && !VAR_15->write))
    {
        FUNC_2(VAR_3, VAR_15->log, 0,
                      "invalid select %s event fd:%d ev:%i",
                      VAR_15->write ? "write" : "read", VAR_18->fd, VAR_16);
        return VAR_1;
    }

    if ((VAR_16 == VAR_7 && VAR_12 >= VAR_0)
        || (VAR_16 == VAR_8 && VAR_13 >= VAR_0))
    {
        FUNC_2(VAR_5, VAR_15->log, 0,
                      "maximum number of descriptors "
                      "supported by select() is %d", VAR_0);
        return VAR_1;
    }

    if (VAR_16 == VAR_7) {
        FUNC_0(VAR_18->fd, &VAR_10);
        VAR_12++;

    } else if (VAR_16 == VAR_8) {
        FUNC_0(VAR_18->fd, &VAR_11);
        VAR_13++;
    }

    VAR_15->active = 1;

    VAR_9[VAR_14] = VAR_15;
    VAR_15->index = VAR_14;
    VAR_14++;

    return VAR_6;
}
