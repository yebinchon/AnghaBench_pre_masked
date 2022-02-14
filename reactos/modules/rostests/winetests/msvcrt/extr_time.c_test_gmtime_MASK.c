
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; scalar_t__ tm_sec; scalar_t__ tm_mon; int tm_yday; int tm_mday; int tm_wday; scalar_t__ tm_hour; scalar_t__ tm_min; int tm_isdst; } ;
typedef int errno_t ;
typedef int __time32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 struct tm* FUNC_2 (int*) ;
 int FUNC_3 (struct tm*,int*) ;
 int FUNC_4 (struct tm*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    __time32_t VAR_2, VAR_3;
    struct tm* VAR_4, VAR_5;
    errno_t VAR_6;

    if(!&FUNC_2) {
        FUNC_5("Skipping _gmtime32 tests\n");
        return;
    }

    VAR_4 = FUNC_2(((void*)0));
    FUNC_1(VAR_4 == ((void*)0), "gmt_tm != NULL\n");

    VAR_3 = -1;
    VAR_4 = FUNC_2(&VAR_3);
    FUNC_1(VAR_4==((void*)0) || FUNC_0(VAR_4->tm_year==70 && VAR_4->tm_sec<0), "gmt_tm != NULL\n");

    VAR_3 = VAR_2 = 0;
    VAR_4 = FUNC_2(&VAR_3);
    if(!VAR_4) {
        FUNC_1(0, "_gmtime32() failed\n");
        return;
    }

    FUNC_1(((VAR_4->tm_year == 70) && (VAR_4->tm_mon == 0) && (VAR_4->tm_yday == 0) &&
                (VAR_4->tm_mday == 1) && (VAR_4->tm_wday == 4) && (VAR_4->tm_hour == 0) &&
                (VAR_4->tm_min == 0) && (VAR_4->tm_sec == 0) && (VAR_4->tm_isdst == 0)),
            "Wrong date:Year %4d mon %2d yday %3d mday %2d wday %1d hour%2d min %2d sec %2d dst %2d\n",
            VAR_4->tm_year, VAR_4->tm_mon, VAR_4->tm_yday, VAR_4->tm_mday, VAR_4->tm_wday,
            VAR_4->tm_hour, VAR_4->tm_min, VAR_4->tm_sec, VAR_4->tm_isdst);

    if(!&FUNC_4) {
        FUNC_5("Skipping _mkgmtime32 tests\n");
        return;
    }

    VAR_4->tm_wday = VAR_4->tm_yday = 0;
    VAR_3 = FUNC_4(VAR_4);
    FUNC_1(VAR_3 == VAR_2, "gmt = %u\n", VAR_3);
    FUNC_1(VAR_4->tm_wday == 4, "gmt_tm->tm_wday = %d\n", VAR_4->tm_wday);
    FUNC_1(VAR_4->tm_yday == 0, "gmt_tm->tm_yday = %d\n", VAR_4->tm_yday);

    VAR_4->tm_wday = VAR_4->tm_yday = 0;
    VAR_4->tm_isdst = -1;
    VAR_3 = FUNC_4(VAR_4);
    FUNC_1(VAR_3 == VAR_2, "gmt = %u\n", VAR_3);
    FUNC_1(VAR_4->tm_wday == 4, "gmt_tm->tm_wday = %d\n", VAR_4->tm_wday);
    FUNC_1(VAR_4->tm_yday == 0, "gmt_tm->tm_yday = %d\n", VAR_4->tm_yday);

    VAR_4->tm_wday = VAR_4->tm_yday = 0;
    VAR_4->tm_isdst = 1;
    VAR_3 = FUNC_4(VAR_4);
    FUNC_1(VAR_3 == VAR_2, "gmt = %u\n", VAR_3);
    FUNC_1(VAR_4->tm_wday == 4, "gmt_tm->tm_wday = %d\n", VAR_4->tm_wday);
    FUNC_1(VAR_4->tm_yday == 0, "gmt_tm->tm_yday = %d\n", VAR_4->tm_yday);

    VAR_3 = VAR_2 = 173921;
    VAR_4 = FUNC_2(&VAR_3);
    if(!VAR_4) {
        FUNC_1(0, "_gmtime32() failed\n");
        return;
    }

    VAR_4->tm_isdst = -1;
    VAR_3 = FUNC_4(VAR_4);
    FUNC_1(VAR_3 == VAR_2, "gmt = %u\n", VAR_3);
    FUNC_1(VAR_4->tm_wday == 6, "gmt_tm->tm_wday = %d\n", VAR_4->tm_wday);
    FUNC_1(VAR_4->tm_yday == 2, "gmt_tm->tm_yday = %d\n", VAR_4->tm_yday);

    VAR_4->tm_isdst = 1;
    VAR_3 = FUNC_4(VAR_4);
    FUNC_1(VAR_3 == VAR_2, "gmt = %u\n", VAR_3);

    if(!&FUNC_3) {
        FUNC_5("Skipping _gmtime32_s tests\n");
        return;
    }

    VAR_1 = 0;
    VAR_3 = 0;
    VAR_6 = FUNC_3(((void*)0), &VAR_3);
    FUNC_1(VAR_6 == VAR_0, "err = %d\n", VAR_6);
    FUNC_1(VAR_1 == VAR_0, "errno = %d\n", VAR_1);

    VAR_1 = 0;
    VAR_3 = -1;
    VAR_6 = FUNC_3(&VAR_5, &VAR_3);
    FUNC_1(VAR_5.tm_year == -1 || FUNC_0(VAR_5.tm_year == 70 && VAR_5.tm_sec < 0),
       "tm_year = %d, tm_sec = %d\n", VAR_5.tm_year, VAR_5.tm_sec);
    if(VAR_5.tm_year == -1) {
        FUNC_1(VAR_6==VAR_0, "err = %d\n", VAR_6);
        FUNC_1(VAR_1==VAR_0, "errno = %d\n", VAR_1);
    }
}
