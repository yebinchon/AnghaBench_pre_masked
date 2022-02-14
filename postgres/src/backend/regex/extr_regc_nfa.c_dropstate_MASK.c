
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct arc* outs; struct arc* ins; } ;
struct nfa {int dummy; } ;
struct arc {int dummy; } ;


 int FUNC_0 (struct nfa*,struct arc*) ;
 int FUNC_1 (struct nfa*,struct state*) ;

__attribute__((used)) static void
FUNC_2(struct nfa *VAR_0,
    struct state *VAR_1)
{
 struct arc *VAR_2;

 while ((VAR_2 = VAR_1->ins) != ((void*)0))
  FUNC_0(VAR_0, VAR_2);
 while ((VAR_2 = VAR_1->outs) != ((void*)0))
  FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_1);
}
