
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker_pool {int flags; int workers; TYPE_1__* attrs; } ;
struct worker {struct worker_pool* pool; int node; int flags; int task; } ;
struct TYPE_2__ {int cpumask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct worker *VAR_3,
       struct worker_pool *VAR_4)
{
 FUNC_1(&VAR_2);





 FUNC_3(VAR_3->task, VAR_4->attrs->cpumask);






 if (VAR_4->flags & VAR_0)
  VAR_3->flags |= VAR_1;

 FUNC_0(&VAR_3->node, &VAR_4->workers);
 VAR_3->pool = VAR_4;

 FUNC_2(&VAR_2);
}
