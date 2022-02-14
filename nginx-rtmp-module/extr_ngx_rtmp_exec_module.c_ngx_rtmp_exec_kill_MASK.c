
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ active; } ;
struct TYPE_6__ {scalar_t__ timer_set; } ;
struct TYPE_5__ {scalar_t__ active; scalar_t__ pid; int log; int * save_pid; int pipefd; TYPE_4__ read_evt; TYPE_3__ respawn_evt; } ;
typedef TYPE_1__ ngx_rtmp_exec_t ;
typedef scalar_t__ ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_exec_t *VAR_6, ngx_int_t VAR_7)
{
    if (VAR_6->respawn_evt.timer_set) {
        FUNC_3(&VAR_6->respawn_evt);
    }

    if (VAR_6->read_evt.active) {
        FUNC_2(&VAR_6->read_evt, VAR_4, 0);
    }

    if (VAR_6->active == 0) {
        return VAR_3;
    }

    FUNC_5(VAR_2, VAR_6->log, 0,
                  "exec: terminating child %ui", (ngx_int_t) VAR_6->pid);

    VAR_6->active = 0;
    FUNC_0(VAR_6->pipefd);
    if (VAR_6->save_pid) {
        *VAR_6->save_pid = VAR_0;
    }

    if (VAR_7 == 0) {
        return VAR_3;
    }

    if (FUNC_1(VAR_6->pid, VAR_7) == -1) {
        FUNC_5(VAR_2, VAR_6->log, VAR_5,
                      "exec: kill failed pid=%i", (ngx_int_t) VAR_6->pid);
    } else {
        FUNC_4(VAR_1, VAR_6->log, 0,
                       "exec: killed pid=%i", (ngx_int_t) VAR_6->pid);
    }

    return VAR_3;
}
