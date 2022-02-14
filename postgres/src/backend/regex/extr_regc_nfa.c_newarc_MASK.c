
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {scalar_t__ nouts; scalar_t__ nins; struct arc* ins; struct arc* outs; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {scalar_t__ co; int type; struct state* from; struct arc* inchain; struct state* to; struct arc* outchain; } ;
typedef scalar_t__ color ;
struct TYPE_2__ {int re; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nfa*,int,scalar_t__,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_4(struct nfa *VAR_1,
    int VAR_2,
    color VAR_3,
    struct state *VAR_4,
    struct state *VAR_5)
{
 struct arc *VAR_6;

 FUNC_2(VAR_4 != ((void*)0) && VAR_5 != ((void*)0));






 if (FUNC_0(VAR_1->v->re))
 {
  FUNC_1(VAR_0);
  return;
 }


 if (VAR_4->nouts <= VAR_5->nins)
 {
  for (VAR_6 = VAR_4->outs; VAR_6 != ((void*)0); VAR_6 = VAR_6->outchain)
   if (VAR_6->to == VAR_5 && VAR_6->co == VAR_3 && VAR_6->type == VAR_2)
    return;
 }
 else
 {
  for (VAR_6 = VAR_5->ins; VAR_6 != ((void*)0); VAR_6 = VAR_6->inchain)
   if (VAR_6->from == VAR_4 && VAR_6->co == VAR_3 && VAR_6->type == VAR_2)
    return;
 }


 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
