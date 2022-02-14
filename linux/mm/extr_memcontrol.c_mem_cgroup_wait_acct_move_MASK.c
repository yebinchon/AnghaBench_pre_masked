
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup {int dummy; } ;
struct TYPE_2__ {scalar_t__ moving_task; int waitq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_5(struct mem_cgroup *VAR_4)
{
 if (VAR_2.moving_task && VAR_1 != VAR_2.moving_task) {
  if (FUNC_2(VAR_4)) {
   FUNC_0(VAR_3);
   FUNC_3(&VAR_2.waitq, &VAR_3, VAR_0);

   if (VAR_2.moving_task)
    FUNC_4();
   FUNC_1(&VAR_2.waitq, &VAR_3);
   return 1;
  }
 }
 return 0;
}
