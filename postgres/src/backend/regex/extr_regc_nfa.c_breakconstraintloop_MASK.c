
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ nouts; struct arc* outs; struct state* tmp; struct state* next; } ;
struct nfa {int nstates; struct state* states; } ;
struct arc {struct state* to; struct arc* outchain; struct state* from; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfa*,struct state*,struct state*,struct state*,struct arc*,int *,int *,int ) ;
 int FUNC_3 (struct nfa*,struct arc*,struct state*,struct state*) ;
 int FUNC_4 (struct nfa*,struct arc*) ;
 int FUNC_5 (struct nfa*,struct state*) ;
 scalar_t__ FUNC_6 (struct arc*) ;
 struct state* FUNC_7 (struct nfa*) ;

__attribute__((used)) static void
FUNC_8(struct nfa *VAR_0, struct state *VAR_1)
{
 struct state *VAR_2;
 struct state *VAR_3;
 struct state *VAR_4;
 struct state *VAR_5;
 struct state *VAR_6;
 struct arc *VAR_7;
 struct arc *VAR_8;
 struct arc *VAR_9;







 VAR_7 = ((void*)0);
 VAR_2 = VAR_1;
 do
 {
  VAR_6 = VAR_2->tmp;
  FUNC_1(VAR_6 != VAR_2);
  if (VAR_7 == ((void*)0))
  {
   int VAR_10 = 0;

   for (VAR_8 = VAR_2->outs; VAR_8 != ((void*)0); VAR_8 = VAR_8->outchain)
   {
    if (VAR_8->to == VAR_6 && FUNC_6(VAR_8))
    {
     VAR_7 = VAR_8;
     VAR_10++;
    }
   }
   FUNC_1(VAR_10 > 0);
   if (VAR_10 > 1)
    VAR_7 = ((void*)0);
  }
  VAR_2 = VAR_6;
 } while (VAR_2 != VAR_1);

 if (VAR_7)
 {

  VAR_3 = VAR_7->from;
  VAR_4 = VAR_7->to;
  FUNC_1(VAR_4 == VAR_3->tmp);
 }
 else
 {

  VAR_3 = VAR_1;
  VAR_4 = VAR_1->tmp;
 }






 for (VAR_2 = VAR_0->states; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
  VAR_2->tmp = ((void*)0);




 VAR_5 = FUNC_7(VAR_0);
 if (VAR_5 == ((void*)0))
 {
  FUNC_1(FUNC_0());
  return;
 }

 FUNC_2(VAR_0, VAR_4, VAR_5, VAR_3, VAR_7,
       ((void*)0), ((void*)0), VAR_0->nstates);

 if (FUNC_0())
  return;






 if (VAR_5->nouts == 0)
 {
  FUNC_5(VAR_0, VAR_5);
  VAR_5 = ((void*)0);
 }





 for (VAR_8 = VAR_3->outs; VAR_8 != ((void*)0); VAR_8 = VAR_9)
 {
  VAR_9 = VAR_8->outchain;
  if (VAR_8->to == VAR_4 && FUNC_6(VAR_8))
  {
   if (VAR_5)
    FUNC_3(VAR_0, VAR_8, VAR_3, VAR_5);
   FUNC_4(VAR_0, VAR_8);
   if (FUNC_0())
    break;
  }
 }
}
