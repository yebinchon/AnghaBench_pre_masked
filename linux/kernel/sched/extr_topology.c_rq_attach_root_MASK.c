
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {int lock; int cpu; struct root_domain* rd; } ;
struct root_domain {int rcu; int span; int refcount; int online; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct rq*) ;
 int FUNC_9 (struct rq*) ;

void FUNC_10(struct rq *VAR_2, struct root_domain *VAR_3)
{
 struct root_domain *VAR_4 = ((void*)0);
 unsigned long VAR_5;

 FUNC_6(&VAR_2->lock, VAR_5);

 if (VAR_2->rd) {
  VAR_4 = VAR_2->rd;

  if (FUNC_5(VAR_2->cpu, VAR_4->online))
   FUNC_8(VAR_2);

  FUNC_3(VAR_2->cpu, VAR_4->span);






  if (!FUNC_0(&VAR_4->refcount))
   VAR_4 = ((void*)0);
 }

 FUNC_1(&VAR_3->refcount);
 VAR_2->rd = VAR_3;

 FUNC_4(VAR_2->cpu, VAR_3->span);
 if (FUNC_5(VAR_2->cpu, VAR_0))
  FUNC_9(VAR_2);

 FUNC_7(&VAR_2->lock, VAR_5);

 if (VAR_4)
  FUNC_2(&VAR_4->rcu, VAR_1);
}
