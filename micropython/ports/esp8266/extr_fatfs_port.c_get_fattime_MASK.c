
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int tm_year; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; } ;
typedef TYPE_1__ timeutils_struct_time_t ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;

DWORD FUNC_2(void) {



    uint32_t VAR_0 = (uint32_t)(FUNC_0() / 1000000);

    timeutils_struct_time_t VAR_1;
    FUNC_1(VAR_0, &VAR_1);

    return (((DWORD)(VAR_1.tm_year - 1980) << 25) | ((DWORD)VAR_1.tm_mon << 21) | ((DWORD)VAR_1.tm_mday << 16) |
           ((DWORD)VAR_1.tm_hour << 11) | ((DWORD)VAR_1.tm_min << 5) | ((DWORD)VAR_1.tm_sec >> 1));
}
