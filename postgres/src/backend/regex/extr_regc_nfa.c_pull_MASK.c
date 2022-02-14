
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ nins; int nouts; struct state* tmp; struct arc* outs; struct arc* ins; scalar_t__ flag; } ;
struct nfa {int dummy; } ;
struct arc {struct state* from; struct state* to; struct arc* inchain; } ;




 scalar_t__ FUNC_0 () ;
 int VAR_0 ;

 int FUNC_1 (int) ;
 int FUNC_2 (struct arc*,struct arc*) ;
 int FUNC_3 (struct nfa*,struct state*,struct state*) ;
 int FUNC_4 (struct nfa*,struct arc*,struct state*,struct state*) ;
 int FUNC_5 (struct nfa*,struct arc*) ;
 int FUNC_6 (struct nfa*,struct state*,struct state*) ;
 struct state* FUNC_7 (struct nfa*) ;

__attribute__((used)) static int
FUNC_8(struct nfa *VAR_1,
  struct arc *VAR_2,
  struct state **VAR_3)
{
 struct state *VAR_4 = VAR_2->from;
 struct state *VAR_5 = VAR_2->to;
 struct arc *VAR_6;
 struct arc *VAR_7;
 struct state *VAR_8;

 FUNC_1(VAR_4 != VAR_5);
 if (VAR_4->flag)
  return 0;
 if (VAR_4->nins == 0)
 {
  FUNC_5(VAR_1, VAR_2);
  return 1;
 }






 if (VAR_4->nouts > 1)
 {
  VAR_8 = FUNC_7(VAR_1);
  if (FUNC_0())
   return 0;
  FUNC_3(VAR_1, VAR_4, VAR_8);
  FUNC_4(VAR_1, VAR_2, VAR_8, VAR_5);
  FUNC_5(VAR_1, VAR_2);
  if (FUNC_0())
   return 0;
  VAR_4 = VAR_8;
  VAR_2 = VAR_4->outs;
 }
 FUNC_1(VAR_4->nouts == 1);


 for (VAR_6 = VAR_4->ins; VAR_6 != ((void*)0) && !FUNC_0(); VAR_6 = VAR_7)
 {
  VAR_7 = VAR_6->inchain;
  switch (FUNC_2(VAR_2, VAR_6))
  {
   case 129:
    FUNC_5(VAR_1, VAR_6);
    break;
   case 128:
    break;
   case 130:

    for (VAR_8 = *VAR_3; VAR_8 != ((void*)0); VAR_8 = VAR_8->tmp)
    {
     FUNC_1(VAR_8->nins > 0 && VAR_8->nouts > 0);
     if (VAR_8->ins->from == VAR_6->from && VAR_8->outs->to == VAR_5)
      break;
    }
    if (VAR_8 == ((void*)0))
    {
     VAR_8 = FUNC_7(VAR_1);
     if (FUNC_0())
      return 0;
     VAR_8->tmp = *VAR_3;
     *VAR_3 = VAR_8;
    }
    FUNC_4(VAR_1, VAR_2, VAR_6->from, VAR_8);
    FUNC_4(VAR_1, VAR_6, VAR_8, VAR_5);
    FUNC_5(VAR_1, VAR_6);
    break;
   default:
    FUNC_1(VAR_0);
    break;
  }
 }


 FUNC_6(VAR_1, VAR_4, VAR_5);
 FUNC_5(VAR_1, VAR_2);

 return 1;
}
