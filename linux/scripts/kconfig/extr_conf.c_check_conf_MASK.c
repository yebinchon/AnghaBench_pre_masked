
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {char* name; scalar_t__ type; } ;
struct menu {struct menu* next; struct menu* list; struct symbol* sym; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 (struct menu*) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (struct symbol*) ;
 scalar_t__ FUNC_7 (struct symbol*) ;
 int FUNC_8 (struct symbol*) ;
 scalar_t__ FUNC_9 (struct symbol*) ;
 scalar_t__ FUNC_10 (struct symbol*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_11(struct menu *VAR_7)
{
 struct symbol *VAR_8;
 struct menu *VAR_9;

 if (!FUNC_3(VAR_7))
  return;

 VAR_8 = VAR_7->sym;
 if (VAR_8 && !FUNC_8(VAR_8)) {
  if (FUNC_9(VAR_8) ||
      (FUNC_10(VAR_8) && FUNC_7(VAR_8) == VAR_6)) {
   if (VAR_3 == VAR_4) {
    if (VAR_8->name) {
     const char *VAR_10;

     if (VAR_8->type == VAR_1) {
      VAR_10 = FUNC_6(VAR_8);
      VAR_10 = FUNC_5(VAR_10);
      FUNC_4("%s%s=%s\n", VAR_0, VAR_8->name, VAR_10);
      FUNC_1((void *)VAR_10);
     } else {
      VAR_10 = FUNC_6(VAR_8);
      FUNC_4("%s%s=%s\n", VAR_0, VAR_8->name, VAR_10);
     }
    }
   } else {
    if (!VAR_2++)
     FUNC_4("*\n* Restart config...\n*\n");
    VAR_5 = FUNC_2(VAR_7);
    FUNC_0(VAR_5);
   }
  }
 }

 for (VAR_9 = VAR_7->list; VAR_9; VAR_9 = VAR_9->next)
  FUNC_11(VAR_9);
}
