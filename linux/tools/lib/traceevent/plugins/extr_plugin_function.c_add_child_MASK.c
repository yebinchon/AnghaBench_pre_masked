
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_stack {int size; char** stack; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (char**,int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct func_stack *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return;

 if (VAR_3 < VAR_1->size)
  FUNC_0(VAR_1->stack[VAR_3]);
 else {
  char **VAR_5;

  VAR_5 = FUNC_1(VAR_1->stack, sizeof(char *) *
         (VAR_1->size + VAR_0));
  if (!VAR_5) {
   FUNC_3("could not allocate plugin memory\n");
   return;
  }

  VAR_1->stack = VAR_5;

  for (VAR_4 = VAR_1->size; VAR_4 < VAR_1->size + VAR_0; VAR_4++)
   VAR_1->stack[VAR_4] = ((void*)0);
  VAR_1->size += VAR_0;
 }

 VAR_1->stack[VAR_3] = FUNC_2(VAR_2);
}
