
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {int not_found; int valid; scalar_t__ no_cacheable; int * data; int * len; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int GeoIPRecord ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ,scalar_t__) ;
 int * FUNC_3 (int *,char*,float) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    float VAR_6;
    GeoIPRecord *VAR_7;

    VAR_7 = FUNC_1(VAR_3);
    if (VAR_7 == ((void*)0)) {
        VAR_4->not_found = 1;
        return VAR_2;
    }

    VAR_4->data = FUNC_2(VAR_3->pool, VAR_1 + 5);
    if (VAR_4->data == ((void*)0)) {
        FUNC_0(VAR_7);
        return VAR_0;
    }

    VAR_6 = *(float *) ((char *) VAR_7 + VAR_5);

    VAR_4->len = FUNC_3(VAR_4->data, "%.4f", VAR_6) - VAR_4->data;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    FUNC_0(VAR_7);

    return VAR_2;
}
