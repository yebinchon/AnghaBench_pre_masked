
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_domain {int rcu; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

void FUNC_2(struct root_domain *VAR_1)
{
 if (!FUNC_0(&VAR_1->refcount))
  return;

 FUNC_1(&VAR_1->rcu, VAR_0);
}
