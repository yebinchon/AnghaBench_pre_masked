
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_domain {int flags; struct sched_domain* child; struct sched_domain* parent; } ;
struct rq {struct sched_domain* sd; } ;
struct root_domain {int dummy; } ;


 int VAR_0 ;
 struct rq* FUNC_0 (int) ;
 int FUNC_1 (struct sched_domain*) ;
 int FUNC_2 (struct sched_domain*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sched_domain*,struct sched_domain*) ;
 int FUNC_5 (struct rq*,struct root_domain*) ;
 int FUNC_6 (struct sched_domain*,int) ;
 scalar_t__ FUNC_7 (struct sched_domain*) ;
 scalar_t__ FUNC_8 (struct sched_domain*,struct sched_domain*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct sched_domain *VAR_1, struct root_domain *VAR_2, int VAR_3)
{
 struct rq *VAR_4 = FUNC_0(VAR_3);
 struct sched_domain *VAR_5;


 for (VAR_5 = VAR_1; VAR_5; ) {
  struct sched_domain *VAR_6 = VAR_5->parent;
  if (!VAR_6)
   break;

  if (FUNC_8(VAR_5, VAR_6)) {
   VAR_5->parent = VAR_6->parent;
   if (VAR_6->parent)
    VAR_6->parent->child = VAR_5;





   if (VAR_6->flags & VAR_0)
    VAR_5->flags |= VAR_0;
   FUNC_1(VAR_6);
  } else
   VAR_5 = VAR_5->parent;
 }

 if (VAR_1 && FUNC_7(VAR_1)) {
  VAR_5 = VAR_1;
  VAR_1 = VAR_1->parent;
  FUNC_1(VAR_5);
  if (VAR_1)
   VAR_1->child = ((void*)0);
 }

 FUNC_6(VAR_1, VAR_3);

 FUNC_5(VAR_4, VAR_2);
 VAR_5 = VAR_4->sd;
 FUNC_4(VAR_4->sd, VAR_1);
 FUNC_3(VAR_3);
 FUNC_2(VAR_5);

 FUNC_9(VAR_3);
}
