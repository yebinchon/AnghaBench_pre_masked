
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int wordchrs; int nfa; } ;
struct state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct state*,struct state*,int) ;

__attribute__((used)) static void
FUNC_2(struct vars *VAR_2,
  int VAR_3,
  struct state *VAR_4,
  struct state *VAR_5)
{
 FUNC_0(VAR_3 == VAR_0 || VAR_3 == VAR_1);
 FUNC_1(VAR_2->nfa, VAR_2->wordchrs, VAR_4, VAR_5, VAR_3);

}
