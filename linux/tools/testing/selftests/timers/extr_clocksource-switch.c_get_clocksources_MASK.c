
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 size_t FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(char VAR_1[][30])
{
 int VAR_2, VAR_3;
 size_t VAR_4;
 char VAR_5[512];
 char *VAR_6, *VAR_7;

 VAR_2 = FUNC_1("/sys/devices/system/clocksource/clocksource0/available_clocksource", VAR_0);

 VAR_4 = FUNC_2(VAR_2, VAR_5, 512);

 FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < 10; VAR_3++)
  VAR_1[VAR_3][0] = '\0';

 VAR_6 = VAR_5;
 VAR_3 = 0;
 while (VAR_6 - VAR_5 < VAR_4) {

  for (VAR_7 = VAR_6; *VAR_7 != ' '; VAR_7++) {
   if (*VAR_7 == '\n')
    break;
   if (*VAR_7 == '\0')
    break;
  }
  *VAR_7 = '\0';
  FUNC_3(VAR_1[VAR_3], VAR_6);
  VAR_6 = VAR_7 + 1;
  VAR_3++;
 }

 return VAR_3-1;
}
