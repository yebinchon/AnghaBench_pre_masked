
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {size_t offset; int log; TYPE_3__* link; } ;
typedef TYPE_2__ ngx_rtmp_amf_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_1__* buf; struct TYPE_7__* next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_5__ {int * last; int * pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int *,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,size_t) ;
 int FUNC_2 (char*,int ,int *,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_amf_ctx_t *VAR_3, void *VAR_4, size_t VAR_5)
{
    size_t VAR_6;
    ngx_chain_t *VAR_7;
    size_t VAR_8;
    u_char *VAR_9, *VAR_10;





    if (!VAR_5)
        return VAR_2;

    for(VAR_7 = VAR_3->link, VAR_8 = VAR_3->offset; VAR_7; VAR_7 = VAR_7->next, VAR_8 = 0) {

        VAR_9 = VAR_7->buf->pos + VAR_8;
        VAR_10 = VAR_7->buf->last;

        if (VAR_10 >= VAR_9 + VAR_5) {
            if (VAR_4) {
                VAR_4 = FUNC_0(VAR_4, VAR_9, VAR_5);
            }
            VAR_3->offset = VAR_8 + VAR_5;
            VAR_3->link = VAR_7;





            return VAR_2;
        }

        VAR_6 = VAR_10 - VAR_9;

        if (VAR_4) {
            VAR_4 = FUNC_0(VAR_4, VAR_9, VAR_6);
        }

        VAR_5 -= VAR_6;
    }

    FUNC_1(VAR_1, VAR_3->log, 0,
            "AMF read eof (%d)", VAR_5);

    return VAR_0;
}
