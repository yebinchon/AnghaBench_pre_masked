
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {size_t len; int valid; int not_found; scalar_t__ no_cacheable; int * data; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int GeoIPRecord ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int * FUNC_3 (int ,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    char *VAR_5;
    size_t VAR_6;
    GeoIPRecord *VAR_7;

    VAR_7 = FUNC_1(VAR_2);
    if (VAR_7 == ((void*)0)) {
        goto not_found;
    }

    VAR_5 = *(char **) ((char *) VAR_7 + VAR_4);
    if (VAR_5 == ((void*)0)) {
        goto no_value;
    }

    VAR_6 = FUNC_4(VAR_5);
    VAR_3->data = FUNC_3(VAR_2->pool, VAR_6);
    if (VAR_3->data == ((void*)0)) {
        FUNC_0(VAR_7);
        return VAR_0;
    }

    FUNC_2(VAR_3->data, VAR_5, VAR_6);

    VAR_3->len = VAR_6;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    FUNC_0(VAR_7);

    return VAR_1;

no_value:

    FUNC_0(VAR_7);

not_found:

    VAR_3->not_found = 1;

    return VAR_1;
}
