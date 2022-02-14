
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int dummy; } ;
struct worker {int task; } ;


 struct worker* FUNC_0 (struct worker_pool*) ;
 scalar_t__ FUNC_1 (struct worker*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct worker_pool *VAR_0)
{
 struct worker *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1->task);
}
