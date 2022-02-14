
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {struct arc* ins; int nins; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {int from; int co; int type; struct arc* inchain; } ;
struct TYPE_2__ {int re; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nfa*,struct arc*,int ,struct state*) ;
 int FUNC_6 (struct nfa*,int ,int ,int ,struct state*) ;
 int FUNC_7 (struct nfa*,struct state*) ;
 int FUNC_8 (struct arc**,struct arc**) ;

__attribute__((used)) static void
FUNC_9(struct nfa *VAR_2,
  struct state *VAR_3,
  struct state *VAR_4)
{
 FUNC_4(VAR_3 != VAR_4);

 if (!FUNC_0(VAR_3->nins, VAR_4->nins))
 {

  struct arc *VAR_5;

  for (VAR_5 = VAR_3->ins; VAR_5 != ((void*)0); VAR_5 = VAR_5->inchain)
   FUNC_5(VAR_2, VAR_5, VAR_5->from, VAR_4);
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
  VAR_6 = VAR_3->ins;
  VAR_7 = VAR_4->ins;
  while (VAR_6 != ((void*)0) && VAR_7 != ((void*)0))
  {
   struct arc *VAR_8 = VAR_6;

   switch (FUNC_8(&VAR_6, &VAR_7))
   {
    case -1:

     VAR_6 = VAR_6->inchain;
     FUNC_6(VAR_2, VAR_8->type, VAR_8->co, VAR_8->from, VAR_4);
     break;
    case 0:

     VAR_6 = VAR_6->inchain;
     VAR_7 = VAR_7->inchain;
     break;
    case +1:

     VAR_7 = VAR_7->inchain;
     break;
    default:
     FUNC_4(VAR_0);
   }
  }
  while (VAR_6 != ((void*)0))
  {

   struct arc *VAR_9 = VAR_6;

   VAR_6 = VAR_6->inchain;
   FUNC_6(VAR_2, VAR_9->type, VAR_9->co, VAR_9->from, VAR_4);
  }
 }
}
