
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef TYPE_1__ timeutils_struct_time_t ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;

DWORD FUNC_2(void) {
    timeutils_struct_time_t VAR_0;
    FUNC_1(FUNC_0(), &VAR_0);

    return ((VAR_0.tm_year - 1980) << 25) | ((VAR_0.tm_mon) << 21) |
            ((VAR_0.tm_mday) << 16) | ((VAR_0.tm_hour) << 11) |
            ((VAR_0.tm_min) << 5) | (VAR_0.tm_sec >> 1);
}
