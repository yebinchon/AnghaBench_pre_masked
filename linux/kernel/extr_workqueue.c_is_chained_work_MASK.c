
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct worker {TYPE_1__* current_pwq; } ;
struct TYPE_2__ {struct workqueue_struct* wq; } ;


 struct worker* FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct workqueue_struct *VAR_0)
{
 struct worker *VAR_1;

 VAR_1 = FUNC_0();




 return VAR_1 && VAR_1->current_pwq->wq == VAR_0;
}
