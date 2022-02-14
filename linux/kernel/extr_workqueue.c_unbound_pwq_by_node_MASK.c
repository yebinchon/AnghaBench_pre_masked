
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int * numa_pwq_tbl; struct pool_workqueue* dfl_pwq; } ;
struct pool_workqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct workqueue_struct*) ;
 struct pool_workqueue* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct pool_workqueue *FUNC_3(struct workqueue_struct *VAR_1,
        int VAR_2)
{
 FUNC_0(VAR_1);







 if (FUNC_2(VAR_2 == VAR_0))
  return VAR_1->dfl_pwq;

 return FUNC_1(VAR_1->numa_pwq_tbl[VAR_2]);
}
