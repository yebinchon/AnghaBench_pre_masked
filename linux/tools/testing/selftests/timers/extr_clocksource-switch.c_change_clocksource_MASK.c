
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,char*,int ) ;

int FUNC_4(char *VAR_1)
{
 int VAR_2;
 ssize_t VAR_3;

 VAR_2 = FUNC_1("/sys/devices/system/clocksource/clocksource0/current_clocksource", VAR_0);

 if (VAR_2 < 0)
  return -1;

 VAR_3 = FUNC_3(VAR_2, VAR_1, FUNC_2(VAR_1));

 if (VAR_3 < 0)
  return -1;

 FUNC_0(VAR_2);
 return 0;
}
