
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct arc* outs; } ;
struct arc {struct arc* outchain; } ;


 scalar_t__ FUNC_0 (struct arc*) ;

__attribute__((used)) static int
FUNC_1(struct state *VAR_0)
{
 struct arc *VAR_1;

 for (VAR_1 = VAR_0->outs; VAR_1 != ((void*)0); VAR_1 = VAR_1->outchain)
 {
  if (FUNC_0(VAR_1))
   return 1;
 }
 return 0;
}
