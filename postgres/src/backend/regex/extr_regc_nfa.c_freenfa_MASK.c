
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct state* next; scalar_t__ nouts; scalar_t__ nins; } ;
struct nfa {int nstates; int * post; int * pre; int * slast; struct state* free; struct state* states; } ;


 int FUNC_0 (struct nfa*) ;
 int FUNC_1 (struct nfa*,struct state*) ;
 int FUNC_2 (struct nfa*,struct state*) ;

__attribute__((used)) static void
FUNC_3(struct nfa *VAR_0)
{
 struct state *VAR_1;

 while ((VAR_1 = VAR_0->states) != ((void*)0))
 {
  VAR_1->nins = VAR_1->nouts = 0;
  FUNC_2(VAR_0, VAR_1);
 }
 while ((VAR_1 = VAR_0->free) != ((void*)0))
 {
  VAR_0->free = VAR_1->next;
  FUNC_1(VAR_0, VAR_1);
 }

 VAR_0->slast = ((void*)0);
 VAR_0->nstates = -1;
 VAR_0->pre = ((void*)0);
 VAR_0->post = ((void*)0);
 FUNC_0(VAR_0);
}
