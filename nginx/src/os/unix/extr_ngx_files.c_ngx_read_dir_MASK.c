
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_4__ {scalar_t__ type; TYPE_2__* de; int dir; } ;
typedef TYPE_1__ ngx_dir_t ;
struct TYPE_5__ {scalar_t__ d_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;

ngx_int_t
FUNC_1(ngx_dir_t *VAR_2)
{
    VAR_2->de = FUNC_0(VAR_2->dir);

    if (VAR_2->de) {



        VAR_2->type = 0;

        return VAR_1;
    }

    return VAR_0;
}
