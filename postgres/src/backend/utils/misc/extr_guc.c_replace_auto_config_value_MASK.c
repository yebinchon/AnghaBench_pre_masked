
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ignore; int applied; struct TYPE_7__* next; scalar_t__ sourceline; struct TYPE_7__* filename; int * errmsg; struct TYPE_7__* value; struct TYPE_7__* name; } ;
typedef TYPE_1__ ConfigVariable ;


 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(ConfigVariable **VAR_0, ConfigVariable **VAR_1,
        const char *VAR_2, const char *VAR_3)
{
 ConfigVariable *VAR_4,
      *VAR_5,
      *VAR_6 = ((void*)0);






 for (VAR_4 = *VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_5)
 {
  VAR_5 = VAR_4->next;
  if (FUNC_0(VAR_4->name, VAR_2) == 0)
  {

   if (VAR_6)
    VAR_6->next = VAR_5;
   else
    *VAR_0 = VAR_5;
   if (VAR_5 == ((void*)0))
    *VAR_1 = VAR_6;

   FUNC_2(VAR_4->name);
   FUNC_2(VAR_4->value);
   FUNC_2(VAR_4->filename);
   FUNC_2(VAR_4);
  }
  else
   VAR_6 = VAR_4;
 }


 if (VAR_3 == ((void*)0))
  return;


 VAR_4 = FUNC_1(sizeof *VAR_4);
 VAR_4->name = FUNC_3(VAR_2);
 VAR_4->value = FUNC_3(VAR_3);
 VAR_4->errmsg = ((void*)0);
 VAR_4->filename = FUNC_3("");
 VAR_4->sourceline = 0;
 VAR_4->ignore = 0;
 VAR_4->applied = 0;
 VAR_4->next = ((void*)0);

 if (*VAR_0 == ((void*)0))
  *VAR_0 = VAR_4;
 else
  (*VAR_1)->next = VAR_4;
 *VAR_1 = VAR_4;
}
