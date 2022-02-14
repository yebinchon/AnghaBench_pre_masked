
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {scalar_t__ curr; scalar_t__ idle; int wake_list; scalar_t__ nr_running; } ;


 struct rq* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

int FUNC_2(int VAR_0)
{
 struct rq *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->curr != VAR_1->idle)
  return 0;

 if (VAR_1->nr_running)
  return 0;






 return 1;
}
