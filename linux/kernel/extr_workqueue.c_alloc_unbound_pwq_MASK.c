
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct workqueue_attrs {int dummy; } ;
struct worker_pool {int node; } ;
struct pool_workqueue {int dummy; } ;


 int VAR_0 ;
 struct worker_pool* FUNC_0 (struct workqueue_attrs const*) ;
 int FUNC_1 (struct pool_workqueue*,struct workqueue_struct*,struct worker_pool*) ;
 struct pool_workqueue* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct worker_pool*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct pool_workqueue *FUNC_5(struct workqueue_struct *VAR_3,
     const struct workqueue_attrs *VAR_4)
{
 struct worker_pool *VAR_5;
 struct pool_workqueue *VAR_6;

 FUNC_3(&VAR_2);

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_1, VAR_0, VAR_5->node);
 if (!VAR_6) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_1(VAR_6, VAR_3, VAR_5);
 return VAR_6;
}
