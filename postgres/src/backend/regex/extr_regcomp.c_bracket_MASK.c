
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int cm; int nfa; } ;
struct state {int dummy; } ;


 char VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vars*,struct state*,struct state*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct vars *VAR_1,
  struct state *VAR_2,
  struct state *VAR_3)
{
 FUNC_3(FUNC_2('['));
 FUNC_1();
 while (!FUNC_2(']') && !FUNC_2(VAR_0))
  FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_3(FUNC_2(']') || FUNC_0());
 FUNC_5(VAR_1->nfa, VAR_1->cm);
}
