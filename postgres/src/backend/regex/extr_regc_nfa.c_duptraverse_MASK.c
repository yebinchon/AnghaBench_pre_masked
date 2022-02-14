
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
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nfa*,struct arc*,struct state*,struct state*) ;
 struct state* FUNC_5 (struct nfa*) ;

__attribute__((used)) static void
FUNC_6(struct nfa *VAR_1,
   struct state *VAR_2,
   struct state *VAR_3)
{
 struct arc *VAR_4;


 if (FUNC_2(VAR_1->v->re))
 {
  FUNC_0(VAR_0);
  return;
 }

 if (VAR_2->tmp != ((void*)0))
  return;

 VAR_2->tmp = (VAR_3 == ((void*)0)) ? FUNC_5(VAR_1) : VAR_3;
 if (VAR_2->tmp == ((void*)0))
 {
  FUNC_3(FUNC_1());
  return;
 }

 for (VAR_4 = VAR_2->outs; VAR_4 != ((void*)0) && !FUNC_1(); VAR_4 = VAR_4->outchain)
 {
  FUNC_6(VAR_1, VAR_4->to, (struct state *) ((void*)0));
  if (FUNC_1())
   break;
  FUNC_3(VAR_4->to->tmp != ((void*)0));
  FUNC_4(VAR_1, VAR_4, VAR_2->tmp, VAR_4->to->tmp);
 }
}
