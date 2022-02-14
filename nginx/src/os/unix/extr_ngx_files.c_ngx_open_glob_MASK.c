
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {scalar_t__ test; int pglob; scalar_t__ pattern; } ;
typedef TYPE_1__ ngx_glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int *,int *) ;

ngx_int_t
FUNC_1(ngx_glob_t *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0((char *) VAR_3->pattern, 0, ((void*)0), &VAR_3->pglob);

    if (VAR_4 == 0) {
        return VAR_2;
    }
    return VAR_1;
}
