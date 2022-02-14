
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int dummy; } ;


 int VAR_0 ;
 struct tm* FUNC_0 (scalar_t__*) ;
 struct tm* FUNC_1 (scalar_t__*,struct tm*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,struct tm*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 time_t VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 > 0)
 {



  struct tm *VAR_3 = FUNC_0(&VAR_2);

  char VAR_4[100];
  if (VAR_3)
  {
   FUNC_3(VAR_4, sizeof VAR_4, "%Y-%m-%d %H:%M UTC", VAR_3);
   FUNC_4("Date: %s", VAR_4);
  }
 }
}
