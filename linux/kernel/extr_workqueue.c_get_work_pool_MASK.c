
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int dummy; } ;
struct work_struct {int data; } ;
struct pool_workqueue {struct worker_pool* pool; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int *) ;
 struct worker_pool* FUNC_2 (int *,int) ;
 int VAR_4 ;

__attribute__((used)) static struct worker_pool *FUNC_3(struct work_struct *VAR_5)
{
 unsigned long VAR_6 = FUNC_1(&VAR_5->data);
 int VAR_7;

 FUNC_0();

 if (VAR_6 & VAR_2)
  return ((struct pool_workqueue *)
   (VAR_6 & VAR_3))->pool;

 VAR_7 = VAR_6 >> VAR_1;
 if (VAR_7 == VAR_0)
  return ((void*)0);

 return FUNC_2(&VAR_4, VAR_7);
}
