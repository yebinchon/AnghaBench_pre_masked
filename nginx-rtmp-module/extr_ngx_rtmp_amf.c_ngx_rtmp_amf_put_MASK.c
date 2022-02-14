
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {TYPE_2__* link; TYPE_2__* first; int arg; TYPE_2__* (* alloc ) (int ) ;int log; } ;
typedef TYPE_1__ ngx_rtmp_amf_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_3__* buf; struct TYPE_7__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_8__ {scalar_t__ last; scalar_t__ end; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,void*,size_t) ;
 int FUNC_1 (char*,int ,int *,size_t) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_amf_ctx_t *VAR_2, void *VAR_3, size_t VAR_4)
{
    ngx_buf_t *VAR_5;
    size_t VAR_6;
    ngx_chain_t *VAR_7, *VAR_8;





    VAR_7 = VAR_2->link;

    if (VAR_2->link && VAR_2->first == ((void*)0)) {
        VAR_2->first = VAR_2->link;
    }

    while(VAR_4) {
        VAR_5 = VAR_7 ? VAR_7->buf : ((void*)0);

        if (VAR_5 == ((void*)0) || VAR_5->last == VAR_5->end) {

            VAR_8 = VAR_2->alloc(VAR_2->arg);
            if (VAR_8 == ((void*)0)) {
                return VAR_0;
            }

            if (VAR_2->first == ((void*)0)) {
                VAR_2->first = VAR_8;
            }

            if (VAR_7) {
                VAR_7->next = VAR_8;
            }

            VAR_7 = VAR_8;
            VAR_2->link = VAR_7;
            VAR_5 = VAR_7->buf;
        }

        VAR_6 = VAR_5->end - VAR_5->last;

        if (VAR_6 >= VAR_4) {
            VAR_5->last = FUNC_0(VAR_5->last, VAR_3, VAR_4);
            return VAR_1;
        }

        VAR_5->last = FUNC_0(VAR_5->last, VAR_3, VAR_6);
        VAR_3 = (u_char*)VAR_3 + VAR_6;
        VAR_4 -= VAR_6;
    }

    return VAR_1;
}
