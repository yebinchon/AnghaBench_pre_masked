
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_9__ {int (* handler ) (TYPE_1__*) ;TYPE_4__* file; int fd; } ;
typedef TYPE_2__ ngx_event_aio_t ;
struct TYPE_10__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_2)
{
    ngx_event_aio_t *VAR_3;

    VAR_3 = VAR_2->data;

    FUNC_1(VAR_1, VAR_2->log, 0,
                   "aio event handler fd:%d %V", VAR_3->fd, &VAR_3->file->name);

    if (FUNC_0(VAR_3->file, VAR_3, VAR_2) != VAR_0) {
        VAR_3->handler(VAR_2);
    }
}
