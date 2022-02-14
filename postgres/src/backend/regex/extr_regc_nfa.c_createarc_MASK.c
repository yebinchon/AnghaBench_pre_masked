
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int nins; int nouts; struct arc* outs; struct arc* ins; } ;
struct nfa {int cm; int * parent; } ;
struct arc {int type; struct arc* outchainRev; struct arc* outchain; struct arc* inchainRev; struct arc* inchain; struct state* from; struct state* to; int co; } ;
typedef int color ;


 scalar_t__ FUNC_0 (struct arc*) ;
 scalar_t__ FUNC_1 () ;
 struct arc* FUNC_2 (struct nfa*,struct state*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct arc*) ;

__attribute__((used)) static void
FUNC_5(struct nfa *VAR_0,
    int VAR_1,
    color VAR_2,
    struct state *VAR_3,
    struct state *VAR_4)
{
 struct arc *VAR_5;


 VAR_5 = FUNC_2(VAR_0, VAR_3);
 if (FUNC_1())
  return;
 FUNC_3(VAR_5 != ((void*)0));

 VAR_5->type = VAR_1;
 VAR_5->co = VAR_2;
 VAR_5->to = VAR_4;
 VAR_5->from = VAR_3;






 VAR_5->inchain = VAR_4->ins;
 VAR_5->inchainRev = ((void*)0);
 if (VAR_4->ins)
  VAR_4->ins->inchainRev = VAR_5;
 VAR_4->ins = VAR_5;
 VAR_5->outchain = VAR_3->outs;
 VAR_5->outchainRev = ((void*)0);
 if (VAR_3->outs)
  VAR_3->outs->outchainRev = VAR_5;
 VAR_3->outs = VAR_5;

 VAR_3->nouts++;
 VAR_4->nins++;

 if (FUNC_0(VAR_5) && VAR_0->parent == ((void*)0))
  FUNC_4(VAR_0->cm, VAR_5);
}
