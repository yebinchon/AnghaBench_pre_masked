
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {struct arc* outs; struct state* tmp; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {struct state* to; struct arc* outchain; } ;
struct TYPE_2__ {int re; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nfa *VAR_1,
     struct state *VAR_2,
     struct state *VAR_3,
     struct state *VAR_4)
{
 struct arc *VAR_5;


 if (FUNC_1(VAR_1->v->re))
 {
  FUNC_0(VAR_0);
  return;
 }

 if (VAR_2->tmp != VAR_3)
  return;
 VAR_2->tmp = VAR_4;

 for (VAR_5 = VAR_2->outs; VAR_5 != ((void*)0); VAR_5 = VAR_5->outchain)
  FUNC_2(VAR_1, VAR_5->to, VAR_3, VAR_4);
}
