
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_11__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_12__ {int default_port; int uri_part; TYPE_10__ url; scalar_t__ err; } ;
typedef TYPE_1__ ngx_url_t ;
struct TYPE_13__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_14__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,int ,char*,scalar_t__,TYPE_10__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int) ;

__attribute__((used)) static ngx_url_t *
FUNC_4(ngx_conf_t *VAR_2, ngx_str_t *VAR_3)
{
    ngx_url_t *VAR_4;
    size_t VAR_5;

    VAR_5 = 0;

    VAR_4 = FUNC_2(VAR_2->pool, sizeof(ngx_url_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    if (FUNC_3(VAR_3->data, (u_char *) "http://", 7) == 0) {
        VAR_5 = 7;
    }

    VAR_4->url.len = VAR_3->len - VAR_5;
    VAR_4->url.data = VAR_3->data + VAR_5;
    VAR_4->default_port = 80;
    VAR_4->uri_part = 1;

    if (FUNC_1(VAR_2->pool, VAR_4) != VAR_1) {
        if (VAR_4->err) {
            FUNC_0(VAR_0, VAR_2, 0,
                    "%s in url \"%V\"", VAR_4->err, &VAR_4->url);
        }
        return ((void*)0);
    }

    return VAR_4;
}
