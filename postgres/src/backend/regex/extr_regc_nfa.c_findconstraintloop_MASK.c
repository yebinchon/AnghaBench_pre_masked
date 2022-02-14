
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {struct state* tmp; struct arc* outs; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {struct state* to; struct arc* outchain; } ;
struct TYPE_2__ {int re; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nfa*,struct state*) ;
 scalar_t__ FUNC_4 (struct arc*) ;

__attribute__((used)) static int
FUNC_5(struct nfa *VAR_1, struct state *VAR_2)
{
 struct arc *VAR_3;


 if (FUNC_1(VAR_1->v->re))
 {
  FUNC_0(VAR_0);
  return 1;
 }

 if (VAR_2->tmp != ((void*)0))
 {

  if (VAR_2->tmp == VAR_2)
   return 0;

  FUNC_3(VAR_1, VAR_2);

  return 1;
 }
 for (VAR_3 = VAR_2->outs; VAR_3 != ((void*)0); VAR_3 = VAR_3->outchain)
 {
  if (FUNC_4(VAR_3))
  {
   struct state *VAR_4 = VAR_3->to;

   FUNC_2(VAR_4 != VAR_2);
   VAR_2->tmp = VAR_4;
   if (FUNC_5(VAR_1, VAR_4))
    return 1;
  }
 }





 VAR_2->tmp = VAR_2;
 return 0;
}
