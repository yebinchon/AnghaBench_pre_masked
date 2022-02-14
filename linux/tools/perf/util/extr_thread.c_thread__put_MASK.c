
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int node; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct thread*) ;

void FUNC_4(struct thread *VAR_0)
{
 if (VAR_0 && FUNC_2(&VAR_0->refcnt)) {
  if (!FUNC_1(&VAR_0->node))
   FUNC_0(&VAR_0->node);
  FUNC_3(VAR_0);
 }
}
