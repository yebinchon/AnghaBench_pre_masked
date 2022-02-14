
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_log_t ;
struct TYPE_3__ {void* last; void* end; void* pos; void* start; } ;
typedef TYPE_1__ ngx_buf_t ;


 void* FUNC_0 (size_t,int *) ;
 void* FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static void
FUNC_2(ngx_buf_t *VAR_0, void *VAR_1, size_t VAR_2, ngx_log_t *VAR_3)
{
    size_t VAR_4;

    if (VAR_0->last + VAR_2 > VAR_0->end) {
        VAR_4 = 2 * (VAR_0->last - VAR_0->pos) + VAR_2;

        VAR_0->start = FUNC_0(VAR_4, VAR_3);
        if (VAR_0->start == ((void*)0)) {
            return;
        }

        VAR_0->last = FUNC_1(VAR_0->start, VAR_0->pos, VAR_0->last - VAR_0->pos);
        VAR_0->pos = VAR_0->start;
        VAR_0->end = VAR_0->start + VAR_4;
    }

    VAR_0->last = FUNC_1(VAR_0->last, VAR_1, VAR_2);
}
