
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct arc* outs; } ;
struct arc {scalar_t__ type; struct arc* outchain; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct state *VAR_1)
{
 struct arc *VAR_2;

 for (VAR_2 = VAR_1->outs; VAR_2 != ((void*)0); VAR_2 = VAR_2->outchain)
 {
  if (VAR_2->type != VAR_0)
   return 1;
 }
 return 0;
}
