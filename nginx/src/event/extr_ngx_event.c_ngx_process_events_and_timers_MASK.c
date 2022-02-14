
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_msec_t ;
struct TYPE_6__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ,int ,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_14 ;

void
FUNC_10(ngx_cycle_t *VAR_15)
{
    ngx_uint_t VAR_16;
    ngx_msec_t VAR_17, VAR_18;

    if (VAR_13) {
        VAR_17 = VAR_3;
        VAR_16 = 0;

    } else {
        VAR_17 = FUNC_1();
        VAR_16 = VAR_4;
    }

    if (VAR_14) {
        if (VAR_5 > 0) {
            VAR_5--;

        } else {
            if (FUNC_9(VAR_15) == VAR_0) {
                return;
            }

            if (VAR_8) {
                VAR_16 |= VAR_2;

            } else {
                if (VAR_17 == VAR_3
                    || VAR_17 > VAR_7)
                {
                    VAR_17 = VAR_7;
                }
            }
        }
    }

    if (!FUNC_6(&VAR_12)) {
        FUNC_5(&VAR_11, &VAR_12);
        FUNC_7(&VAR_12);
        VAR_17 = 0;
    }

    VAR_18 = VAR_9;

    (void) FUNC_4(VAR_15, VAR_17, VAR_16);

    VAR_18 = VAR_9 - VAR_18;

    FUNC_3(VAR_1, VAR_15->log, 0,
                   "timer delta: %M", VAR_18);

    FUNC_2(VAR_15, &VAR_10);

    if (VAR_8) {
        FUNC_8(&VAR_6);
    }

    if (VAR_18) {
        FUNC_0();
    }

    FUNC_2(VAR_15, &VAR_11);
}
