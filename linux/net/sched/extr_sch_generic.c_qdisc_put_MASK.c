
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {int flags; int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct Qdisc *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->flags & VAR_0 ||
     !FUNC_1(&VAR_1->refcnt))
  return;

 FUNC_0(VAR_1);
}
