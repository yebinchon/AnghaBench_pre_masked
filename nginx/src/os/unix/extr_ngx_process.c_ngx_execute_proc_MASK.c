
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int name; int envp; int argv; } ;
typedef TYPE_1__ ngx_exec_ctx_t ;
struct TYPE_5__ {int log; } ;
typedef TYPE_2__ ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_cycle_t *VAR_2, void *VAR_3)
{
    ngx_exec_ctx_t *VAR_4 = VAR_3;

    if (FUNC_0(VAR_4->path, VAR_4->argv, VAR_4->envp) == -1) {
        FUNC_2(VAR_0, VAR_2->log, VAR_1,
                      "execve() failed while executing %s \"%s\"",
                      VAR_4->name, VAR_4->path);
    }

    FUNC_1(1);
}
