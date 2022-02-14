
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


typedef int u_char ;
struct TYPE_24__ {int value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
struct TYPE_25__ {int len; int * data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_26__ {int * uid_got; TYPE_4__ cookie; } ;
typedef TYPE_5__ ngx_http_userid_ctx_t ;
struct TYPE_27__ {int name; } ;
typedef TYPE_6__ ngx_http_userid_conf_t ;
struct TYPE_21__ {TYPE_3__** elts; } ;
struct TYPE_22__ {TYPE_15__ cookies; } ;
struct TYPE_28__ {TYPE_2__* connection; TYPE_1__ headers_in; int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_23__ {int log; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 TYPE_5__* FUNC_1 (TYPE_7__*,int ) ;
 size_t FUNC_2 (TYPE_15__*,int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_5__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,char*,int *) ;
 TYPE_5__* FUNC_7 (int ,int) ;

__attribute__((used)) static ngx_http_userid_ctx_t *
FUNC_8(ngx_http_request_t *VAR_5, ngx_http_userid_conf_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_str_t VAR_8, VAR_9;
    ngx_table_elt_t **VAR_10;
    ngx_http_userid_ctx_t *VAR_11;

    VAR_11 = FUNC_1(VAR_5, VAR_4);

    if (VAR_11) {
        return VAR_11;
    }

    if (VAR_11 == ((void*)0)) {
        VAR_11 = FUNC_7(VAR_5->pool, sizeof(ngx_http_userid_ctx_t));
        if (VAR_11 == ((void*)0)) {
            return ((void*)0);
        }

        FUNC_3(VAR_5, VAR_11, VAR_4);
    }

    VAR_7 = FUNC_2(&VAR_5->headers_in.cookies, &VAR_6->name,
                                          &VAR_11->cookie);
    if (VAR_7 == VAR_0) {
        return VAR_11;
    }

    FUNC_4(VAR_2, VAR_5->connection->log, 0,
                   "uid cookie: \"%V\"", &VAR_11->cookie);

    if (VAR_11->cookie.len < 22) {
        VAR_10 = VAR_5->headers_in.cookies.elts;
        FUNC_6(VAR_3, VAR_5->connection->log, 0,
                      "client sent too short userid cookie \"%V\"",
                      &VAR_10[VAR_7]->value);
        return VAR_11;
    }

    VAR_8 = VAR_11->cookie;
    VAR_8.len = 22;

    VAR_9.data = (u_char *) VAR_11->uid_got;

    if (FUNC_0(&VAR_9, &VAR_8) == VAR_1) {
        VAR_10 = VAR_5->headers_in.cookies.elts;
        FUNC_6(VAR_3, VAR_5->connection->log, 0,
                      "client sent invalid userid cookie \"%V\"",
                      &VAR_10[VAR_7]->value);
        return VAR_11;
    }

    FUNC_5(VAR_2, VAR_5->connection->log, 0,
                   "uid: %08XD%08XD%08XD%08XD",
                   VAR_11->uid_got[0], VAR_11->uid_got[1],
                   VAR_11->uid_got[2], VAR_11->uid_got[3]);

    return VAR_11;
}
