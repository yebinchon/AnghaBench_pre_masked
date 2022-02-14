
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; void* tm_year; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; } ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 struct tm* FUNC_3 (int*) ;
 int FUNC_4 (struct tm*) ;

void
FUNC_5(char *VAR_0, int VAR_1, time_t *VAR_2)
{
 struct tm *VAR_3;

 if ((VAR_3 = FUNC_3(&VAR_2[0])) == ((void*)0))
  FUNC_1(1, "localtime");

 VAR_3->tm_mon = FUNC_0(VAR_0);
 --VAR_3->tm_mon;
 VAR_3->tm_mday = FUNC_0(VAR_0);
 VAR_3->tm_hour = FUNC_0(VAR_0);
 VAR_3->tm_min = FUNC_0(VAR_0);
 if (VAR_1)
  VAR_3->tm_year = FUNC_0(VAR_0);

 VAR_3->tm_isdst = -1;
 VAR_2[0] = VAR_2[1] = FUNC_4(VAR_3);
 if (VAR_2[0] == -1)
  FUNC_2(1,
 "out of range or illegal time specification: MMDDhhmm[yy]");
}
