
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int dyn_tzinfo ;
typedef int WORD ;
typedef char WCHAR ;
struct TYPE_16__ {int wMonth; } ;
struct TYPE_15__ {int TimeZoneKeyName; scalar_t__ DynamicDaylightTimeDisabled; } ;
struct TYPE_14__ {int wYear; } ;
struct TYPE_13__ {int Bias; int StandardBias; int DaylightBias; int DaylightName; int StandardName; TYPE_8__ DaylightDate; TYPE_8__ StandardDate; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ DYNAMIC_TIME_ZONE_INFORMATION ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_8__*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (TYPE_8__*,TYPE_8__*,int) ;
 int FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (int,TYPE_3__*,TYPE_1__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(void)
{
    BOOL VAR_3;
    SYSTEMTIME VAR_4;
    TIME_ZONE_INFORMATION VAR_5, VAR_6, VAR_7;
    DYNAMIC_TIME_ZONE_INFORMATION VAR_8;
    static const WCHAR VAR_9[] = {'G','r','e','e','n','l','a','n','d',' ','S','t','a','n','d','a','r','d',' ','T','i','m','e',0};
    static const WCHAR VAR_10[] = {'G','r','e','e','n','l','a','n','d',' ','D','a','y','l','i','g','h','t',' ','T','i','m','e',0};
    WORD VAR_11, VAR_12;

    if (!&FUNC_12 || !&FUNC_11)
    {
        FUNC_13("GetTimeZoneInformationForYear not available\n");
        return;
    }

    FUNC_1(&VAR_4);

    FUNC_2(&VAR_5);

    VAR_3 = FUNC_12(VAR_4.wYear, ((void*)0), &VAR_6);
    FUNC_10(VAR_3 == VAR_2, "GetTimeZoneInformationForYear failed, err %u\n", FUNC_0());
    FUNC_10(VAR_6.Bias == VAR_5.Bias, "Expected Bias %d, got %d\n", VAR_5.Bias, VAR_6.Bias);
    FUNC_10(!FUNC_6(VAR_6.StandardName, VAR_5.StandardName),
        "Expected StandardName %s, got %s\n", FUNC_14(VAR_5.StandardName), FUNC_14(VAR_6.StandardName));
    FUNC_10(!FUNC_8(&VAR_6.StandardDate, &VAR_5.StandardDate, sizeof(SYSTEMTIME)), "StandardDate does not match\n");
    FUNC_10(VAR_6.StandardBias == VAR_5.StandardBias, "Expected StandardBias %d, got %d\n", VAR_5.StandardBias, VAR_6.StandardBias);
    FUNC_10(!FUNC_6(VAR_6.DaylightName, VAR_5.DaylightName),
        "Expected DaylightName %s, got %s\n", FUNC_14(VAR_5.DaylightName), FUNC_14(VAR_6.DaylightName));
    FUNC_10(!FUNC_8(&VAR_6.DaylightDate, &VAR_5.DaylightDate, sizeof(SYSTEMTIME)), "DaylightDate does not match\n");
    FUNC_10(VAR_6.DaylightBias == VAR_5.DaylightBias, "Expected DaylightBias %d, got %d\n", VAR_5.DaylightBias, VAR_6.DaylightBias);

    FUNC_11(&VAR_8);

    VAR_3 = FUNC_12(VAR_4.wYear, &VAR_8, &VAR_6);
    FUNC_10(VAR_3 == VAR_2, "GetTimeZoneInformationForYear failed, err %u\n", FUNC_0());
    FUNC_10(VAR_6.Bias == VAR_5.Bias, "Expected Bias %d, got %d\n", VAR_5.Bias, VAR_6.Bias);
    FUNC_10(!FUNC_6(VAR_6.StandardName, VAR_5.StandardName),
        "Expected StandardName %s, got %s\n", FUNC_14(VAR_5.StandardName), FUNC_14(VAR_6.StandardName));
    FUNC_10(!FUNC_8(&VAR_6.StandardDate, &VAR_5.StandardDate, sizeof(SYSTEMTIME)), "StandardDate does not match\n");
    FUNC_10(VAR_6.StandardBias == VAR_5.StandardBias, "Expected StandardBias %d, got %d\n", VAR_5.StandardBias, VAR_6.StandardBias);
    FUNC_10(!FUNC_6(VAR_6.DaylightName, VAR_5.DaylightName),
        "Expected DaylightName %s, got %s\n", FUNC_14(VAR_5.DaylightName), FUNC_14(VAR_6.DaylightName));
    FUNC_10(!FUNC_8(&VAR_6.DaylightDate, &VAR_5.DaylightDate, sizeof(SYSTEMTIME)), "DaylightDate does not match\n");
    FUNC_10(VAR_6.DaylightBias == VAR_5.DaylightBias, "Expected DaylightBias %d, got %d\n", VAR_5.DaylightBias, VAR_6.DaylightBias);

    FUNC_9(&VAR_8, 0xaa, sizeof(VAR_8));
    FUNC_7(VAR_8.TimeZoneKeyName, VAR_9);
    VAR_8.DynamicDaylightTimeDisabled = VAR_1;

    VAR_3 = FUNC_12(2015, &VAR_8, &VAR_6);
    FUNC_10(VAR_3 == VAR_2, "GetTimeZoneInformationForYear failed, err %u\n", FUNC_0());
    FUNC_10(VAR_6.Bias == 180, "Expected Bias 180, got %d\n", VAR_6.Bias);
    FUNC_10(VAR_6.StandardDate.wMonth == 10, "Expected standard month 10, got %d\n", VAR_6.StandardDate.wMonth);
    VAR_11 = FUNC_5(&VAR_6.StandardDate, 2015);
    FUNC_10(VAR_11 == 24, "Expected standard day 24, got %d\n", VAR_11);
    FUNC_10(VAR_6.StandardBias == 0, "Expected StandardBias 0, got %d\n", VAR_6.StandardBias);
    FUNC_10(VAR_6.DaylightDate.wMonth == 3, "Expected daylight month 3, got %d\n", VAR_6.DaylightDate.wMonth);
    VAR_12 = FUNC_5(&VAR_6.DaylightDate, 2015);
    FUNC_10(VAR_12 == 28, "Expected daylight day 28, got %d\n", VAR_12);
    FUNC_10(VAR_6.DaylightBias == -60, "Expected DaylightBias -60, got %d\n", VAR_6.DaylightBias);

    VAR_3 = FUNC_12(2016, &VAR_8, &VAR_7);
    FUNC_10(VAR_3 == VAR_2, "GetTimeZoneInformationForYear failed, err %u\n", FUNC_0());
    FUNC_10(!FUNC_6(VAR_6.StandardName, VAR_7),
        "Got differing StandardName values %s and %s\n",
        FUNC_14(VAR_6.StandardName), FUNC_14(VAR_7));
    FUNC_10(!FUNC_6(VAR_6.DaylightName, VAR_7),
        "Got differing DaylightName values %s and %s\n",
        FUNC_14(VAR_6.DaylightName), FUNC_14(VAR_7));

    FUNC_9(&VAR_8, 0xaa, sizeof(VAR_8));
    FUNC_7(VAR_8.TimeZoneKeyName, VAR_10);

    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_12(2015, &VAR_8, &VAR_6);
    FUNC_10((VAR_3 == VAR_1 && FUNC_0() == VAR_0) ||
       FUNC_4(VAR_3 == VAR_2) ,
       "GetTimeZoneInformationForYear err %u\n", FUNC_0());
}
