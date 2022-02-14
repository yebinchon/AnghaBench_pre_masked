
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_2__* buf; } ;
typedef TYPE_1__ ngx_chain_t ;
struct TYPE_11__ {scalar_t__ file_pos; scalar_t__ file_last; int pos; int last; scalar_t__ in_file; } ;
typedef TYPE_2__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_pool_t *VAR_3, ngx_chain_t **VAR_4,
    ngx_chain_t *VAR_5)
{
    ngx_chain_t *VAR_6, **VAR_7;




    VAR_7 = VAR_4;

    for (VAR_6 = *VAR_4; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = &VAR_6->next;
    }

    while (VAR_5) {

        VAR_6 = FUNC_0(VAR_3);
        if (VAR_6 == ((void*)0)) {
            return VAR_0;
        }
        VAR_6->buf = VAR_5->buf;
        VAR_5 = VAR_5->next;



        VAR_6->next = ((void*)0);
        *VAR_7 = VAR_6;
        VAR_7 = &VAR_6->next;
    }

    return VAR_1;
}
