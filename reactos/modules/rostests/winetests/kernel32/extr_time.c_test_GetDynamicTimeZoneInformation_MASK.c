
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Bias; scalar_t__* StandardName; scalar_t__ StandardBias; scalar_t__* DaylightName; scalar_t__* TimeZoneKeyName; int DaylightDate; int StandardDate; } ;
struct TYPE_5__ {scalar_t__ Bias; scalar_t__* StandardName; scalar_t__ StandardBias; scalar_t__* DaylightName; int DaylightDate; int StandardDate; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef TYPE_2__ DYNAMIC_TIME_ZONE_INFORMATION ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__*) ;

__attribute__((used)) static void FUNC_8(void)
{
    DYNAMIC_TIME_ZONE_INFORMATION VAR_0;
    TIME_ZONE_INFORMATION VAR_1;
    DWORD VAR_2, VAR_3;

    if (!&FUNC_4)
    {
        FUNC_6("GetDynamicTimeZoneInformation() is not supported.\n");
        return;
    }

    VAR_2 = FUNC_4(&VAR_0);
    VAR_3 = FUNC_0(&VAR_1);
    FUNC_3(VAR_2 == VAR_3, "got %d, %d\n", VAR_2, VAR_3);

    FUNC_3(VAR_0.Bias == VAR_1.Bias, "got %d, %d\n", VAR_0.Bias, VAR_1.Bias);
    FUNC_3(!FUNC_1(VAR_0.StandardName, VAR_1.StandardName), "got std name %s, %s\n",
        FUNC_7(VAR_0.StandardName), FUNC_7(VAR_1.StandardName));
    FUNC_3(!FUNC_2(&VAR_0.StandardDate, &VAR_1.StandardDate, sizeof(VAR_0.StandardDate)), "got different StandardDate\n");
    FUNC_3(VAR_0.StandardBias == VAR_1.StandardBias, "got %d, %d\n", VAR_0.StandardBias, VAR_1.StandardBias);
    FUNC_3(!FUNC_1(VAR_0.DaylightName, VAR_1.DaylightName), "got daylight name %s, %s\n",
        FUNC_7(VAR_0.DaylightName), FUNC_7(VAR_1.DaylightName));
    FUNC_3(!FUNC_2(&VAR_0.DaylightDate, &VAR_1.DaylightDate, sizeof(VAR_0.DaylightDate)), "got different DaylightDate\n");
    FUNC_3(VAR_0.TimeZoneKeyName[0] != 0, "got empty tz keyname\n");
    FUNC_5("Dyn TimeZoneKeyName %s\n", FUNC_7(VAR_0.TimeZoneKeyName));
}
