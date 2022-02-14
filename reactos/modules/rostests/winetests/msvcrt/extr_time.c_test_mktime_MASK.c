
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_year; scalar_t__ tm_mon; scalar_t__ tm_isdst; } ;
typedef int buffer ;
struct TYPE_3__ {int Bias; int StandardBias; int DaylightBias; int StandardName; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,int,char*,int,int *,int *) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (int*) ;
 char* FUNC_4 (char*) ;
 struct tm* FUNC_5 (int*) ;
 int FUNC_6 (struct tm*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int,int,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    TIME_ZONE_INFORMATION VAR_5;
    DWORD VAR_6 = FUNC_0(&VAR_5);
    struct tm VAR_7, VAR_8;
    time_t VAR_9, VAR_10;
    char VAR_11[256];
    char VAR_12[64];
    int VAR_13;
    time_t VAR_14, VAR_15;

    VAR_13 = FUNC_3( &VAR_14 );
    VAR_14 += VAR_1;

    FUNC_7 (VAR_6 != VAR_4, "GetTimeZoneInformation failed\n");
    FUNC_1( VAR_0, 0, VAR_5.StandardName, -1, VAR_12, sizeof(VAR_12), ((void*)0), ((void*)0) );
    FUNC_9( "bias %d std %d dst %d zone %s\n",
           VAR_5.Bias, VAR_5.StandardBias, VAR_5.DaylightBias, VAR_12 );

    VAR_7 = *FUNC_5(&VAR_14);
    VAR_15 = VAR_1 - VAR_5.Bias * VAR_3;
    VAR_15 -= (VAR_7.tm_isdst ? VAR_5.DaylightBias : VAR_5.StandardBias) * VAR_3;
    VAR_7.tm_mday = 1 + VAR_15/VAR_1;
    VAR_15 = VAR_15 % VAR_1;
    VAR_7.tm_hour = VAR_15 / VAR_2;
    VAR_15 = VAR_15 % VAR_2;
    VAR_7.tm_min = VAR_15 / VAR_3;
    VAR_15 = VAR_15 % VAR_3;
    VAR_7.tm_sec = VAR_15;

    VAR_7.tm_year = VAR_13;
    VAR_7.tm_mon = 0;

    VAR_8 = VAR_7;

    VAR_10 = FUNC_6(&VAR_7);
    FUNC_7(VAR_10 == VAR_14, "mktime returned %u, expected %u\n",
       (DWORD)VAR_10, (DWORD)VAR_14);

    VAR_7 = VAR_8;
    VAR_7.tm_sec += 60;
    VAR_7.tm_min -= 1;
    VAR_10 = FUNC_6(&VAR_7);
    FUNC_7(VAR_10 == VAR_14, "Unnormalized mktime returned %u, expected %u\n",
        (DWORD)VAR_10, (DWORD)VAR_14);
    FUNC_7( VAR_7.tm_year == VAR_8.tm_year && VAR_7.tm_mon == VAR_8.tm_mon &&
        VAR_7.tm_mday == VAR_8.tm_mday && VAR_7.tm_hour == VAR_8.tm_hour &&
        VAR_7.tm_sec == VAR_8.tm_sec,
            "mktime returned %2d-%02d-%02d %02d:%02d expected %2d-%02d-%02d %02d:%02d\n",
            VAR_7.tm_year,VAR_7.tm_mon,VAR_7.tm_mday,
            VAR_7.tm_hour,VAR_7.tm_sec,
            VAR_8.tm_year,VAR_8.tm_mon,VAR_8.tm_mday,
            VAR_8.tm_hour,VAR_8.tm_sec);
    VAR_7 = VAR_8;
    VAR_7.tm_min -= 60;
    VAR_7.tm_hour += 1;
    VAR_10 = FUNC_6(&VAR_7);
    FUNC_7(VAR_10 == VAR_14, "Unnormalized mktime returned %u, expected %u\n",
       (DWORD)VAR_10, (DWORD)VAR_14);
    FUNC_7( VAR_7.tm_year == VAR_8.tm_year && VAR_7.tm_mon == VAR_8.tm_mon &&
        VAR_7.tm_mday == VAR_8.tm_mday && VAR_7.tm_hour == VAR_8.tm_hour &&
        VAR_7.tm_sec == VAR_8.tm_sec,
            "mktime returned %2d-%02d-%02d %02d:%02d expected %2d-%02d-%02d %02d:%02d\n",
            VAR_7.tm_year,VAR_7.tm_mon,VAR_7.tm_mday,
            VAR_7.tm_hour,VAR_7.tm_sec,
            VAR_8.tm_year,VAR_8.tm_mon,VAR_8.tm_mday,
            VAR_8.tm_hour,VAR_8.tm_sec);
    VAR_7 = VAR_8;
    VAR_7.tm_mon -= 12;
    VAR_7.tm_year += 1;
    VAR_10 = FUNC_6(&VAR_7);
    FUNC_7(VAR_10 == VAR_14, "Unnormalized mktime returned %u, expected %u\n",
       (DWORD)VAR_10, (DWORD)VAR_14);
    FUNC_7( VAR_7.tm_year == VAR_8.tm_year && VAR_7.tm_mon == VAR_8.tm_mon &&
        VAR_7.tm_mday == VAR_8.tm_mday && VAR_7.tm_hour == VAR_8.tm_hour &&
        VAR_7.tm_sec == VAR_8.tm_sec,
            "mktime returned %2d-%02d-%02d %02d:%02d expected %2d-%02d-%02d %02d:%02d\n",
            VAR_7.tm_year,VAR_7.tm_mon,VAR_7.tm_mday,
            VAR_7.tm_hour,VAR_7.tm_sec,
            VAR_8.tm_year,VAR_8.tm_mon,VAR_8.tm_mday,
            VAR_8.tm_hour,VAR_8.tm_sec);
    VAR_7 = VAR_8;
    VAR_7.tm_mon += 12;
    VAR_7.tm_year -= 1;
    VAR_10 = FUNC_6(&VAR_7);
    FUNC_7(VAR_10 == VAR_14, "Unnormalized mktime returned %u, expected %u\n",
       (DWORD)VAR_10, (DWORD)VAR_14);
    FUNC_7( VAR_7.tm_year == VAR_8.tm_year && VAR_7.tm_mon == VAR_8.tm_mon &&
        VAR_7.tm_mday == VAR_8.tm_mday && VAR_7.tm_hour == VAR_8.tm_hour &&
        VAR_7.tm_sec == VAR_8.tm_sec,
            "mktime returned %2d-%02d-%02d %02d:%02d expected %2d-%02d-%02d %02d:%02d\n",
            VAR_7.tm_year,VAR_7.tm_mon,VAR_7.tm_mday,
            VAR_7.tm_hour,VAR_7.tm_sec,
            VAR_8.tm_year,VAR_8.tm_mon,VAR_8.tm_mday,
            VAR_8.tm_hour,VAR_8.tm_sec);

    VAR_7 = VAR_8;
    VAR_7.tm_year = 69;
    VAR_10 = FUNC_6(&VAR_7);
    FUNC_7((VAR_10 == -1), "(bad time) mktime returned %d, expected -1\n", (int)VAR_10);

    VAR_7 = VAR_8;


    FUNC_2(VAR_11,255,"TZ=%s",(FUNC_4("TZ")?FUNC_4("TZ"):""));
    FUNC_8("TZ=GMT");
    VAR_9 = FUNC_6(&VAR_7);
    FUNC_7(VAR_9 == VAR_14,"mktime returned 0x%08x\n",(DWORD)VAR_9);
    FUNC_8(VAR_11);
}
