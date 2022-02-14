
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_int_t ;
struct TYPE_11__ {int filter_need_in_memory; int filter_need_temporary; struct TYPE_11__* main; int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_12__ {scalar_t__ utf8; int length; int name; int * tables; } ;
typedef TYPE_2__ ngx_http_charset_t ;
struct TYPE_13__ {size_t charset; scalar_t__ from_utf8; scalar_t__ to_utf8; int length; int charset_name; int table; } ;
typedef TYPE_3__ ngx_http_charset_ctx_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2, ngx_http_charset_t *VAR_3,
    ngx_int_t VAR_4, ngx_int_t VAR_5)
{
    ngx_http_charset_ctx_t *VAR_6;

    VAR_6 = FUNC_3(VAR_2->pool, sizeof(ngx_http_charset_ctx_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_2, VAR_6, VAR_1);

    VAR_6->table = VAR_3[VAR_5].tables[VAR_4];
    VAR_6->charset = VAR_4;
    VAR_6->charset_name = VAR_3[VAR_4].name;
    VAR_6->length = VAR_3[VAR_4].length;
    VAR_6->from_utf8 = VAR_3[VAR_5].utf8;
    VAR_6->to_utf8 = VAR_3[VAR_4].utf8;

    VAR_2->filter_need_in_memory = 1;

    if ((VAR_6->to_utf8 || VAR_6->from_utf8) && VAR_2 == VAR_2->main) {
        FUNC_0(VAR_2);

    } else {
        VAR_2->filter_need_temporary = 1;
    }

    return FUNC_1(VAR_2);
}
