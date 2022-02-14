
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int ) ;

void
FUNC_4(int VAR_3, const char *VAR_4, va_list VAR_5)
{
 int VAR_6 = VAR_0;

 FUNC_0(0);
 FUNC_1(VAR_2, "[%s] Error: ", VAR_1);
 FUNC_3(VAR_2, VAR_4, VAR_5);
 if (VAR_3 != 0) {
  FUNC_1(VAR_2, ": %s", FUNC_2(VAR_6));
 }
 FUNC_1(VAR_2, "\n");
}
