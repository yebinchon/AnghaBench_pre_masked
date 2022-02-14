
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assignment {scalar_t__ value; int variable; struct assignment* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct assignment* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,char*,scalar_t__) ;
 int FUNC_4 (int) ;

void
FUNC_5(char *VAR_5)
{
 struct assignment *VAR_6;

 FUNC_2(VAR_4, "{ ECPGset_desc_header(__LINE__, %s, (int)(", VAR_5);
 for (VAR_6 = VAR_3; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
 {
  if (VAR_6->value == VAR_0)
   FUNC_0(VAR_6->variable);
  else
   FUNC_3(VAR_2, VAR_1, "descriptor header item \"%d\" does not exist", VAR_6->value);
 }

 FUNC_1();
 FUNC_2(VAR_4, "));\n");
 FUNC_4(3);
}
