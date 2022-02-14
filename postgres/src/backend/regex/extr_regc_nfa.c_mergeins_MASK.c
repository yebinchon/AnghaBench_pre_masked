
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {struct arc* ins; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {int from; int co; int type; struct arc* inchain; } ;
struct TYPE_2__ {int re; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfa*,int ,int ,int ,struct state*) ;
 int FUNC_5 (struct arc**,int,int,int (*) (struct arc**,struct arc**)) ;
 int FUNC_6 (struct nfa*,struct state*) ;
 int FUNC_7 (struct arc**,struct arc**) ;

__attribute__((used)) static void
FUNC_8(struct nfa *VAR_2,
   struct state *VAR_3,
   struct arc **VAR_4,
   int VAR_5)
{
 struct arc *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_5 <= 0)
  return;





 if (FUNC_0(VAR_2->v->re))
 {
  FUNC_1(VAR_1);
  return;
 }


 FUNC_6(VAR_2, VAR_3);
 if (FUNC_2())
  return;

 FUNC_5(VAR_4, VAR_5, sizeof(struct arc *), FUNC_7);





 VAR_8 = 0;
 for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
 {
  switch (FUNC_7(&VAR_4[VAR_8], &VAR_4[VAR_7]))
  {
   case -1:

    VAR_4[++VAR_8] = VAR_4[VAR_7];
    break;
   case 0:

    break;
   default:

    FUNC_3(VAR_0);
  }
 }
 VAR_5 = VAR_8 + 1;






 VAR_7 = 0;
 VAR_6 = VAR_3->ins;
 while (VAR_7 < VAR_5 && VAR_6 != ((void*)0))
 {
  struct arc *VAR_9 = VAR_4[VAR_7];

  switch (FUNC_7(&VAR_9, &VAR_6))
  {
   case -1:

    FUNC_4(VAR_2, VAR_9->type, VAR_9->co, VAR_9->from, VAR_3);
    VAR_7++;
    break;
   case 0:

    VAR_7++;
    VAR_6 = VAR_6->inchain;
    break;
   case +1:

    VAR_6 = VAR_6->inchain;
    break;
   default:
    FUNC_3(VAR_0);
  }
 }
 while (VAR_7 < VAR_5)
 {

  struct arc *VAR_10 = VAR_4[VAR_7];

  FUNC_4(VAR_2, VAR_10->type, VAR_10->co, VAR_10->from, VAR_3);
  VAR_7++;
 }
}
