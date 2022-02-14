
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {struct arc* outs; int nouts; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {int to; int co; int type; struct arc* outchain; } ;
struct TYPE_2__ {int re; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nfa*,struct arc*,struct state*,int ) ;
 int FUNC_6 (struct nfa*,int ,int ,struct state*,int ) ;
 int FUNC_7 (struct nfa*,struct state*) ;
 int FUNC_8 (struct arc**,struct arc**) ;

__attribute__((used)) static void
FUNC_9(struct nfa *VAR_2,
   struct state *VAR_3,
   struct state *VAR_4)
{
 FUNC_4(VAR_3 != VAR_4);

 if (!FUNC_0(VAR_3->nouts, VAR_4->nouts))
 {

  struct arc *VAR_5;

  for (VAR_5 = VAR_3->outs; VAR_5 != ((void*)0); VAR_5 = VAR_5->outchain)
   FUNC_5(VAR_2, VAR_5, VAR_4, VAR_5->to);
 }
 else
 {





  struct arc *VAR_6;
  struct arc *VAR_7;





  if (FUNC_1(VAR_2->v->re))
  {
   FUNC_2(VAR_1);
   return;
  }

  FUNC_7(VAR_2, VAR_3);
  FUNC_7(VAR_2, VAR_4);
  if (FUNC_3())
   return;
  VAR_6 = VAR_3->outs;
  VAR_7 = VAR_4->outs;
  while (VAR_6 != ((void*)0) && VAR_7 != ((void*)0))
  {
   struct arc *VAR_8 = VAR_6;

   switch (FUNC_8(&VAR_6, &VAR_7))
   {
    case -1:

     VAR_6 = VAR_6->outchain;
     FUNC_6(VAR_2, VAR_8->type, VAR_8->co, VAR_4, VAR_8->to);
     break;
    case 0:

     VAR_6 = VAR_6->outchain;
     VAR_7 = VAR_7->outchain;
     break;
    case +1:

     VAR_7 = VAR_7->outchain;
     break;
    default:
     FUNC_4(VAR_0);
   }
  }
  while (VAR_6 != ((void*)0))
  {

   struct arc *VAR_9 = VAR_6;

   VAR_6 = VAR_6->outchain;
   FUNC_6(VAR_2, VAR_9->type, VAR_9->co, VAR_4, VAR_9->to);
  }
 }
}
