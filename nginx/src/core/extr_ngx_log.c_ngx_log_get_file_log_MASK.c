
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * file; struct TYPE_4__* next; } ;
typedef TYPE_1__ ngx_log_t ;



ngx_log_t *
FUNC_0(ngx_log_t *VAR_0)
{
    ngx_log_t *VAR_1;

    for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next) {
        if (VAR_1->file != ((void*)0)) {
            return VAR_1;
        }
    }

    return ((void*)0);
}
