
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tzinfo ;
typedef int tziNew ;
struct TYPE_15__ {int Month; int Day; int Weekday; int Year; } ;
struct TYPE_14__ {int Month; int Day; int Weekday; int Year; } ;
struct TYPE_17__ {int Bias; int DaylightBias; int StandardBias; TYPE_4__ StandardDate; TYPE_3__ DaylightDate; } ;
struct TYPE_13__ {int wMonth; int wDayOfWeek; int wDay; int wHour; } ;
struct TYPE_12__ {int wMonth; int wDayOfWeek; int wDay; int wHour; } ;
struct TYPE_16__ {int Bias; int StandardBias; int DaylightBias; int DaylightName; int StandardName; TYPE_2__ DaylightDate; TYPE_1__ StandardDate; } ;
typedef TYPE_5__ TIME_ZONE_INFORMATION ;
typedef TYPE_6__ RTL_TIME_ZONE_INFORMATION ;
typedef int NTSTATUS ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    RTL_TIME_ZONE_INFORMATION VAR_4;
    NTSTATUS VAR_5;
    TIME_ZONE_INFORMATION VAR_6, VAR_7, VAR_8;
    DWORD VAR_9;



    VAR_9 = FUNC_1(&VAR_6);

    FUNC_6(VAR_9 == VAR_2 || VAR_9 == VAR_3 || VAR_9 == VAR_1,
        "Get Time Zone Name failed with error = %ld.\n", FUNC_0());



    FUNC_4(&VAR_7, sizeof(VAR_7));
    VAR_7.Bias = 360;
    FUNC_9(VAR_7.StandardName, L"Test Standard Zone");
    VAR_7.StandardDate.wMonth = 11;
    VAR_7.StandardDate.wDayOfWeek = 5;
    VAR_7.StandardDate.wDay = 3;
    VAR_7.StandardDate.wHour = 2;
    VAR_7.StandardBias = 120;

    FUNC_9(VAR_7.DaylightName, L"Test Daylight Zone");
    VAR_7.DaylightDate.wMonth = 4;
    VAR_7.DaylightDate.wDayOfWeek = 6;
    VAR_7.DaylightDate.wDay = 2;
    VAR_7.DaylightDate.wHour = 2;
    VAR_7.DaylightBias = -60;



    FUNC_2(0xDEADBEEF);

    FUNC_6(FUNC_3(&VAR_7) ,
        "Set Time Zone Information failed with error = %ld.\n", FUNC_0());



    if(FUNC_0() != 0xDEADBEEF)
    {
        FUNC_10("SetTimeZoneInformation() is not available, so tests cannot be run.\n");
        return;
    }



    VAR_9 = FUNC_1(&VAR_8);

    FUNC_6(VAR_9 == VAR_2 || VAR_9 == VAR_3 || VAR_9 == VAR_1,
        "Get Time Zone Information Returned failed with error = %ld.\n", FUNC_0());

    FUNC_6(!FUNC_8(VAR_8.StandardName, VAR_7.StandardName),
        "Standard Time Zone Name = %ls, expected %ls.\n", VAR_8.StandardName, VAR_7.StandardName);

    FUNC_6(!FUNC_8(VAR_8.DaylightName, VAR_7.DaylightName),
        "Standard Time Zone Name = %ls, expected %ls.\n", VAR_8.DaylightName, VAR_7.DaylightName);



    if (!&FUNC_7)
    {
        FUNC_10("pRtlQueryTimeZoneInformation() fails, so tests cannot be run.\n");
        return;
    }


    FUNC_5(&VAR_4, 0, sizeof(VAR_4));


    VAR_5 = FUNC_7(&VAR_4);
    FUNC_6(VAR_5 == VAR_0, "pRtlQueryTimeZoneInformation failed, got %08lx\n", VAR_5);


    FUNC_6(VAR_4.DaylightDate.Month == 4, "tzinfo.DaylightDate.wMonth expected '4', got '%d'.\n", VAR_4.DaylightDate.Month);
    FUNC_6(VAR_4.DaylightDate.Day == 2, "tzinfo.DaylightDate.wDay expected '2', got '%d'.\n", VAR_4.DaylightDate.Day);
    FUNC_6(VAR_4.DaylightDate.Weekday == 6, "tzinfo.DaylightDate.wDayOfWeek expected '6', got '%d'.\n", VAR_4.DaylightDate.Weekday);
    FUNC_6(VAR_4.DaylightDate.Year == 0, "tzinfo.DaylightDate.wYear expected '0', got '%d'.\n", VAR_4.DaylightDate.Year);


    FUNC_6(VAR_4.StandardDate.Month == 11, "tzinfo.StandardDate.wMonth expected '11', got '%d'.\n", VAR_4.StandardDate.Month);
    FUNC_6(VAR_4.StandardDate.Day == 3, "tzinfo.StandardDate.wDay expected '3', got '%d'.\n", VAR_4.StandardDate.Day);
    FUNC_6(VAR_4.StandardDate.Weekday == 5, "tzinfo.StandardDate.wDayOfWeek expected '5', got '%d'.\n", VAR_4.StandardDate.Weekday);
    FUNC_6(VAR_4.StandardDate.Year == 0, "tzinfo.StandardDate.wYear expected '0', got '%d'.\n", VAR_4.StandardDate.Year);


    FUNC_6(VAR_4.Bias == 360, "tzinfo.Bias expected '360', got '%ld'.\n", VAR_4.Bias);
    FUNC_6(VAR_4.DaylightBias == -60, "tzinfo.DaylightBias expected '-60', got '%ld'.\n", VAR_4.DaylightBias);
    FUNC_6(VAR_4.StandardBias == 120, "tzinfo.StandardBias expected '120', got '%ld'.\n", VAR_4.StandardBias);


    FUNC_6(FUNC_3(&VAR_6),
        "Set Time Zone Information failed with error = %ld.\n", FUNC_0());

}
