
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {scalar_t__ nouts; scalar_t__ nins; scalar_t__ no; struct state* tmp; struct arc* outs; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {struct state* to; } ;
struct TYPE_2__ {int re; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nfa*,struct arc*) ;
 int FUNC_5 (struct nfa*,struct state*) ;

__attribute__((used)) static void
FUNC_6(struct nfa *VAR_2,
   struct state *VAR_3,
   struct state *VAR_4)
{
 struct arc *VAR_5;
 struct state *VAR_6;


 if (FUNC_2(VAR_2->v->re))
 {
  FUNC_0(VAR_1);
  return;
 }

 if (VAR_4->nouts == 0)
  return;
 if (VAR_4->tmp != ((void*)0))
  return;

 VAR_4->tmp = VAR_4;

 while ((VAR_5 = VAR_4->outs) != ((void*)0))
 {
  VAR_6 = VAR_5->to;
  FUNC_6(VAR_2, VAR_3, VAR_6);
  if (FUNC_1())
   return;
  FUNC_3(VAR_6->nouts == 0 || VAR_6->tmp != ((void*)0));
  FUNC_4(VAR_2, VAR_5);
  if (VAR_6->nins == 0 && VAR_6->tmp == ((void*)0))
  {
   FUNC_3(VAR_6->nouts == 0);
   FUNC_5(VAR_2, VAR_6);
  }
 }

 FUNC_3(VAR_4->no != VAR_0);
 FUNC_3(VAR_4 == VAR_3 || VAR_4->nins != 0);
 FUNC_3(VAR_4->nouts == 0);

 VAR_4->tmp = ((void*)0);
}
