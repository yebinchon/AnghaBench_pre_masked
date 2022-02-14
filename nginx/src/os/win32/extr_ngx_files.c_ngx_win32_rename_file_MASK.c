
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_4__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_err_t ;
typedef int ngx_atomic_uint_t ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,scalar_t__,char*,int *,...) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int ) ;

ngx_err_t
FUNC_8(ngx_str_t *VAR_4, ngx_str_t *VAR_5, ngx_log_t *VAR_6)
{
    u_char *VAR_7;
    ngx_err_t VAR_8;
    ngx_uint_t VAR_9;
    ngx_atomic_uint_t VAR_10;

    VAR_7 = FUNC_2(VAR_5->len + 1 + VAR_0 + 1 + sizeof("DELETE"),
                     VAR_6);
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_5(VAR_7, VAR_5->data, VAR_5->len);

    VAR_9 = 0;



    for ( ;; ) {
        VAR_10 = FUNC_6(VAR_9);

        FUNC_7(VAR_7 + VAR_5->len, ".%0muA.DELETE%Z", VAR_10);

        if (FUNC_1((const char *) VAR_5->data, (const char *) VAR_7) != 0) {
            break;
        }

        VAR_9 = 1;

        FUNC_4(VAR_2, VAR_6, VAR_3,
                      "MoveFile() \"%s\" to \"%s\" failed", VAR_5->data, VAR_7);
    }

    if (FUNC_1((const char *) VAR_4->data, (const char *) VAR_5->data) == 0) {
        VAR_8 = VAR_3;

    } else {
        VAR_8 = 0;
    }

    if (FUNC_0((const char *) VAR_7) == 0) {
        FUNC_4(VAR_2, VAR_6, VAR_3,
                      "DeleteFile() \"%s\" failed", VAR_7);
    }



    FUNC_3(VAR_7);

    return VAR_8;
}
