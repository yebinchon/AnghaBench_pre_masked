
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rq_flags {int dummy; } ;
struct rq {int yld_count; } ;
struct TYPE_4__ {TYPE_1__* sched_class; } ;
struct TYPE_3__ {int (* yield_task ) (struct rq*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct rq*,struct rq_flags*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct rq*) ;
 struct rq* FUNC_6 (struct rq_flags*) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct rq_flags VAR_1;
 struct rq *VAR_2;

 VAR_2 = FUNC_6(&VAR_1);

 FUNC_3(VAR_2->yld_count);
 VAR_0->sched_class->yield_task(VAR_2);





 FUNC_0();
 FUNC_1(VAR_2, &VAR_1);
 FUNC_2();

 FUNC_4();
}
