
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_9__ {TYPE_1__* read; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_10__ {TYPE_4__* buf; struct TYPE_10__* next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_11__ {int * last; int * end; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_8__ {int ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,scalar_t__) ;

ssize_t
FUNC_1(ngx_connection_t *VAR_1, ngx_chain_t *VAR_2, off_t VAR_3)
{
    u_char *VAR_4;
    ssize_t VAR_5, VAR_6, VAR_7;
    ngx_buf_t *VAR_8;

    VAR_6 = 0;

    VAR_8 = VAR_2->buf;
    VAR_4 = VAR_8->last;

    for ( ;; ) {
        VAR_7 = VAR_8->end - VAR_4;

        if (VAR_3) {
            if (VAR_6 >= VAR_3) {
                return VAR_6;
            }

            if (VAR_6 + VAR_7 > VAR_3) {
                VAR_7 = (ssize_t) (VAR_3 - VAR_6);
            }
        }

        VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_7);

        if (VAR_5 > 0) {
            VAR_4 += VAR_5;
            VAR_6 += VAR_5;

            if (!VAR_1->read->ready) {
                return VAR_6;
            }

            if (VAR_4 == VAR_8->end) {
                VAR_2 = VAR_2->next;

                if (VAR_2 == ((void*)0)) {
                    return VAR_6;
                }

                VAR_8 = VAR_2->buf;
                VAR_4 = VAR_8->last;
            }

            continue;
        }

        if (VAR_6) {

            if (VAR_5 == 0 || VAR_5 == VAR_0) {
                VAR_1->read->ready = 1;
            }

            return VAR_6;
        }

        return VAR_5;
    }
}
