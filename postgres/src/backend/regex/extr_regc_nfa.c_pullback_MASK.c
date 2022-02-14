
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {scalar_t__ nins; scalar_t__ nouts; int flag; struct state* tmp; struct arc* outs; struct state* next; } ;
struct nfa {int * bos; TYPE_1__* pre; struct state* states; } ;
struct arc {char type; int co; int to; int from; struct arc* outchain; } ;
struct TYPE_2__ {struct arc* outs; } ;
typedef int FILE ;


 char VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfa*,struct state*) ;
 int FUNC_3 (struct nfa*,int *) ;
 int FUNC_4 (struct nfa*,struct arc*) ;
 int FUNC_5 (struct nfa*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct nfa*,struct arc*,struct state**) ;

__attribute__((used)) static void
FUNC_7(struct nfa *VAR_2,
   FILE *VAR_3)
{
 struct state *VAR_4;
 struct state *VAR_5;
 struct arc *VAR_6;
 struct arc *VAR_7;
 struct state *VAR_8;
 int VAR_9;


 do
 {
  VAR_9 = 0;
  for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0) && !FUNC_0(); VAR_4 = VAR_5)
  {
   VAR_5 = VAR_4->next;
   VAR_8 = ((void*)0);
   for (VAR_6 = VAR_4->outs; VAR_6 != ((void*)0) && !FUNC_0(); VAR_6 = VAR_7)
   {
    VAR_7 = VAR_6->outchain;
    if (VAR_6->type == '^' || VAR_6->type == VAR_0)
     if (FUNC_6(VAR_2, VAR_6, &VAR_8))
      VAR_9 = 1;
   }

   while (VAR_8 != ((void*)0))
   {
    struct state *VAR_10 = VAR_8->tmp;

    VAR_8->tmp = ((void*)0);
    VAR_8 = VAR_10;
   }

   if ((VAR_4->nins == 0 || VAR_4->nouts == 0) && !VAR_4->flag)
    FUNC_2(VAR_2, VAR_4);
  }
  if (VAR_9 && VAR_3 != ((void*)0))
   FUNC_3(VAR_2, VAR_3);
 } while (VAR_9 && !FUNC_0());
 if (FUNC_0())
  return;







 for (VAR_6 = VAR_2->pre->outs; VAR_6 != ((void*)0); VAR_6 = VAR_7)
 {
  VAR_7 = VAR_6->outchain;
  if (VAR_6->type == '^')
  {
   FUNC_1(VAR_6->co == 0 || VAR_6->co == 1);
   FUNC_5(VAR_2, VAR_1, VAR_2->bos[VAR_6->co], VAR_6->from, VAR_6->to);
   FUNC_4(VAR_2, VAR_6);
  }
 }
}
