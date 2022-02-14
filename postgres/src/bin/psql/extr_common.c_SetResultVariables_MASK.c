
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vars; } ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(PGresult *VAR_3, bool VAR_4)
{
 if (VAR_4)
 {
  const char *VAR_5 = FUNC_0(VAR_3);

  FUNC_2(VAR_2.vars, "ERROR", "false");
  FUNC_2(VAR_2.vars, "SQLSTATE", "00000");
  FUNC_2(VAR_2.vars, "ROW_COUNT", *VAR_5 ? VAR_5 : "0");
 }
 else
 {
  const char *VAR_6 = FUNC_1(VAR_3, VAR_1);
  const char *VAR_7 = FUNC_1(VAR_3, VAR_0);

  FUNC_2(VAR_2.vars, "ERROR", "true");





  if (VAR_6 == ((void*)0))
   VAR_6 = "";
  FUNC_2(VAR_2.vars, "SQLSTATE", VAR_6);
  FUNC_2(VAR_2.vars, "ROW_COUNT", "0");
  FUNC_2(VAR_2.vars, "LAST_ERROR_SQLSTATE", VAR_6);
  FUNC_2(VAR_2.vars, "LAST_ERROR_MESSAGE", VAR_7 ? VAR_7 : "");
 }
}
