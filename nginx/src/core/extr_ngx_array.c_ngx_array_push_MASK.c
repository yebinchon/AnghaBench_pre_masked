
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int * last; int * end; } ;
struct TYPE_7__ {TYPE_1__ d; } ;
typedef TYPE_2__ ngx_pool_t ;
struct TYPE_8__ {size_t nelts; size_t nalloc; size_t size; void* elts; TYPE_2__* pool; } ;
typedef TYPE_3__ ngx_array_t ;


 int FUNC_0 (void*,void*,size_t) ;
 void* FUNC_1 (TYPE_2__*,int) ;

void *
FUNC_2(ngx_array_t *VAR_0)
{
    void *VAR_1, *VAR_2;
    size_t VAR_3;
    ngx_pool_t *VAR_4;

    if (VAR_0->nelts == VAR_0->nalloc) {



        VAR_3 = VAR_0->size * VAR_0->nalloc;

        VAR_4 = VAR_0->pool;

        if ((u_char *) VAR_0->elts + VAR_3 == VAR_4->d.last
            && VAR_4->d.last + VAR_0->size <= VAR_4->d.end)
        {





            VAR_4->d.last += VAR_0->size;
            VAR_0->nalloc++;

        } else {


            VAR_2 = FUNC_1(VAR_4, 2 * VAR_3);
            if (VAR_2 == ((void*)0)) {
                return ((void*)0);
            }

            FUNC_0(VAR_2, VAR_0->elts, VAR_3);
            VAR_0->elts = VAR_2;
            VAR_0->nalloc *= 2;
        }
    }

    VAR_1 = (u_char *) VAR_0->elts + VAR_0->size * VAR_0->nelts;
    VAR_0->nelts++;

    return VAR_1;
}
