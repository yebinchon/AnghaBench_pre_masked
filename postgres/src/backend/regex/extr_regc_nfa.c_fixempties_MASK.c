
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int nouts; int nins; size_t no; scalar_t__ flag; struct state* next; struct arc* outs; struct arc* ins; struct state* tmp; } ;
struct nfa {int nstates; struct state* states; } ;
struct arc {scalar_t__ type; struct arc* outchain; struct arc* inchain; struct state* from; struct state* to; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct arc**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nfa*,struct state*) ;
 int FUNC_6 (struct nfa*,int *) ;
 struct state* FUNC_7 (struct nfa*,struct state*,struct state*,struct arc**) ;
 int FUNC_8 (struct nfa*,struct arc*) ;
 int FUNC_9 (struct state*) ;
 int FUNC_10 (struct nfa*,struct state*,struct arc**,int) ;
 int FUNC_11 (struct nfa*,struct state*,struct state*) ;
 int FUNC_12 (struct nfa*,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_13(struct nfa *VAR_2,
     FILE *VAR_3)
{
 struct state *VAR_4;
 struct state *VAR_5;
 struct state *VAR_6;
 struct arc *VAR_7;
 struct arc *VAR_8;
 int VAR_9;
 struct arc **VAR_10;
 struct arc **VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;






 for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0) && !FUNC_3(); VAR_4 = VAR_6)
 {
  VAR_6 = VAR_4->next;
  if (VAR_4->flag || VAR_4->nouts != 1)
   continue;
  VAR_7 = VAR_4->outs;
  FUNC_4(VAR_7 != ((void*)0) && VAR_7->outchain == ((void*)0));
  if (VAR_7->type != VAR_0)
   continue;
  if (VAR_4 != VAR_7->to)
   FUNC_11(VAR_2, VAR_4, VAR_7->to);
  FUNC_5(VAR_2, VAR_4);
 }





 for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0) && !FUNC_3(); VAR_4 = VAR_6)
 {
  VAR_6 = VAR_4->next;

  FUNC_4(VAR_4->tmp == ((void*)0));
  if (VAR_4->flag || VAR_4->nins != 1)
   continue;
  VAR_7 = VAR_4->ins;
  FUNC_4(VAR_7 != ((void*)0) && VAR_7->inchain == ((void*)0));
  if (VAR_7->type != VAR_0)
   continue;
  if (VAR_4 != VAR_7->from)
   FUNC_12(VAR_2, VAR_4, VAR_7->from);
  FUNC_5(VAR_2, VAR_4);
 }

 if (FUNC_3())
  return;
 VAR_10 = (struct arc **) FUNC_1(VAR_2->nstates * sizeof(struct arc *));
 if (VAR_10 == ((void*)0))
 {
  FUNC_2(VAR_1);
  return;
 }
 VAR_9 = 0;
 for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
 {
  VAR_10[VAR_4->no] = VAR_4->ins;
  VAR_9 += VAR_4->nins;
 }







 VAR_11 = (struct arc **) FUNC_1(VAR_9 * sizeof(struct arc *));
 if (VAR_11 == ((void*)0))
 {
  FUNC_2(VAR_1);
  FUNC_0(VAR_10);
  return;
 }


 for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0) && !FUNC_3(); VAR_4 = VAR_4->next)
 {

  if (!VAR_4->flag && !FUNC_9(VAR_4))
   continue;


  VAR_12 = 0;
  for (VAR_5 = FUNC_7(VAR_2, VAR_4, VAR_4, VAR_10); VAR_5 != VAR_4; VAR_5 = VAR_6)
  {

   for (VAR_7 = VAR_10[VAR_5->no]; VAR_7 != ((void*)0); VAR_7 = VAR_7->inchain)
   {
    if (VAR_7->type != VAR_0)
     VAR_11[VAR_12++] = VAR_7;
   }


   VAR_6 = VAR_5->tmp;
   VAR_5->tmp = ((void*)0);
  }
  VAR_4->tmp = ((void*)0);
  FUNC_4(VAR_12 <= VAR_9);


  VAR_13 = VAR_4->nins;


  FUNC_10(VAR_2, VAR_4, VAR_11, VAR_12);


  VAR_14 = VAR_4->nins - VAR_13;
  VAR_7 = VAR_4->ins;
  while (VAR_14-- > 0)
   VAR_7 = VAR_7->inchain;
  VAR_10[VAR_4->no] = VAR_7;
 }

 FUNC_0(VAR_11);
 FUNC_0(VAR_10);

 if (FUNC_3())
  return;




 for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
 {
  for (VAR_7 = VAR_4->outs; VAR_7 != ((void*)0); VAR_7 = VAR_8)
  {
   VAR_8 = VAR_7->outchain;
   if (VAR_7->type == VAR_0)
    FUNC_8(VAR_2, VAR_7);
  }
 }






 for (VAR_4 = VAR_2->states; VAR_4 != ((void*)0); VAR_4 = VAR_6)
 {
  VAR_6 = VAR_4->next;
  if ((VAR_4->nins == 0 || VAR_4->nouts == 0) && !VAR_4->flag)
   FUNC_5(VAR_2, VAR_4);
 }

 if (VAR_3 != ((void*)0))
  FUNC_6(VAR_2, VAR_3);
}
