
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int cm; } ;
struct state {struct state* tmp; struct arc* ins; struct arc* outs; } ;
struct nfa {scalar_t__* bos; struct state* pre; } ;
struct arc {scalar_t__ type; scalar_t__ co; struct state* from; struct arc* inchain; struct state* to; struct arc* outchain; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfa*,struct state*,struct state*) ;
 int FUNC_3 (struct nfa*,struct arc*,struct state*,struct state*) ;
 int FUNC_4 (struct nfa*,struct arc*) ;
 int FUNC_5 (struct nfa*,scalar_t__,scalar_t__,struct state*,struct state*) ;
 struct state* FUNC_6 (struct nfa*) ;
 int FUNC_7 (struct nfa*,int ,scalar_t__,int ,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_8(struct vars *VAR_2,
     struct nfa *VAR_3)
{
 struct arc *VAR_4;
 struct arc *VAR_5;
 struct state *VAR_6 = VAR_3->pre;
 struct state *VAR_7;
 struct state *VAR_8;
 struct state *VAR_9;


 for (VAR_4 = VAR_6->outs; VAR_4 != ((void*)0); VAR_4 = VAR_4->outchain)
 {
  FUNC_1(VAR_4->type == VAR_1);
  if (VAR_4->co != VAR_3->bos[0] && VAR_4->co != VAR_3->bos[1])
   break;
 }
 if (VAR_4 != ((void*)0))
 {

  FUNC_7(VAR_3, VAR_2->cm, VAR_1, VAR_0, VAR_6, VAR_6);


  FUNC_5(VAR_3, VAR_1, VAR_3->bos[0], VAR_6, VAR_6);
  FUNC_5(VAR_3, VAR_1, VAR_3->bos[1], VAR_6, VAR_6);
 }
 VAR_9 = ((void*)0);
 for (VAR_4 = VAR_6->outs; VAR_4 != ((void*)0); VAR_4 = VAR_4->outchain)
 {
  VAR_7 = VAR_4->to;
  for (VAR_5 = VAR_7->ins; VAR_5 != ((void*)0); VAR_5 = VAR_5->inchain)
  {
   if (VAR_5->from != VAR_6)
    break;
  }







  if (VAR_5 != ((void*)0) && VAR_7->tmp == ((void*)0))
  {
   VAR_7->tmp = (VAR_9 != ((void*)0)) ? VAR_9 : VAR_7;
   VAR_9 = VAR_7;
  }
 }


 for (VAR_7 = VAR_9; VAR_7 != ((void*)0); VAR_7 = VAR_8)
 {
  VAR_8 = FUNC_6(VAR_3);
  FUNC_0();
  FUNC_2(VAR_3, VAR_7, VAR_8);
  FUNC_0();
  for (VAR_4 = VAR_7->ins; VAR_4 != ((void*)0); VAR_4 = VAR_5)
  {
   VAR_5 = VAR_4->inchain;
   if (VAR_4->from != VAR_6)
   {
    FUNC_3(VAR_3, VAR_4, VAR_4->from, VAR_8);
    FUNC_4(VAR_3, VAR_4);
   }
  }
  VAR_8 = (VAR_7->tmp != VAR_7) ? VAR_7->tmp : ((void*)0);
  VAR_7->tmp = ((void*)0);
 }
}
