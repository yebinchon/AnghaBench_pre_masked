
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int * numa_pwq_tbl; int mutex; } ;
struct pool_workqueue {int dummy; } ;


 int FUNC_0 (struct pool_workqueue*) ;
 int FUNC_1 (int *) ;
 struct pool_workqueue* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct pool_workqueue*) ;
 int VAR_0 ;

__attribute__((used)) static struct pool_workqueue *FUNC_4(struct workqueue_struct *VAR_1,
         int VAR_2,
         struct pool_workqueue *VAR_3)
{
 struct pool_workqueue *VAR_4;

 FUNC_1(&VAR_0);
 FUNC_1(&VAR_1->mutex);


 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_1->numa_pwq_tbl[VAR_2]);
 FUNC_3(VAR_1->numa_pwq_tbl[VAR_2], VAR_3);
 return VAR_4;
}
