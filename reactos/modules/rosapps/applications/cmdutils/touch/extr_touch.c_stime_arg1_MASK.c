
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_isdst; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; void* tm_sec; } ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 struct tm* FUNC_3 (int*) ;
 int FUNC_4 (struct tm*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

void
FUNC_7(char *VAR_0, time_t *VAR_1)
{
 struct tm *VAR_2;
 int VAR_3;
 char *VAR_4;

 if ((VAR_2 = FUNC_3(&VAR_1[0])) == ((void*)0))
  FUNC_1(1, "localtime");

 if ((VAR_4 = FUNC_5(VAR_0, '.')) == ((void*)0))
  VAR_2->tm_sec = 0;
 else {
  if (FUNC_6(VAR_4 + 1) != 2)
   goto terr;
  *VAR_4++ = '\0';
  VAR_2->tm_sec = FUNC_0(VAR_4);
 }

 VAR_3 = 0;
 switch(FUNC_6(VAR_0)) {
 case 12:
  VAR_2->tm_year = FUNC_0(VAR_0);
  VAR_2->tm_year *= 1000;
  VAR_3 = 1;

 case 10:
  if (VAR_3) {
   VAR_3 = FUNC_0(VAR_0);
   VAR_2->tm_year += VAR_3;
  } else {
   VAR_3 = FUNC_0(VAR_0);
   if (VAR_3 < 69)
    VAR_2->tm_year = VAR_3 + 2000;
   else
    VAR_2->tm_year = VAR_3 + 1900;
  }
  VAR_2->tm_year -= 1900;

 case 8:
  VAR_2->tm_mon = FUNC_0(VAR_0);
  --VAR_2->tm_mon;
  VAR_2->tm_mday = FUNC_0(VAR_0);
  VAR_2->tm_hour = FUNC_0(VAR_0);
  VAR_2->tm_min = FUNC_0(VAR_0);
  break;
 default:
  goto terr;
 }

 VAR_2->tm_isdst = -1;
 VAR_1[0] = VAR_1[1] = FUNC_4(VAR_2);
 if (VAR_1[0] == -1)
terr: FUNC_2(1,
 "out of range or illegal time specification: [[CC]YY]MMDDhhmm[.SS]");
}
