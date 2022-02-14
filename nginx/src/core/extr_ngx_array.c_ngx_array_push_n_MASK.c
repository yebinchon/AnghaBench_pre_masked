
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_6__ {int * last; int * end; } ;
struct TYPE_7__ {TYPE_1__ d; } ;
typedef TYPE_2__ ngx_pool_t ;
struct TYPE_8__ {int size; int nelts; int nalloc; void* elts; TYPE_2__* pool; } ;
typedef TYPE_3__ ngx_array_t ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (TYPE_2__*,int) ;

void *
FUNC_2(ngx_array_t *VAR_0, ngx_uint_t VAR_1)
{
    void *VAR_2, *VAR_3;
    size_t VAR_4;
    ngx_uint_t VAR_5;
    ngx_pool_t *VAR_6;

    VAR_4 = VAR_1 * VAR_0->size;

    if (VAR_0->nelts + VAR_1 > VAR_0->nalloc) {



        VAR_6 = VAR_0->pool;

        if ((u_char *) VAR_0->elts + VAR_0->size * VAR_0->nalloc == VAR_6->d.last
            && VAR_6->d.last + VAR_4 <= VAR_6->d.end)
        {





            VAR_6->d.last += VAR_4;
            VAR_0->nalloc += VAR_1;

        } else {


            VAR_5 = 2 * ((VAR_1 >= VAR_0->nalloc) ? VAR_1 : VAR_0->nalloc);

            VAR_3 = FUNC_1(VAR_6, VAR_5 * VAR_0->size);
            if (VAR_3 == ((void*)0)) {
                return ((void*)0);
            }

            FUNC_0(VAR_3, VAR_0->elts, VAR_0->nelts * VAR_0->size);
            VAR_0->elts = VAR_3;
            VAR_0->nalloc = VAR_5;
        }
    }

    VAR_2 = (u_char *) VAR_0->elts + VAR_0->size * VAR_0->nelts;
    VAR_0->nelts += VAR_1;

    return VAR_2;
}
