
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_int_t ;
struct TYPE_7__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_8__ {int fd; int pid; int slot; } ;
typedef TYPE_2__ ngx_channel_t ;
struct TYPE_9__ {int pid; int* channel; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ,int ,size_t,int,int) ;
 size_t VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int,TYPE_2__*,int,int ) ;

__attribute__((used)) static void
FUNC_2(ngx_cycle_t *VAR_4, ngx_channel_t *VAR_5)
{
    ngx_int_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

        if (VAR_6 == VAR_2
            || VAR_3[VAR_6].pid == -1
            || VAR_3[VAR_6].channel[0] == -1)
        {
            continue;
        }

        FUNC_0(VAR_0, VAR_4->log, 0,
                      "pass channel s:%i pid:%P fd:%d to s:%i pid:%P fd:%d",
                      VAR_5->slot, VAR_5->pid, VAR_5->fd,
                      VAR_6, VAR_3[VAR_6].pid,
                      VAR_3[VAR_6].channel[0]);



        FUNC_1(VAR_3[VAR_6].channel[0],
                          VAR_5, sizeof(ngx_channel_t), VAR_4->log);
    }
}
