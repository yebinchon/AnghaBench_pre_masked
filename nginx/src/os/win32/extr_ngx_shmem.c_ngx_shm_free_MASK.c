
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int log; int handle; int addr; } ;
typedef TYPE_1__ ngx_shm_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,char*,int *,...) ;

void
FUNC_3(ngx_shm_t *VAR_2)
{
    if (FUNC_1(VAR_2->addr) == 0) {
        FUNC_2(VAR_0, VAR_2->log, VAR_1,
                      "UnmapViewOfFile(%p) of file mapping \"%V\" failed",
                      &VAR_2->addr, &VAR_2->name);
    }

    if (FUNC_0(VAR_2->handle) == 0) {
        FUNC_2(VAR_0, VAR_2->log, VAR_1,
                      "CloseHandle() of file mapping \"%V\" failed",
                      &VAR_2->name);
    }
}
