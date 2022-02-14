
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void u_char ;
struct TYPE_4__ {void* end; TYPE_2__* next; scalar_t__ failed; void* last; } ;
struct TYPE_5__ {TYPE_1__ d; struct TYPE_5__* current; int log; } ;
typedef TYPE_2__ ngx_pool_t ;
typedef int ngx_pool_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (int ,size_t,int ) ;

__attribute__((used)) static void *
FUNC_2(ngx_pool_t *VAR_2, size_t VAR_3)
{
    u_char *VAR_4;
    size_t VAR_5;
    ngx_pool_t *VAR_6, *VAR_7;

    VAR_5 = (size_t) (VAR_2->d.end - (u_char *) VAR_2);

    VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_2->log);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7 = (ngx_pool_t *) VAR_4;

    VAR_7->d.end = VAR_4 + VAR_5;
    VAR_7->d.next = ((void*)0);
    VAR_7->d.failed = 0;

    VAR_4 += sizeof(ngx_pool_data_t);
    VAR_4 = FUNC_0(VAR_4, VAR_0);
    VAR_7->d.last = VAR_4 + VAR_3;

    for (VAR_6 = VAR_2->current; VAR_6->d.next; VAR_6 = VAR_6->d.next) {
        if (VAR_6->d.failed++ > 4) {
            VAR_2->current = VAR_6->d.next;
        }
    }

    VAR_6->d.next = VAR_7;

    return VAR_4;
}
