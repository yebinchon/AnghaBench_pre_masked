
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef int ngx_pool_t ;
typedef int ngx_file_t ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_1__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_4__ {int * last; int * pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,size_t,int ) ;

ssize_t
FUNC_1(ngx_file_t *VAR_1, ngx_chain_t *VAR_2, off_t VAR_3,
    ngx_pool_t *VAR_4)
{
    u_char *VAR_5, *VAR_6;
    size_t VAR_7;
    ssize_t VAR_8, VAR_9;

    VAR_8 = 0;

    while (VAR_2) {
        VAR_5 = VAR_2->buf->pos;
        VAR_6 = VAR_5;
        VAR_7 = 0;



        while (VAR_2 && VAR_6 == VAR_2->buf->pos) {
            VAR_7 += VAR_2->buf->last - VAR_2->buf->pos;
            VAR_6 = VAR_2->buf->last;
            VAR_2 = VAR_2->next;
        }

        VAR_9 = FUNC_0(VAR_1, VAR_5, VAR_7, VAR_3);

        if (VAR_9 == VAR_0) {
            return VAR_0;
        }

        VAR_8 += VAR_9;
        VAR_3 += VAR_9;
    }

    return VAR_8;
}
