
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct arc* free; int nins; struct arc* ins; int nouts; struct arc* outs; } ;
struct nfa {int cm; int * parent; } ;
struct arc {scalar_t__ type; struct arc* freechain; struct arc* outchainRev; struct arc* outchain; struct arc* inchainRev; struct arc* inchain; struct state* to; struct state* from; } ;


 scalar_t__ FUNC_0 (struct arc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct arc*) ;

__attribute__((used)) static void
FUNC_3(struct nfa *VAR_0,
  struct arc *VAR_1)
{
 struct state *VAR_2 = VAR_1->from;
 struct state *VAR_3 = VAR_1->to;
 struct arc *VAR_4;

 FUNC_1(VAR_1->type != 0);


 if (FUNC_0(VAR_1) && VAR_0->parent == ((void*)0))
  FUNC_2(VAR_0->cm, VAR_1);


 FUNC_1(VAR_2 != ((void*)0));
 VAR_4 = VAR_1->outchainRev;
 if (VAR_4 == ((void*)0))
 {
  FUNC_1(VAR_2->outs == VAR_1);
  VAR_2->outs = VAR_1->outchain;
 }
 else
 {
  FUNC_1(VAR_4->outchain == VAR_1);
  VAR_4->outchain = VAR_1->outchain;
 }
 if (VAR_1->outchain != ((void*)0))
 {
  FUNC_1(VAR_1->outchain->outchainRev == VAR_1);
  VAR_1->outchain->outchainRev = VAR_4;
 }
 VAR_2->nouts--;


 FUNC_1(VAR_3 != ((void*)0));
 VAR_4 = VAR_1->inchainRev;
 if (VAR_4 == ((void*)0))
 {
  FUNC_1(VAR_3->ins == VAR_1);
  VAR_3->ins = VAR_1->inchain;
 }
 else
 {
  FUNC_1(VAR_4->inchain == VAR_1);
  VAR_4->inchain = VAR_1->inchain;
 }
 if (VAR_1->inchain != ((void*)0))
 {
  FUNC_1(VAR_1->inchain->inchainRev == VAR_1);
  VAR_1->inchain->inchainRev = VAR_4;
 }
 VAR_3->nins--;


 VAR_1->type = 0;
 VAR_1->from = ((void*)0);
 VAR_1->to = ((void*)0);
 VAR_1->inchain = ((void*)0);
 VAR_1->inchainRev = ((void*)0);
 VAR_1->outchain = ((void*)0);
 VAR_1->outchainRev = ((void*)0);
 VAR_1->freechain = VAR_2->free;
 VAR_2->free = VAR_1;
}
