
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ptr; } ;
struct epoll_event {TYPE_1__ data; scalar_t__ events; } ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_3__* write; TYPE_2__* read; int fd; int log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_8__ {scalar_t__ active; } ;
struct TYPE_7__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,struct epoll_event*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_connection_t *VAR_8, ngx_uint_t VAR_9)
{
    int VAR_10;
    struct epoll_event VAR_11;







    if (VAR_9 & VAR_1) {
        VAR_8->read->active = 0;
        VAR_8->write->active = 0;
        return VAR_5;
    }

    FUNC_1(VAR_4, VAR_8->log, 0,
                   "epoll del connection: fd:%d", VAR_8->fd);

    VAR_10 = VAR_0;
    VAR_11.events = 0;
    VAR_11.data.ptr = ((void*)0);

    if (FUNC_0(VAR_6, VAR_10, VAR_8->fd, &VAR_11) == -1) {
        FUNC_2(VAR_3, VAR_8->log, VAR_7,
                      "epoll_ctl(%d, %d) failed", VAR_10, VAR_8->fd);
        return VAR_2;
    }

    VAR_8->read->active = 0;
    VAR_8->write->active = 0;

    return VAR_5;
}
