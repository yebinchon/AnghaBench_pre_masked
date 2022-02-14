
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;
typedef scalar_t__ GucContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__,int ) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2(int VAR_1, GucContext VAR_2, GucSource VAR_3)
{
 if (VAR_1 > 0)
 {
  char VAR_4[64];

  FUNC_1(VAR_4, "debug%d", VAR_1);
  FUNC_0("log_min_messages", VAR_4, VAR_2, VAR_3);
 }
 else
  FUNC_0("log_min_messages", "notice", VAR_2, VAR_3);

 if (VAR_1 >= 1 && VAR_2 == VAR_0)
 {
  FUNC_0("log_connections", "true", VAR_2, VAR_3);
  FUNC_0("log_disconnections", "true", VAR_2, VAR_3);
 }
 if (VAR_1 >= 2)
  FUNC_0("log_statement", "all", VAR_2, VAR_3);
 if (VAR_1 >= 3)
  FUNC_0("debug_print_parse", "true", VAR_2, VAR_3);
 if (VAR_1 >= 4)
  FUNC_0("debug_print_plan", "true", VAR_2, VAR_3);
 if (VAR_1 >= 5)
  FUNC_0("debug_print_rewritten", "true", VAR_2, VAR_3);
}
