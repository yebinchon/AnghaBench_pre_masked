
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

ngx_int_t
FUNC_6(ngx_cycle_t *VAR_6)
{
    if (FUNC_4(&VAR_4)) {

        FUNC_2(VAR_1, VAR_6->log, 0,
                       "accept mutex locked");

        if (VAR_5 && VAR_3 == 0) {
            return VAR_2;
        }

        if (FUNC_1(VAR_6) == VAR_0) {
            FUNC_5(&VAR_4);
            return VAR_0;
        }

        VAR_3 = 0;
        VAR_5 = 1;

        return VAR_2;
    }

    FUNC_3(VAR_1, VAR_6->log, 0,
                   "accept mutex lock failed: %ui", VAR_5);

    if (VAR_5) {
        if (FUNC_0(VAR_6, 0) == VAR_0) {
            return VAR_0;
        }

        VAR_5 = 0;
    }

    return VAR_2;
}
