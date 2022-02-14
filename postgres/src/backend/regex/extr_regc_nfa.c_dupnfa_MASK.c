
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct state* tmp; } ;
struct nfa {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfa*,struct state*) ;
 int FUNC_1 (struct nfa*,struct state*,struct state*) ;
 int FUNC_2 (struct nfa*,int ,int ,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_3(struct nfa *VAR_1,
    struct state *VAR_2,
    struct state *VAR_3,
    struct state *VAR_4,
    struct state *VAR_5)
{
 if (VAR_2 == VAR_3)
 {
  FUNC_2(VAR_1, VAR_0, 0, VAR_4, VAR_5);
  return;
 }

 VAR_3->tmp = VAR_5;
 FUNC_1(VAR_1, VAR_2, VAR_4);


 VAR_3->tmp = ((void*)0);
 FUNC_0(VAR_1, VAR_2);
}
