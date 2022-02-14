
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prepared_statement {int dummy; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,struct connection*,struct prepared_statement*,struct prepared_statement*) ;
 struct prepared_statement* FUNC_2 (char const*,struct connection*,struct prepared_statement**) ;
 struct connection* FUNC_3 (char const*) ;
 int FUNC_4 (struct connection*,char const*,int) ;
 int FUNC_5 (int,int ,int ,char const*) ;

bool
FUNC_6(int VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5)
{
 struct connection *VAR_6;
 struct prepared_statement *VAR_7,
      *VAR_8;

 VAR_6 = FUNC_3(VAR_4);
 if (!FUNC_4(VAR_6, VAR_4, VAR_2))
  return 0;

 VAR_7 = FUNC_2(VAR_5, VAR_6, &VAR_8);
 if (VAR_7)
  return FUNC_1(VAR_2, VAR_3, VAR_6, VAR_8, VAR_7);


 if (FUNC_0(VAR_3))
  return 1;
 FUNC_5(VAR_2, VAR_0, VAR_1, VAR_5);
 return 0;
}
