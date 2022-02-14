
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_6__ {TYPE_2__* large; int log; } ;
typedef TYPE_1__ ngx_pool_t ;
struct TYPE_7__ {struct TYPE_7__* next; int * alloc; } ;
typedef TYPE_2__ ngx_pool_large_t ;


 void* FUNC_0 (size_t,int ) ;
 int FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void *
FUNC_3(ngx_pool_t *VAR_0, size_t VAR_1)
{
    void *VAR_2;
    ngx_uint_t VAR_3;
    ngx_pool_large_t *VAR_4;

    VAR_2 = FUNC_0(VAR_1, VAR_0->log);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3 = 0;

    for (VAR_4 = VAR_0->large; VAR_4; VAR_4 = VAR_4->next) {
        if (VAR_4->alloc == ((void*)0)) {
            VAR_4->alloc = VAR_2;
            return VAR_2;
        }

        if (VAR_3++ > 3) {
            break;
        }
    }

    VAR_4 = FUNC_2(VAR_0, sizeof(ngx_pool_large_t), 1);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_4->alloc = VAR_2;
    VAR_4->next = VAR_0->large;
    VAR_0->large = VAR_4;

    return VAR_2;
}
