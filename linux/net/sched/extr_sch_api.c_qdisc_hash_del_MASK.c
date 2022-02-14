
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {scalar_t__ parent; int flags; int hash; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct Qdisc *VAR_2)
{
 if ((VAR_2->parent != VAR_1) && !(VAR_2->flags & VAR_0)) {
  FUNC_0();
  FUNC_1(&VAR_2->hash);
 }
}
