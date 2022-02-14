
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {int type; int finddata; int dir; scalar_t__ ready; } ;
typedef TYPE_1__ ngx_dir_t ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

ngx_int_t
FUNC_1(ngx_dir_t *VAR_2)
{
    if (VAR_2->ready) {
        VAR_2->ready = 0;
        return VAR_1;
    }

    if (FUNC_0(VAR_2->dir, &VAR_2->finddata) != 0) {
        VAR_2->type = 1;
        return VAR_1;
    }

    return VAR_0;
}
