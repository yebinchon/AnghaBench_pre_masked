
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ nouts; scalar_t__ nins; int flag; int * tmp; struct state* next; struct arc* outs; } ;
struct nfa {struct state* states; } ;
struct arc {struct state* to; struct arc* outchain; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfa*,struct state*) ;
 int FUNC_3 (struct nfa*,int *) ;
 scalar_t__ FUNC_4 (struct nfa*,struct state*) ;
 int FUNC_5 (struct nfa*,struct arc*) ;
 scalar_t__ FUNC_6 (struct arc*) ;

__attribute__((used)) static void
FUNC_7(struct nfa *VAR_0,
       FILE *VAR_1)
{
 struct state *VAR_2;
 struct state *VAR_3;
 struct arc *VAR_4;
 struct arc *VAR_5;
 int VAR_6;







 VAR_6 = 0;
 for (VAR_2 = VAR_0->states; VAR_2 != ((void*)0) && !FUNC_0(); VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->next;

  FUNC_1(VAR_2->tmp == ((void*)0));
  for (VAR_4 = VAR_2->outs; VAR_4 != ((void*)0) && !FUNC_0(); VAR_4 = VAR_5)
  {
   VAR_5 = VAR_4->outchain;
   if (FUNC_6(VAR_4))
   {
    if (VAR_4->to == VAR_2)
     FUNC_5(VAR_0, VAR_4);
    else
     VAR_6 = 1;
   }
  }

  if (VAR_2->nouts == 0 && !VAR_2->flag)
   FUNC_2(VAR_0, VAR_2);
 }


 if (FUNC_0() || !VAR_6)
  return;
restart:
 for (VAR_2 = VAR_0->states; VAR_2 != ((void*)0) && !FUNC_0(); VAR_2 = VAR_2->next)
 {
  if (FUNC_4(VAR_0, VAR_2))
   goto restart;
 }

 if (FUNC_0())
  return;
 for (VAR_2 = VAR_0->states; VAR_2 != ((void*)0); VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->next;
  VAR_2->tmp = ((void*)0);
  if ((VAR_2->nins == 0 || VAR_2->nouts == 0) && !VAR_2->flag)
   FUNC_2(VAR_0, VAR_2);
 }

 if (VAR_1 != ((void*)0))
  FUNC_3(VAR_0, VAR_1);
}
