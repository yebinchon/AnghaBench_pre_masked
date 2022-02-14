
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t len; int valid; int not_found; scalar_t__ no_cacheable; int * data; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {int region; int country_code; } ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_4__ GeoIPRecord ;


 int FUNC_0 (TYPE_4__*) ;
 char* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char const*,size_t) ;
 int * FUNC_3 (int ,size_t) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_stream_session_t *VAR_2,
    ngx_stream_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    size_t VAR_5;
    const char *VAR_6;
    GeoIPRecord *VAR_7;

    VAR_7 = FUNC_4(VAR_2);
    if (VAR_7 == ((void*)0)) {
        goto not_found;
    }

    VAR_6 = FUNC_1(VAR_7->country_code, VAR_7->region);

    FUNC_0(VAR_7);

    if (VAR_6 == ((void*)0)) {
        goto not_found;
    }

    VAR_5 = FUNC_5(VAR_6);
    VAR_3->data = FUNC_3(VAR_2->connection->pool, VAR_5);
    if (VAR_3->data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_3->data, VAR_6, VAR_5);

    VAR_3->len = VAR_5;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    return VAR_1;

not_found:

    VAR_3->not_found = 1;

    return VAR_1;
}
