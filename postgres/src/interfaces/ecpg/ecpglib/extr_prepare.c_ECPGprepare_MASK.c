
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prepared_statement {int dummy; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct connection*,struct prepared_statement*,struct prepared_statement*) ;
 struct prepared_statement* FUNC_1 (char const*,struct connection*,struct prepared_statement**) ;
 struct connection* FUNC_2 (char const*) ;
 int FUNC_3 (struct connection*,char const*,int) ;
 int FUNC_4 (int,struct connection*,char const*,char const*) ;

bool
FUNC_5(int VAR_1, const char *VAR_2, const bool VAR_3,
   const char *VAR_4, const char *VAR_5)
{
 struct connection *VAR_6;
 struct prepared_statement *VAR_7,
      *VAR_8;

 (void) VAR_3;

 VAR_6 = FUNC_2(VAR_2);
 if (!FUNC_3(VAR_6, VAR_2, VAR_1))
  return 0;


 VAR_7 = FUNC_1(VAR_4, VAR_6, &VAR_8);
 if (VAR_7 && !FUNC_0(VAR_1, VAR_0, VAR_6, VAR_8, VAR_7))
  return 0;

 return FUNC_4(VAR_1, VAR_6, VAR_4, VAR_5);
}
