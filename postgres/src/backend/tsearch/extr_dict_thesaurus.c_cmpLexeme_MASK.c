
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lexeme; } ;
typedef TYPE_1__ TheLexeme ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const TheLexeme *VAR_0, const TheLexeme *VAR_1)
{
 if (VAR_0->lexeme == ((void*)0))
 {
  if (VAR_1->lexeme == ((void*)0))
   return 0;
  else
   return 1;
 }
 else if (VAR_1->lexeme == ((void*)0))
  return -1;

 return FUNC_0(VAR_0->lexeme, VAR_1->lexeme);
}
