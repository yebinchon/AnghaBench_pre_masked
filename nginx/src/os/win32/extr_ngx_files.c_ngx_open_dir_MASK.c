
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_6__ {int valid_info; int ready; int dir; int finddata; } ;
typedef TYPE_2__ ngx_dir_t ;


 int FUNC_0 (char const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

ngx_int_t
FUNC_5(ngx_str_t *VAR_4, ngx_dir_t *VAR_5)
{
    u_char *VAR_6, *VAR_7;
    ngx_err_t VAR_8;

    VAR_6 = FUNC_1(VAR_4->len + 3);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7 = FUNC_2(VAR_6, VAR_4->data, VAR_4->len);

    *VAR_7++ = '/';
    *VAR_7++ = '*';
    *VAR_7 = '\0';

    VAR_5->dir = FUNC_0((const char *) VAR_6, &VAR_5->finddata);

    if (VAR_5->dir == VAR_0) {
        VAR_8 = VAR_3;
        FUNC_3(VAR_6);
        FUNC_4(VAR_8);
        return VAR_1;
    }

    FUNC_3(VAR_6);

    VAR_5->valid_info = 1;
    VAR_5->ready = 1;

    return VAR_2;
}
