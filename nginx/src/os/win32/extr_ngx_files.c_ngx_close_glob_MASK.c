
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ dir; int pattern; int log; TYPE_1__ name; } ;
typedef TYPE_2__ ngx_glob_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;

void
FUNC_3(ngx_glob_t *VAR_3)
{
    if (VAR_3->name.data) {
        FUNC_1(VAR_3->name.data);
    }

    if (VAR_3->dir == VAR_0) {
        return;
    }

    if (FUNC_0(VAR_3->dir) == 0) {
        FUNC_2(VAR_1, VAR_3->log, VAR_2,
                      "FindClose(%s) failed", VAR_3->pattern);
    }
}
