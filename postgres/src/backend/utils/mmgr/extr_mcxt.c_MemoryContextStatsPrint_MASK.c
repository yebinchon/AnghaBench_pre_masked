
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* ident; } ;
typedef TYPE_1__* MemoryContext ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char const*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(MemoryContext VAR_1, void *VAR_2,
      const char *VAR_3)
{
 int VAR_4 = *(int *) VAR_2;
 const char *VAR_5 = VAR_1->name;
 const char *VAR_6 = VAR_1->ident;
 int VAR_7;






 if (VAR_6 && FUNC_3(VAR_5, "dynahash") == 0)
 {
  VAR_5 = VAR_6;
  VAR_6 = ((void*)0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_0(VAR_0, "  ");
 FUNC_0(VAR_0, "%s: %s", VAR_5, VAR_3);
 if (VAR_6)
 {






  int VAR_8 = FUNC_4(VAR_6);
  bool VAR_9 = 0;

  if (VAR_8 > 100)
  {
   VAR_8 = FUNC_2(VAR_6, VAR_8, 100);
   VAR_9 = 1;
  }
  FUNC_0(VAR_0, ": ");
  while (VAR_8-- > 0)
  {
   unsigned char VAR_10 = *VAR_6++;

   if (VAR_10 < ' ')
    VAR_10 = ' ';
   FUNC_1(VAR_10, VAR_0);
  }
  if (VAR_9)
   FUNC_0(VAR_0, "...");
 }
 FUNC_1('\n', VAR_0);
}
