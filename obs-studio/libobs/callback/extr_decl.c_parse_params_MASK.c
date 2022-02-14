
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decl_info {int dummy; } ;
struct cf_token {scalar_t__ type; } ;
struct cf_parser {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cf_parser*,char*,int *,int *) ;
 int FUNC_1 (struct cf_parser*) ;
 int FUNC_2 (struct cf_parser*,struct cf_token*) ;
 scalar_t__ FUNC_3 (struct cf_parser*,char*) ;
 int FUNC_4 (struct cf_parser*,char*,char*,int *) ;
 int FUNC_5 (struct cf_parser*,struct decl_info*) ;

__attribute__((used)) static void FUNC_6(struct cf_parser *VAR_3, struct decl_info *VAR_4)
{
 struct cf_token VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_3, &VAR_5))
  return;

 while (VAR_5.type == VAR_0) {
  VAR_6 = FUNC_5(VAR_3, VAR_4);
  if (VAR_6 == VAR_2)
   return;

  if (VAR_6 != VAR_1 && !FUNC_1(VAR_3))
   return;

  if (FUNC_3(VAR_3, ")"))
   break;
  else if (FUNC_4(VAR_3, ",", ",", ((void*)0)) == VAR_2)
   return;

  if (!FUNC_2(VAR_3, &VAR_5))
   return;
 }

 if (!FUNC_3(VAR_3, ")"))
  FUNC_0(VAR_3, ")", ((void*)0), ((void*)0));
}
