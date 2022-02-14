
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_8__ {scalar_t__ obuf_soft_limit_reached_time; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {scalar_t__ unixtime; TYPE_1__* client_obuf_limits; } ;
struct TYPE_7__ {unsigned long hard_limit_bytes; unsigned long soft_limit_bytes; scalar_t__ soft_limit_seconds; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__ VAR_2 ;

int FUNC_2(client *VAR_3) {
    int VAR_4 = 0, VAR_5 = 0, VAR_6;
    unsigned long VAR_7 = FUNC_0(VAR_3);

    VAR_6 = FUNC_1(VAR_3);


    if (VAR_6 == VAR_0) VAR_6 = VAR_1;

    if (VAR_2.client_obuf_limits[VAR_6].hard_limit_bytes &&
        VAR_7 >= VAR_2.client_obuf_limits[VAR_6].hard_limit_bytes)
        VAR_5 = 1;
    if (VAR_2.client_obuf_limits[VAR_6].soft_limit_bytes &&
        VAR_7 >= VAR_2.client_obuf_limits[VAR_6].soft_limit_bytes)
        VAR_4 = 1;



    if (VAR_4) {
        if (VAR_3->obuf_soft_limit_reached_time == 0) {
            VAR_3->obuf_soft_limit_reached_time = VAR_2.unixtime;
            VAR_4 = 0;
        } else {
            time_t VAR_8 = VAR_2.unixtime - VAR_3->obuf_soft_limit_reached_time;

            if (VAR_8 <=
                VAR_2.client_obuf_limits[VAR_6].soft_limit_seconds) {
                VAR_4 = 0;


            }
        }
    } else {
        VAR_3->obuf_soft_limit_reached_time = 0;
    }
    return VAR_4 || VAR_5;
}
