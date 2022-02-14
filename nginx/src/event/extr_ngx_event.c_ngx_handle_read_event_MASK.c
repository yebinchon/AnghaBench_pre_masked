
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {scalar_t__ ready; scalar_t__ oneshot; scalar_t__ active; } ;
typedef TYPE_1__ ngx_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_9 ;

ngx_int_t
FUNC_2(ngx_event_t *VAR_10, ngx_uint_t VAR_11)
{
    if (VAR_9 & VAR_6) {



        if (!VAR_10->active && !VAR_10->ready) {
            if (FUNC_0(VAR_10, VAR_5, VAR_0)
                == VAR_2)
            {
                return VAR_2;
            }
        }

        return VAR_4;

    } else if (VAR_9 & VAR_8) {



        if (!VAR_10->active && !VAR_10->ready) {
            if (FUNC_0(VAR_10, VAR_5, VAR_3)
                == VAR_2)
            {
                return VAR_2;
            }

            return VAR_4;
        }

        if (VAR_10->active && (VAR_10->ready || (VAR_11 & VAR_1))) {
            if (FUNC_1(VAR_10, VAR_5, VAR_3 | VAR_11)
                == VAR_2)
            {
                return VAR_2;
            }

            return VAR_4;
        }

    } else if (VAR_9 & VAR_7) {



        if (!VAR_10->active && !VAR_10->ready) {
            if (FUNC_0(VAR_10, VAR_5, 0) == VAR_2) {
                return VAR_2;
            }

            return VAR_4;
        }

        if (VAR_10->oneshot && !VAR_10->ready) {
            if (FUNC_1(VAR_10, VAR_5, 0) == VAR_2) {
                return VAR_2;
            }

            return VAR_4;
        }
    }



    return VAR_4;
}
