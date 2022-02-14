
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ nouts; scalar_t__ nins; scalar_t__ no; struct state* tmp; } ;
struct nfa {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfa*,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_3(struct nfa *VAR_1,
    struct state *VAR_2,
    struct state *VAR_3)
{
 FUNC_1(VAR_2 != VAR_3);

 VAR_3->tmp = VAR_3;

 FUNC_2(VAR_1, VAR_2, VAR_2);
 if (FUNC_0())
  return;
 FUNC_1(VAR_2->nouts == 0 && VAR_3->nins == 0);
 FUNC_1(VAR_2->no != VAR_0 && VAR_3->no != VAR_0);

 VAR_3->tmp = ((void*)0);
 VAR_2->tmp = ((void*)0);
}
