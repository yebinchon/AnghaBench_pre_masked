
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct state {int no; int nins; struct state* tmp; struct arc* outs; TYPE_2__* ins; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {scalar_t__ type; scalar_t__ co; struct state* to; struct arc* outchain; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ co; struct state* from; } ;
struct TYPE_3__ {int re; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nfa*,struct arc*,struct state*,struct state*) ;
 int FUNC_7 (struct nfa*,struct state*) ;
 scalar_t__ FUNC_8 (struct state*) ;
 scalar_t__ FUNC_9 (struct arc*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int ,int) ;
 struct state* FUNC_12 (struct nfa*) ;

__attribute__((used)) static void
FUNC_13(struct nfa *VAR_2,
      struct state *VAR_3,
      struct state *VAR_4,
      struct state *VAR_5,
      struct arc *VAR_6,
      char *VAR_7,
      char *VAR_8,
      int VAR_9)
{
 char *VAR_10;
 struct arc *VAR_11;


 if (FUNC_4(VAR_2->v->re))
 {
  FUNC_2(VAR_1);
  return;
 }


 VAR_10 = VAR_7;
 if (VAR_10 == ((void*)0))
 {
  VAR_10 = (char *) FUNC_1(VAR_9 * sizeof(char));
  if (VAR_10 == ((void*)0))
  {
   FUNC_2(VAR_0);
   return;
  }

  if (VAR_8 != ((void*)0))
  {






   FUNC_10(VAR_10, VAR_8, VAR_9 * sizeof(char));
  }
  else
  {

   FUNC_11(VAR_10, 0, VAR_9 * sizeof(char));
   FUNC_5(VAR_5->no < VAR_9);
   VAR_10[VAR_5->no] = 1;
  }
 }


 FUNC_5(VAR_3->no < VAR_9);
 FUNC_5(VAR_10[VAR_3->no] == 0);
 VAR_10[VAR_3->no] = 1;
 for (VAR_11 = VAR_3->outs; VAR_11 != ((void*)0) && !FUNC_3(); VAR_11 = VAR_11->outchain)
 {
  struct state *VAR_12 = VAR_11->to;
  if (FUNC_9(VAR_11) && FUNC_8(VAR_12))
  {
   struct state *VAR_13;
   int VAR_14;
   struct arc *VAR_15;





   FUNC_5(VAR_12->no < VAR_9);
   if (VAR_10[VAR_12->no] != 0)
    continue;





   VAR_13 = ((void*)0);
   for (VAR_15 = VAR_4->outs; VAR_15 != ((void*)0); VAR_15 = VAR_15->outchain)
   {
    if (VAR_15->to->tmp == VAR_12)
    {
     VAR_13 = VAR_15->to;
     break;
    }
   }







   if (VAR_6 && VAR_11->type == VAR_6->type && VAR_11->co == VAR_6->co)
    VAR_14 = 1;
   else
   {
    struct state *VAR_16;

    VAR_14 = 0;
    for (VAR_16 = VAR_4; VAR_16->ins; VAR_16 = VAR_16->ins->from)
    {
     if (VAR_16->nins == 1 &&
      VAR_11->type == VAR_16->ins->type && VAR_11->co == VAR_16->ins->co)
     {
      VAR_14 = 1;
      break;
     }
    }
   }

   if (VAR_14)
   {






    if (VAR_13)
     FUNC_7(VAR_2, VAR_13);


    FUNC_13(VAR_2,
          VAR_12,
          VAR_4,
          VAR_5,
          VAR_6,
          VAR_10,
          VAR_8,
          VAR_9);

    FUNC_5(FUNC_3() || VAR_10[VAR_12->no] == 1);
   }
   else if (VAR_13)
   {




    FUNC_6(VAR_2, VAR_11, VAR_4, VAR_13);
   }
   else
   {



    struct state *VAR_17;

    VAR_17 = FUNC_12(VAR_2);
    if (VAR_17 == ((void*)0))
    {
     FUNC_5(FUNC_3());
     break;
    }

    VAR_17->tmp = VAR_12;

    FUNC_6(VAR_2, VAR_11, VAR_4, VAR_17);
   }
  }
  else
  {




   FUNC_6(VAR_2, VAR_11, VAR_4, VAR_12);
  }
 }
 if (VAR_7 == ((void*)0))
 {
  for (VAR_11 = VAR_4->outs; VAR_11 != ((void*)0) && !FUNC_3(); VAR_11 = VAR_11->outchain)
  {
   struct state *VAR_18 = VAR_11->to;
   struct state *VAR_19 = VAR_18->tmp;

   if (VAR_19 != ((void*)0))
   {
    VAR_18->tmp = ((void*)0);
    FUNC_13(VAR_2,
          VAR_19,
          VAR_18,
          VAR_5,
          VAR_6,
          ((void*)0),
          VAR_10,
          VAR_9);
   }
  }


  FUNC_0(VAR_10);
 }
}
