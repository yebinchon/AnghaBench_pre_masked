
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {scalar_t__ len; int * data; } ;
struct TYPE_9__ {size_t content_type_len; size_t content_type_hash; int * content_type_lowcase; TYPE_1__ content_type; } ;
struct TYPE_10__ {TYPE_2__ headers_out; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_11__ {scalar_t__ size; } ;
typedef TYPE_4__ ngx_hash_t ;


 size_t FUNC_0 (size_t,int ) ;
 void* FUNC_1 (TYPE_4__*,size_t,int *,size_t) ;
 int * FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;

void *
FUNC_4(ngx_http_request_t *VAR_0, ngx_hash_t *VAR_1)
{
    u_char VAR_2, *VAR_3;
    size_t VAR_4;
    ngx_uint_t VAR_5, VAR_6;

    if (VAR_1->size == 0) {
        return (void *) 4;
    }

    if (VAR_0->headers_out.content_type.len == 0) {
        return ((void*)0);
    }

    VAR_4 = VAR_0->headers_out.content_type_len;

    if (VAR_0->headers_out.content_type_lowcase == ((void*)0)) {

        VAR_3 = FUNC_2(VAR_0->pool, VAR_4);
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_0->headers_out.content_type_lowcase = VAR_3;

        VAR_6 = 0;

        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_2 = FUNC_3(VAR_0->headers_out.content_type.data[VAR_5]);
            VAR_6 = FUNC_0(VAR_6, VAR_2);
            VAR_3[VAR_5] = VAR_2;
        }

        VAR_0->headers_out.content_type_hash = VAR_6;
    }

    return FUNC_1(VAR_1, VAR_0->headers_out.content_type_hash,
                         VAR_0->headers_out.content_type_lowcase, VAR_4);
}
