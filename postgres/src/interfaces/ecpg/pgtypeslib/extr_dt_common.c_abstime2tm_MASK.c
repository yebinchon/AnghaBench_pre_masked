
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; int tm_gmtoff; int tm_zone; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int AbsoluteTime ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 struct tm* FUNC_1 (int *) ;
 struct tm* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(AbsoluteTime VAR_6, int *VAR_7, struct tm *VAR_8, char **VAR_9)
{
 time_t VAR_10 = (time_t) VAR_6;
 struct tm *VAR_11;

 VAR_5 = 0;
 if (VAR_7 != ((void*)0))
  VAR_11 = FUNC_2((time_t *) &VAR_10);
 else
  VAR_11 = FUNC_1((time_t *) &VAR_10);

 if (!VAR_11)
 {
  VAR_5 = VAR_1;
  return;
 }

 VAR_8->tm_year = VAR_11->tm_year + 1900;
 VAR_8->tm_mon = VAR_11->tm_mon + 1;
 VAR_8->tm_mday = VAR_11->tm_mday;
 VAR_8->tm_hour = VAR_11->tm_hour;
 VAR_8->tm_min = VAR_11->tm_min;
 VAR_8->tm_sec = VAR_11->tm_sec;
 VAR_8->tm_isdst = VAR_11->tm_isdst;
 if (VAR_7 != ((void*)0))
 {

  *VAR_7 = 0;
  if (VAR_9 != ((void*)0))
   *VAR_9 = ((void*)0);
 }
 else
  VAR_8->tm_isdst = -1;

}
