
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_msec_t ;
typedef int ngx_int_t ;
typedef int ngx_event_t ;
struct TYPE_6__ {int connection_n; int log; TYPE_1__* old_cycle; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_7__ {int actions; } ;
struct TYPE_5__ {int connection_n; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int ** FUNC_1 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int **) ;
 int VAR_11 ;
 int FUNC_3 (int **,int **,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_3__ VAR_14 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_cycle_t *VAR_15, ngx_msec_t VAR_16)
{
    ngx_event_t **VAR_17;

    if (VAR_4 == ((void*)0)) {
        FUNC_0(&VAR_5);
        FUNC_0(&VAR_6);
        VAR_8 = 0;
    }

    if (VAR_13 >= VAR_2
        || VAR_15->old_cycle == ((void*)0)
        || VAR_15->old_cycle->connection_n < VAR_15->connection_n)
    {
        VAR_17 = FUNC_1(sizeof(ngx_event_t *) * 2 * VAR_15->connection_n,
                          VAR_15->log);
        if (VAR_17 == ((void*)0)) {
            return VAR_0;
        }

        if (VAR_4) {
            FUNC_3(VAR_17, VAR_4, sizeof(ngx_event_t *) * VAR_8);
            FUNC_2(VAR_4);
        }

        VAR_4 = VAR_17;
    }

    VAR_11 = VAR_12;

    VAR_9 = VAR_14.actions;

    VAR_10 = VAR_3;

    VAR_7 = -1;

    return VAR_1;
}
