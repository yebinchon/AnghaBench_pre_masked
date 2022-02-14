
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {size_t tm_mon; int tm_mday; int tm_year; int tm_hour; int tm_min; } ;


 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tm* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char*,char*,int,int,...) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3(char *VAR_4, time_t VAR_5)
{
 struct tm *VAR_6;

 if (VAR_5 == VAR_3) {
  (void) FUNC_2(VAR_4, "            ");
  return;
 }
 VAR_6 = FUNC_0(&VAR_5);
 if (VAR_6 == ((void*)0)) {
  (void) FUNC_2(VAR_4, "Jan  0  1900");
  return;
 }
 if ((VAR_5 > VAR_2) || (VAR_5 < VAR_1)) {
  (void) FUNC_1(VAR_4, "%s %2d  %4d",
   VAR_0[VAR_6->tm_mon],
   VAR_6->tm_mday,
   VAR_6->tm_year + 1900
  );
 } else {
  (void) FUNC_1(VAR_4, "%s %2d %02d:%02d",
   VAR_0[VAR_6->tm_mon],
   VAR_6->tm_mday,
   VAR_6->tm_hour,
   VAR_6->tm_min
  );
 }
}
