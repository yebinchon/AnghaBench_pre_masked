
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int alarm_time_s; scalar_t__ alarm_time_ms; scalar_t__ alarm_ms; scalar_t__ repeat; } ;
typedef TYPE_1__ pyb_rtc_obj_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int*,scalar_t__*) ;
 int FUNC_1 (int*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int,scalar_t__) ;

void FUNC_3 (pyb_rtc_obj_t *VAR_1) {
    if (VAR_1->repeat) {
        uint32_t VAR_2, VAR_3;
        uint16_t VAR_4, VAR_5;

        FUNC_1(&VAR_3, &VAR_5);


        int32_t VAR_6 = ((VAR_3 * 1000) + VAR_5) - ((VAR_1->alarm_time_s * 1000) + VAR_1->alarm_time_ms);
        int32_t VAR_7 = VAR_1->alarm_ms - VAR_6;
        VAR_7 = VAR_7 > 0 ? VAR_7 : VAR_0;
        FUNC_0 (VAR_7, &VAR_2, &VAR_4);


        FUNC_2 (VAR_1, VAR_2, VAR_4);
    }
}
