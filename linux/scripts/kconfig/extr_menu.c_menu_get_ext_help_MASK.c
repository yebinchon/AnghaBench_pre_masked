
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ name; } ;
struct menu {struct symbol* sym; } ;
struct gstr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gstr*,struct symbol*,int *) ;
 char* FUNC_1 (struct menu*) ;
 scalar_t__ FUNC_2 (struct menu*) ;
 char* VAR_1 ;
 int FUNC_3 (struct gstr*,char*,char const*,...) ;

void FUNC_4(struct menu *VAR_2, struct gstr *VAR_3)
{
 struct symbol *VAR_4 = VAR_2->sym;
 const char *VAR_5 = VAR_1;

 if (FUNC_2(VAR_2)) {
  if (VAR_4->name)
   FUNC_3(VAR_3, "%s%s:\n\n", VAR_0, VAR_4->name);
  VAR_5 = FUNC_1(VAR_2);
 }
 FUNC_3(VAR_3, "%s\n", VAR_5);
 if (VAR_4)
  FUNC_0(VAR_3, VAR_4, ((void*)0));
}
