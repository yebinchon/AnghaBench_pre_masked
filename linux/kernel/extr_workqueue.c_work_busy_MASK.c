
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int lock; } ;
struct work_struct {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct worker_pool*,struct work_struct*) ;
 struct worker_pool* FUNC_1 (struct work_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct work_struct*) ;

unsigned int FUNC_7(struct work_struct *VAR_2)
{
 struct worker_pool *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5 = 0;

 if (FUNC_6(VAR_2))
  VAR_5 |= VAR_0;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_4(&VAR_3->lock, VAR_4);
  if (FUNC_0(VAR_3, VAR_2))
   VAR_5 |= VAR_1;
  FUNC_5(&VAR_3->lock, VAR_4);
 }
 FUNC_3();

 return VAR_5;
}
