
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ valid_info; int * dir; } ;
typedef TYPE_2__ ngx_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*) ;

ngx_int_t
FUNC_1(ngx_str_t *VAR_2, ngx_dir_t *VAR_3)
{
    VAR_3->dir = FUNC_0((const char *) VAR_2->data);

    if (VAR_3->dir == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->valid_info = 0;

    return VAR_1;
}
