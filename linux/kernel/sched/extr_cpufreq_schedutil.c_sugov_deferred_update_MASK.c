
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sugov_policy {int work_in_progress; int irq_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sugov_policy*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct sugov_policy *VAR_0, u64 VAR_1,
      unsigned int VAR_2)
{
 if (!FUNC_1(VAR_0, VAR_1, VAR_2))
  return;

 if (!VAR_0->work_in_progress) {
  VAR_0->work_in_progress = 1;
  FUNC_0(&VAR_0->irq_work);
 }
}
