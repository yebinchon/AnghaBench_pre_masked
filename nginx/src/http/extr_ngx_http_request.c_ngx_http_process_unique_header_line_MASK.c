
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_8__ {int value; int key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_1__* connection; int headers_in; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4, ngx_table_elt_t *VAR_5,
    ngx_uint_t VAR_6)
{
    ngx_table_elt_t **VAR_7;

    VAR_7 = (ngx_table_elt_t **) ((char *) &VAR_4->headers_in + VAR_6);

    if (*VAR_7 == ((void*)0)) {
        *VAR_7 = VAR_5;
        return VAR_3;
    }

    FUNC_1(VAR_2, VAR_4->connection->log, 0,
                  "client sent duplicate header line: \"%V: %V\", "
                  "previous value: \"%V: %V\"",
                  &VAR_5->key, &VAR_5->value, &(*VAR_7)->key, &(*VAR_7)->value);

    FUNC_0(VAR_4, VAR_1);

    return VAR_0;
}
