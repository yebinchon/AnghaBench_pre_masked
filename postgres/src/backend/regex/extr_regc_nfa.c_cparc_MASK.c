
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int dummy; } ;
struct nfa {int dummy; } ;
struct arc {int co; int type; } ;


 int FUNC_0 (struct nfa*,int ,int ,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_1(struct nfa *VAR_0,
   struct arc *VAR_1,
   struct state *VAR_2,
   struct state *VAR_3)
{
 FUNC_0(VAR_0, VAR_1->type, VAR_1->co, VAR_2, VAR_3);
}
