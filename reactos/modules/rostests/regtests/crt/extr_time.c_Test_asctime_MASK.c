
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mday; int tm_min; int tm_mon; int tm_sec; int tm_wday; int tm_yday; int tm_year; scalar_t__ tm_hour; } ;


 char* FUNC_0 (struct tm*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3()
{

    struct tm VAR_0;
    char* VAR_1;
    char VAR_2[] = "Mon Jun 04 00:30:20 1909\n";

    VAR_0.tm_hour = 0;
    VAR_0.tm_mday = 4;
    VAR_0.tm_min = 30;
    VAR_0.tm_mon = 5;
    VAR_0.tm_sec = 20;
    VAR_0.tm_wday = 1;
    VAR_0.tm_yday = 200;
    VAR_0.tm_year = 9;

    VAR_1 = FUNC_0(&VAR_0);
    FUNC_1(!FUNC_2(VAR_1, VAR_2), "Wrong time returned, got %s\n", VAR_1);
}
