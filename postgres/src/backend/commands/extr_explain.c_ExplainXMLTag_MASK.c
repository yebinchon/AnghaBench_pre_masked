
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int indent; int str; } ;
typedef TYPE_1__ ExplainState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*,char const) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, int VAR_4, ExplainState *VAR_5)
{
 const char *VAR_6;
 const char *VAR_7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_.";

 if ((VAR_4 & VAR_2) == 0)
  FUNC_2(VAR_5->str, 2 * VAR_5->indent);
 FUNC_1(VAR_5->str, '<');
 if ((VAR_4 & VAR_1) != 0)
  FUNC_1(VAR_5->str, '/');
 for (VAR_6 = VAR_3; *VAR_6; VAR_6++)
  FUNC_0(VAR_5->str, FUNC_4(VAR_7, *VAR_6) ? *VAR_6 : '-');
 if ((VAR_4 & VAR_0) != 0)
  FUNC_3(VAR_5->str, " /");
 FUNC_1(VAR_5->str, '>');
 if ((VAR_4 & VAR_2) == 0)
  FUNC_1(VAR_5->str, '\n');
}
