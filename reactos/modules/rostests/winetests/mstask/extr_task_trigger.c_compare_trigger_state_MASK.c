
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ DaysInterval; } ;
struct TYPE_7__ {TYPE_1__ Daily; } ;
struct TYPE_8__ {scalar_t__ cbTriggerSize; scalar_t__ Reserved1; scalar_t__ wBeginYear; scalar_t__ wBeginMonth; scalar_t__ wBeginDay; scalar_t__ wEndYear; scalar_t__ wEndMonth; scalar_t__ wEndDay; scalar_t__ wStartHour; scalar_t__ wStartMinute; scalar_t__ MinutesDuration; scalar_t__ MinutesInterval; scalar_t__ rgFlags; scalar_t__ TriggerType; scalar_t__ Reserved2; scalar_t__ wRandomMinutesInterval; TYPE_2__ Type; } ;
typedef TYPE_3__ TASK_TRIGGER ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(TASK_TRIGGER VAR_1,
        TASK_TRIGGER VAR_2)
{
    FUNC_0(VAR_1.cbTriggerSize == VAR_2.cbTriggerSize,
            "cbTriggerSize: Found %d but expected %d\n",
            VAR_1.cbTriggerSize, VAR_2.cbTriggerSize);

    FUNC_0(VAR_1.Reserved1 == VAR_2.Reserved1,
            "Reserved1: Found %d but expected %d\n",
            VAR_1.Reserved1, VAR_2.Reserved1);

    FUNC_0(VAR_1.wBeginYear == VAR_2.wBeginYear,
            "wBeginYear: Found %d but expected %d\n",
            VAR_1.wBeginYear, VAR_2.wBeginYear);

    FUNC_0(VAR_1.wBeginMonth == VAR_2.wBeginMonth,
            "wBeginMonth: Found %d but expected %d\n",
            VAR_1.wBeginMonth, VAR_2.wBeginMonth);

    FUNC_0(VAR_1.wBeginDay == VAR_2.wBeginDay,
            "wBeginDay: Found %d but expected %d\n",
            VAR_1.wBeginDay, VAR_2.wBeginDay);

    FUNC_0(VAR_1.wEndYear == VAR_2.wEndYear,
            "wEndYear: Found %d but expected %d\n",
            VAR_1.wEndYear, VAR_2.wEndYear);

    FUNC_0(VAR_1.wEndMonth == VAR_2.wEndMonth,
            "wEndMonth: Found %d but expected %d\n",
            VAR_1.wEndMonth, VAR_2.wEndMonth);

    FUNC_0(VAR_1.wEndDay == VAR_2.wEndDay,
            "wEndDay: Found %d but expected %d\n",
            VAR_1.wEndDay, VAR_2.wEndDay);

    FUNC_0(VAR_1.wStartHour == VAR_2.wStartHour,
            "wStartHour: Found %d but expected %d\n",
            VAR_1.wStartHour, VAR_2.wStartHour);

    FUNC_0(VAR_1.wStartMinute == VAR_2.wStartMinute,
            "wStartMinute: Found %d but expected %d\n",
            VAR_1.wStartMinute, VAR_2.wStartMinute);

    FUNC_0(VAR_1.MinutesDuration == VAR_2.MinutesDuration,
            "MinutesDuration: Found %d but expected %d\n",
            VAR_1.MinutesDuration, VAR_2.MinutesDuration);

    FUNC_0(VAR_1.MinutesInterval == VAR_2.MinutesInterval,
            "MinutesInterval: Found %d but expected %d\n",
            VAR_1.MinutesInterval, VAR_2.MinutesInterval);

    FUNC_0(VAR_1.rgFlags == VAR_2.rgFlags,
            "rgFlags: Found %d but expected %d\n",
            VAR_1.rgFlags, VAR_2.rgFlags);

    FUNC_0(VAR_1.TriggerType == VAR_2.TriggerType,
            "TriggerType: Found %d but expected %d\n",
            VAR_1.TriggerType, VAR_2.TriggerType);

    FUNC_0(VAR_1.Type.Daily.DaysInterval == VAR_2.Type.Daily.DaysInterval,
            "Type.Daily.DaysInterval: Found %d but expected %d\n",
            VAR_1.Type.Daily.DaysInterval, VAR_2.Type.Daily.DaysInterval);

    FUNC_0(VAR_1.Reserved2 == VAR_2.Reserved2,
            "Reserved2: Found %d but expected %d\n",
            VAR_1.Reserved2, VAR_2.Reserved2);

    FUNC_0(VAR_1.wRandomMinutesInterval == VAR_2.wRandomMinutesInterval,
            "wRandomMinutesInterval: Found %d but expected %d\n",
            VAR_1.wRandomMinutesInterval, VAR_2.wRandomMinutesInterval);

    return VAR_0;
}
