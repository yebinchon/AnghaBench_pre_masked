
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; int timer; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct neighbour*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct neighbour *VAR_0, unsigned long VAR_1)
{
 FUNC_2(VAR_0);
 if (FUNC_4(FUNC_1(&VAR_0->timer, VAR_1))) {
  FUNC_3("NEIGH: BUG, double timer add, state is %x\n",
         VAR_0->nud_state);
  FUNC_0();
 }
}
