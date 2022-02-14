
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int tm_sec; int tm_min; int tm_hour; int tm_year; int tm_mon; int tm_mday; } ;
typedef TYPE_1__ timeutils_struct_time_t ;
typedef int _u8 ;
struct TYPE_5__ {int sl_tm_sec; int sl_tm_min; int sl_tm_hour; int sl_tm_year; int sl_tm_mon; int sl_tm_day; int member_0; } ;
typedef TYPE_2__ SlDateTime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2 (uint32_t VAR_2) {
    timeutils_struct_time_t VAR_3;
    FUNC_1(VAR_2, &VAR_3);

    SlDateTime_t VAR_4 = {0};
    VAR_4.sl_tm_day = VAR_3.tm_mday;
    VAR_4.sl_tm_mon = VAR_3.tm_mon;
    VAR_4.sl_tm_year = VAR_3.tm_year;
    VAR_4.sl_tm_hour = VAR_3.tm_hour;
    VAR_4.sl_tm_min = VAR_3.tm_min;
    VAR_4.sl_tm_sec = VAR_3.tm_sec;
    FUNC_0(VAR_0, VAR_1, sizeof(SlDateTime_t), (_u8 *)(&VAR_4));
}
