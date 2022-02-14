
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int log; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_8__ {int (* handler ) (TYPE_2__*) ;TYPE_1__* file; int fd; } ;
typedef TYPE_3__ ngx_event_aio_t ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_1)
{
    ngx_event_aio_t *VAR_2;

    VAR_2 = VAR_1->data;

    FUNC_0(VAR_0, VAR_1->log, 0,
                   "aio event handler fd:%d %V", VAR_2->fd, &VAR_2->file->name);

    VAR_2->handler(VAR_1);
}
