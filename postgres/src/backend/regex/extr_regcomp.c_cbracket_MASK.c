
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int cflags; int nfa; int cm; int nlcolor; } ;
struct state {scalar_t__ nouts; scalar_t__ nins; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vars*,struct state*,struct state*) ;
 int FUNC_3 (int ,int ,int ,struct state*,struct state*,struct state*) ;
 int FUNC_4 (int ,struct state*) ;
 int FUNC_5 (int ,struct state*) ;
 int FUNC_6 (int ,int ,int ,struct state*,struct state*) ;
 struct state* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct vars *VAR_2,
   struct state *VAR_3,
   struct state *VAR_4)
{
 struct state *VAR_5 = FUNC_7(VAR_2->nfa);
 struct state *VAR_6 = FUNC_7(VAR_2->nfa);

 FUNC_0();
 FUNC_2(VAR_2, VAR_5, VAR_6);
 if (VAR_2->cflags & VAR_1)
  FUNC_6(VAR_2->nfa, VAR_0, VAR_2->nlcolor, VAR_5, VAR_6);
 FUNC_0();

 FUNC_1(VAR_3->nouts == 0);





 FUNC_3(VAR_2->nfa, VAR_2->cm, VAR_0, VAR_5, VAR_3, VAR_4);
 FUNC_0();
 FUNC_4(VAR_2->nfa, VAR_5);
 FUNC_1(VAR_6->nins == 0);
 FUNC_5(VAR_2->nfa, VAR_6);
}
