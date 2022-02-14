
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_yday; int tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; scalar_t__ tm_isdst; int tm_wday; } ;
struct TYPE_3__ {int Bias; int DaylightBias; int StandardBias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 char* FUNC_3 (char*) ;
 struct tm* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    TIME_ZONE_INFORMATION VAR_3;
    DWORD VAR_4 = FUNC_0(&VAR_3);
    time_t VAR_5, VAR_6;

    char VAR_7[256];
    struct tm* VAR_8;
    int VAR_9 = FUNC_2( &VAR_6 );
    int VAR_10 = !(VAR_9 % 4) && ((VAR_9 % 100) || !((VAR_9 + 300) % 400));

    VAR_5 = VAR_6 + VAR_0 + VAR_3.Bias * VAR_1;
    FUNC_5 (VAR_4 != VAR_2, "GetTimeZoneInformation failed\n");
    VAR_8 = FUNC_4(&VAR_5);
    VAR_5 += (VAR_8->tm_isdst ? VAR_3.DaylightBias : VAR_3.StandardBias) * VAR_1;
    VAR_8 = FUNC_4(&VAR_5);
    FUNC_5(((VAR_8->tm_year == VAR_9) && (VAR_8->tm_mon == 0) && (VAR_8->tm_yday == 1) &&
 (VAR_8->tm_mday == 2) && (VAR_8->tm_hour == 0) &&
 (VAR_8->tm_min == 0) && (VAR_8->tm_sec == 0)),
       "Wrong date:Year %d mon %d yday %d mday %d wday %d hour %d min %d sec %d dst %d\n",
       VAR_8->tm_year, VAR_8->tm_mon, VAR_8->tm_yday, VAR_8->tm_mday, VAR_8->tm_wday, VAR_8->tm_hour,
       VAR_8->tm_min, VAR_8->tm_sec, VAR_8->tm_isdst);

    FUNC_1(VAR_7,255,"TZ=%s",(FUNC_3("TZ")?FUNC_3("TZ"):""));
    FUNC_6("TZ=GMT");
    VAR_8 = FUNC_4(&VAR_5);
    FUNC_5(((VAR_8->tm_year == VAR_9) && (VAR_8->tm_mon == 0) && (VAR_8->tm_yday == 1) &&
 (VAR_8->tm_mday == 2) && (VAR_8->tm_hour == 0) &&
 (VAR_8->tm_min == 0) && (VAR_8->tm_sec == 0)),
       "Wrong date:Year %d mon %d yday %d mday %d wday %d hour %d min %d sec %d dst %d\n",
       VAR_8->tm_year, VAR_8->tm_mon, VAR_8->tm_yday, VAR_8->tm_mday, VAR_8->tm_wday, VAR_8->tm_hour,
       VAR_8->tm_min, VAR_8->tm_sec, VAR_8->tm_isdst);
    FUNC_6(VAR_7);


    VAR_5 = VAR_6 + 202 * VAR_0 + VAR_3.Bias * VAR_1;
    VAR_8 = FUNC_4(&VAR_5);
    VAR_5 += (VAR_8->tm_isdst ? VAR_3.DaylightBias : VAR_3.StandardBias) * VAR_1;
    VAR_8 = FUNC_4(&VAR_5);
    FUNC_5(((VAR_8->tm_year == VAR_9) && (VAR_8->tm_mon == 6) && (VAR_8->tm_yday == 202) &&
 (VAR_8->tm_mday == 22 - VAR_10) && (VAR_8->tm_hour == 0) &&
 (VAR_8->tm_min == 0) && (VAR_8->tm_sec == 0)),
       "Wrong date:Year %d mon %d yday %d mday %d wday %d hour %d min %d sec %d dst %d\n",
       VAR_8->tm_year, VAR_8->tm_mon, VAR_8->tm_yday, VAR_8->tm_mday, VAR_8->tm_wday, VAR_8->tm_hour,
       VAR_8->tm_min, VAR_8->tm_sec, VAR_8->tm_isdst);
}
