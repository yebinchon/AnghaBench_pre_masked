
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; int timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct neighbour*) ;

__attribute__((used)) static int FUNC_2(struct neighbour *VAR_1)
{
 if ((VAR_1->nud_state & VAR_0) &&
     FUNC_0(&VAR_1->timer)) {
  FUNC_1(VAR_1);
  return 1;
 }
 return 0;
}
