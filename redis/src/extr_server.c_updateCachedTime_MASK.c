
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_isdst; } ;
struct TYPE_2__ {int ustime; int mstime; int unixtime; int daylight_active; } ;


 int FUNC_0 (int*,struct tm*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;

void FUNC_2(int VAR_1) {
    VAR_0.ustime = FUNC_1();
    VAR_0.mstime = VAR_0.ustime / 1000;
    VAR_0.unixtime = VAR_0.mstime / 1000;






    if (VAR_1) {
        struct tm VAR_2;
        time_t VAR_3 = VAR_0.unixtime;
        FUNC_0(&VAR_3,&VAR_2);
        VAR_0.daylight_active = VAR_2.tm_isdst;
    }
}
