
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_wday; int tm_yday; int tm_mday; int tm_year; int tm_mon; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 char* FUNC_2 (struct tm*) ;
 struct tm* FUNC_3 (int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    struct tm* VAR_2;
    time_t VAR_3;
    char *VAR_4;

    if(!&FUNC_2 || !&FUNC_3)
    {
        FUNC_5("asctime or gmtime is not available\n");
        return;
    }

    VAR_3 = 0;
    VAR_2 = FUNC_3(&VAR_3);
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!FUNC_4(VAR_4, "Thu Jan 01 00:00:00 1970\n"), "asctime returned %s\n", VAR_4);

    VAR_3 = 312433121;
    VAR_2 = FUNC_3(&VAR_3);
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!FUNC_4(VAR_4, "Mon Nov 26 02:58:41 1979\n"), "asctime returned %s\n", VAR_4);


    VAR_2->tm_wday = 3;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!FUNC_4(VAR_4, "Wed Nov 26 02:58:41 1979\n"), "asctime returned %s\n", VAR_4);

    VAR_1 = 0xdeadbeef;
    VAR_2->tm_wday = 7;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!VAR_4 || FUNC_0(!VAR_4[0]), "asctime returned %s\n", VAR_4);
    FUNC_1(VAR_1==VAR_0 || FUNC_0(VAR_1==0xdeadbeef), "errno = %d\n", VAR_1);


    VAR_2->tm_wday = 3;
    VAR_2->tm_yday = 1300;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!FUNC_4(VAR_4, "Wed Nov 26 02:58:41 1979\n"), "asctime returned %s\n", VAR_4);


    VAR_2->tm_mday = 28;
    VAR_2->tm_year = 8100;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!FUNC_4(VAR_4, "Wed Nov 28 02:58:41 :000\n"), "asctime returned %s\n", VAR_4);

    VAR_2->tm_year = 264100;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!FUNC_4(VAR_4, "Wed Nov 28 02:58:41 :000\n"), "asctime returned %s\n", VAR_4);


    VAR_1 = 0xdeadbeef;
    VAR_2->tm_year = -1;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!VAR_4 || FUNC_0(!FUNC_4(VAR_4, "Wed Nov 28 02:58:41 190/\n")), "asctime returned %s\n", VAR_4);
    FUNC_1(VAR_1==VAR_0 || FUNC_0(VAR_1 == 0xdeadbeef), "errno = %d\n", VAR_1);

    VAR_1 = 0xdeadbeef;
    VAR_2->tm_mon = 1;
    VAR_2->tm_mday = 30;
    VAR_2->tm_year = 79;
    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(!VAR_4 || FUNC_0(!FUNC_4(VAR_4, "Wed Feb 30 02:58:41 1979\n")), "asctime returned %s\n", VAR_4);
    FUNC_1(VAR_1==VAR_0 || FUNC_0(VAR_1==0xdeadbeef), "errno = %d\n", VAR_1);
}
