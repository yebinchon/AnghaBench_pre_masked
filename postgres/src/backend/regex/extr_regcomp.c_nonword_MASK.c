
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int wordchrs; int cm; int nfa; } ;
struct state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ,struct state*,struct state*) ;
 int FUNC_2 (int ,int,int,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_3(struct vars *VAR_2,
  int VAR_3,
  struct state *VAR_4,
  struct state *VAR_5)
{
 int VAR_6 = (VAR_3 == VAR_0) ? '$' : '^';

 FUNC_0(VAR_3 == VAR_0 || VAR_3 == VAR_1);
 FUNC_2(VAR_2->nfa, VAR_6, 1, VAR_4, VAR_5);
 FUNC_2(VAR_2->nfa, VAR_6, 0, VAR_4, VAR_5);
 FUNC_1(VAR_2->nfa, VAR_2->cm, VAR_3, VAR_2->wordchrs, VAR_4, VAR_5);

}
