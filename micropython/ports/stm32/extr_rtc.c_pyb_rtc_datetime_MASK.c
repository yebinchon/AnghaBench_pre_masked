
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_8__ {void* WeekDay; void* Date; void* Month; void* Year; } ;
struct TYPE_7__ {int StoreOperation; int DayLightSaving; int TimeFormat; void* Seconds; void* Minutes; void* Hours; int SubSeconds; } ;
typedef TYPE_1__ RTC_TimeTypeDef ;
typedef TYPE_2__ RTC_DateTypeDef ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int const,int,int **) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 () ;
 void* FUNC_9 (int ) ;

mp_obj_t FUNC_10(size_t VAR_6, const mp_obj_t *VAR_7) {
    FUNC_8();
    if (VAR_6 == 1) {


        RTC_DateTypeDef VAR_8;
        RTC_TimeTypeDef VAR_9;
        FUNC_1(&VAR_0, &VAR_9, VAR_2);
        FUNC_0(&VAR_0, &VAR_8, VAR_2);
        mp_obj_t VAR_10[8] = {
            FUNC_6(2000 + VAR_8.Year),
            FUNC_6(VAR_8.Month),
            FUNC_6(VAR_8.Date),
            FUNC_6(VAR_8.WeekDay),
            FUNC_6(VAR_9.Hours),
            FUNC_6(VAR_9.Minutes),
            FUNC_6(VAR_9.Seconds),
            FUNC_6(FUNC_9(VAR_9.SubSeconds)),
        };
        return FUNC_7(8, VAR_10);
    } else {

        mp_obj_t *VAR_11;
        FUNC_4(VAR_7[1], 8, &VAR_11);

        RTC_DateTypeDef VAR_12;
        VAR_12.Year = FUNC_5(VAR_11[0]) - 2000;
        VAR_12.Month = FUNC_5(VAR_11[1]);
        VAR_12.Date = FUNC_5(VAR_11[2]);
        VAR_12.WeekDay = FUNC_5(VAR_11[3]);
        FUNC_2(&VAR_0, &VAR_12, VAR_2);

        RTC_TimeTypeDef VAR_13;
        VAR_13.Hours = FUNC_5(VAR_11[4]);
        VAR_13.Minutes = FUNC_5(VAR_11[5]);
        VAR_13.Seconds = FUNC_5(VAR_11[6]);
        VAR_13.TimeFormat = VAR_3;
        VAR_13.DayLightSaving = VAR_1;
        VAR_13.StoreOperation = VAR_4;
        FUNC_3(&VAR_0, &VAR_13, VAR_2);

        return VAR_5;
    }
}
