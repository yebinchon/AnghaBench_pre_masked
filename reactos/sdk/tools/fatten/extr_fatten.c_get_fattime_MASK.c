
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_sec; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; } ;
struct FatTime {int whole; } ;
struct TYPE_2__ {int member_0; int member_5; int member_4; int member_3; int member_2; int member_1; } ;
typedef int DWORD ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

DWORD FUNC_2(void)
{



    time_t VAR_0;
    struct tm * VAR_1;

    FUNC_1(&VAR_0);
    VAR_1 = FUNC_0(&VAR_0);

    {
    union FatTime {
        struct {
            DWORD Second : 5;
            DWORD Minute : 6;
            DWORD Hour : 5;
            DWORD Day : 5;
            DWORD Month : 4;
            DWORD Year : 7;
        };
        DWORD whole;
    } VAR_2 = {
        {
            VAR_1->tm_sec / 2,
            VAR_1->tm_min,
            VAR_1->tm_hour,
            VAR_1->tm_mday,
            VAR_1->tm_mon + 1,
            VAR_1->tm_year - 80,
        }
    };

    return VAR_2.whole;
    }
}
