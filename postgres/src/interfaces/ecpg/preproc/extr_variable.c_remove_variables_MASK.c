
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int brace_level; struct variable* next; struct variable* name; int type; } ;
struct cursor {struct arguments* argsresult; struct arguments* argsinsert; struct cursor* next; } ;
struct arguments {struct arguments* next; struct variable* variable; } ;


 int FUNC_0 (int ) ;
 struct variable* VAR_0 ;
 struct cursor* VAR_1 ;
 int FUNC_1 (struct variable*) ;

void
FUNC_2(int VAR_2)
{
 struct variable *VAR_3,
      *VAR_4;

 for (VAR_3 = VAR_4 = VAR_0; VAR_3;)
 {
  if (VAR_3->brace_level >= VAR_2)
  {

   struct cursor *VAR_5;

   for (VAR_5 = VAR_1; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   {
    struct arguments *VAR_6,
         *VAR_7;

    for (VAR_6 = VAR_7 = VAR_5->argsinsert; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
     if (VAR_3 == VAR_6->variable)
     {

      if (VAR_6 == VAR_5->argsinsert)
       VAR_5->argsinsert = VAR_6->next;
      else
       VAR_7->next = VAR_6->next;
     }
    }
    for (VAR_6 = VAR_7 = VAR_5->argsresult; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
     if (VAR_3 == VAR_6->variable)
     {

      if (VAR_6 == VAR_5->argsresult)
       VAR_5->argsresult = VAR_6->next;
      else
       VAR_7->next = VAR_6->next;
     }
    }
   }


   if (VAR_3 == VAR_0)
    VAR_4 = VAR_0 = VAR_3->next;
   else
    VAR_4->next = VAR_3->next;

   FUNC_0(VAR_3->type);
   FUNC_1(VAR_3->name);
   FUNC_1(VAR_3);
   if (VAR_4 == VAR_0)
    VAR_3 = VAR_0;
   else
    VAR_3 = VAR_4 ? VAR_4->next : ((void*)0);
  }
  else
  {
   VAR_4 = VAR_3;
   VAR_3 = VAR_4->next;
  }
 }
}
