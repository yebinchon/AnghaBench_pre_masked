
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static time_t
FUNC_5(struct tm *VAR_0)
{
  time_t VAR_1;
  char *VAR_2;

  VAR_2 = FUNC_0("TZ");
  FUNC_2("TZ", "UTC", 1);
  FUNC_3();
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_2)
    FUNC_2("TZ", VAR_2, 1);
  else
    FUNC_4("TZ");
  FUNC_3();
  return VAR_1;
}
