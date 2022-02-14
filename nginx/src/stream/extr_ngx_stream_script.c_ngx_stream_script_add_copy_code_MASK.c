
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_7__ {size_t len; int code; } ;
typedef TYPE_1__ ngx_stream_script_copy_code_t ;
struct TYPE_8__ {int zero; int main; int * values; int * lengths; } ;
typedef TYPE_2__ ngx_stream_script_compile_t ;
typedef int ngx_stream_script_code_pt ;
struct TYPE_9__ {size_t len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ,size_t) ;
 TYPE_1__* FUNC_1 (int ,size_t,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_stream_script_compile_t *VAR_4,
    ngx_str_t *VAR_5, ngx_uint_t VAR_6)
{
    u_char *VAR_7;
    size_t VAR_8, VAR_9, VAR_10;
    ngx_stream_script_copy_code_t *VAR_11;

    VAR_10 = (VAR_4->zero && VAR_6);
    VAR_9 = VAR_5->len + VAR_10;

    VAR_11 = FUNC_1(*VAR_4->lengths,
                                      sizeof(ngx_stream_script_copy_code_t),
                                      ((void*)0));
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->code = (ngx_stream_script_code_pt) (void *)
                                               VAR_3;
    VAR_11->len = VAR_9;

    VAR_8 = (sizeof(ngx_stream_script_copy_code_t) + VAR_9 + sizeof(uintptr_t) - 1)
            & ~(sizeof(uintptr_t) - 1);

    VAR_11 = FUNC_1(*VAR_4->values, VAR_8, &VAR_4->main);
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->code = VAR_2;
    VAR_11->len = VAR_9;

    VAR_7 = FUNC_0((u_char *) VAR_11 + sizeof(ngx_stream_script_copy_code_t),
                   VAR_5->data, VAR_5->len);

    if (VAR_10) {
        *VAR_7 = '\0';
        VAR_4->zero = 0;
    }

    return VAR_1;
}
