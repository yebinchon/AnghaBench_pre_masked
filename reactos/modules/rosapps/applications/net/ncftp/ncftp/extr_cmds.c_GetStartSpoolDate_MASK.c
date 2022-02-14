
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int) ;
 struct tm* FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (struct tm*) ;
 int FUNC_6 (char*,char*,int*,int*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static time_t
FUNC_10(const char *VAR_0)
{
 char *VAR_1;
 char VAR_2[64];
 time_t VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct tm VAR_10, *VAR_11;

 FUNC_0(VAR_2, VAR_0);
 VAR_1 = FUNC_7(VAR_2, ':');
 if ((VAR_2[0] == 'n') || (VAR_2[0] == '+')) {



  VAR_1 = FUNC_7(VAR_2, '+');
  if (VAR_1 == ((void*)0))
   return ((time_t) -1);
  ++VAR_1;
  VAR_5 = 0;
  VAR_6 = 0;
  (void) FUNC_6(VAR_1, "%d%n", &VAR_5, &VAR_6);
  if ((VAR_6 <= 0) || (VAR_5 <= 0))
   return ((time_t) -1);
  VAR_1 += VAR_6;
  while ((*VAR_1 != '\0') && (!FUNC_2(*VAR_1)))
   VAR_1++;
  VAR_7 = *VAR_1;
  if (FUNC_3(VAR_7))
   VAR_7 = FUNC_9(VAR_7);
  if (VAR_7 == 's') {

  } else if (VAR_7 == 'm') {

   VAR_5 *= 60;
  } else if (VAR_7 == 'h') {

   VAR_5 *= 3600;
  } else if (VAR_7 == 'd') {

   VAR_5 *= 86400;
  } else {

   return ((time_t) -1);
  }
  FUNC_8(&VAR_3);
  VAR_4 = VAR_3 + (time_t) VAR_5;
 } else if (VAR_1 != ((void*)0)) {

  FUNC_8(&VAR_3);
  VAR_11 = FUNC_4(&VAR_3);
  if (VAR_11 == ((void*)0))
   return ((time_t) -1);
  VAR_10 = *VAR_11;
  *VAR_1 = ' ';
  VAR_8 = -1;
  VAR_9 = -1;
  (void) FUNC_6(VAR_2, "%d%d", &VAR_8, &VAR_9);
  if ((VAR_8 < 0) || (VAR_9 < 0))
   return ((time_t) -1);
  VAR_10.tm_hour = VAR_8;
  VAR_10.tm_min = VAR_9;
  VAR_4 = FUNC_5(&VAR_10);
  if ((VAR_4 == (time_t) -1) || (VAR_4 == (time_t) 0))
   return (VAR_4);
  if (VAR_4 < VAR_3)
   VAR_4 += (time_t) 86400;
 } else {
  VAR_4 = FUNC_1(VAR_2);
 }
 return (VAR_4);
}
