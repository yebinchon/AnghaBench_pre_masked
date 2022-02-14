
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {struct state* wordchrs; int * savenow; int nfa; } ;
struct state {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct vars*,struct state*,struct state*) ;
 int FUNC_6 (struct vars*) ;
 struct state* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct vars *VAR_0)
{
 struct state *VAR_1;
 struct state *VAR_2;

 if (VAR_0->wordchrs != ((void*)0))
 {
  FUNC_1();
  return;
 }

 VAR_1 = FUNC_7(VAR_0->nfa);
 VAR_2 = FUNC_7(VAR_0->nfa);
 FUNC_2();

 FUNC_6(VAR_0);
 FUNC_1();
 FUNC_4(VAR_0->savenow != ((void*)0) && FUNC_3('['));
 FUNC_5(VAR_0, VAR_1, VAR_2);
 FUNC_4((VAR_0->savenow != ((void*)0) && FUNC_3(']')) || FUNC_0());
 FUNC_1();
 FUNC_2();
 VAR_0->wordchrs = VAR_1;
}
