
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (char*,int) ;
 struct tm* FUNC_1 (int *,struct tm*) ;

__attribute__((used)) static void FUNC_2(time_t VAR_0, char *VAR_1, char *VAR_2)
{
 uint16_t VAR_3, VAR_4;
 struct tm *VAR_5, VAR_6;

 VAR_5 = FUNC_1(&VAR_0, &VAR_6);
 if (VAR_5->tm_year >= 1980) {
  VAR_4 = ((VAR_5->tm_year+1900-1980)<<9) + ((VAR_5->tm_mon+1)<<5) + VAR_5->tm_mday;
  VAR_3 = ((VAR_5->tm_hour)<<11) + ((VAR_5->tm_min)<<5) + ((VAR_5->tm_sec)>>1);
 } else {

  VAR_4 = (1<<5) + 1;
  VAR_3 = 0;
 }

 FUNC_0(VAR_1, VAR_3);
 FUNC_0(VAR_2, VAR_4);
}
