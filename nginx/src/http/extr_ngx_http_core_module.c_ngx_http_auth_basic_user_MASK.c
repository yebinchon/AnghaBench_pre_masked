
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_14__ {int len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {size_t len; char* data; } ;
struct TYPE_11__ {size_t len; char* data; } ;
struct TYPE_13__ {TYPE_3__ passwd; TYPE_2__ user; TYPE_1__* authorization; } ;
struct TYPE_15__ {TYPE_4__ headers_in; int pool; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_5__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 char* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3)
{
    ngx_str_t VAR_4, VAR_5;
    ngx_uint_t VAR_6;

    if (VAR_3->headers_in.user.len == 0 && VAR_3->headers_in.user.data != ((void*)0)) {
        return VAR_0;
    }

    if (VAR_3->headers_in.authorization == ((void*)0)) {
        VAR_3->headers_in.user.data = (u_char *) "";
        return VAR_0;
    }

    VAR_5 = VAR_3->headers_in.authorization->value;

    if (VAR_5.len < sizeof("Basic ") - 1
        || FUNC_3(VAR_5.data, (u_char *) "Basic ",
                           sizeof("Basic ") - 1)
           != 0)
    {
        VAR_3->headers_in.user.data = (u_char *) "";
        return VAR_0;
    }

    VAR_5.len -= sizeof("Basic ") - 1;
    VAR_5.data += sizeof("Basic ") - 1;

    while (VAR_5.len && VAR_5.data[0] == ' ') {
        VAR_5.len--;
        VAR_5.data++;
    }

    if (VAR_5.len == 0) {
        VAR_3->headers_in.user.data = (u_char *) "";
        return VAR_0;
    }

    VAR_4.len = FUNC_0(VAR_5.len);
    VAR_4.data = FUNC_2(VAR_3->pool, VAR_4.len + 1);
    if (VAR_4.data == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_4, &VAR_5) != VAR_2) {
        VAR_3->headers_in.user.data = (u_char *) "";
        return VAR_0;
    }

    VAR_4.data[VAR_4.len] = '\0';

    for (VAR_6 = 0; VAR_6 < VAR_4.len; VAR_6++) {
        if (VAR_4.data[VAR_6] == ':') {
            break;
        }
    }

    if (VAR_6 == 0 || VAR_6 == VAR_4.len) {
        VAR_3->headers_in.user.data = (u_char *) "";
        return VAR_0;
    }

    VAR_3->headers_in.user.len = VAR_6;
    VAR_3->headers_in.user.data = VAR_4.data;
    VAR_3->headers_in.passwd.len = VAR_4.len - VAR_6 - 1;
    VAR_3->headers_in.passwd.data = &VAR_4.data[VAR_6 + 1];

    return VAR_2;
}
