
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_data {int delay_work; int work; int cpu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct srcu_data *VAR_2,
           unsigned long VAR_3)
{
 if (!VAR_3) {
  FUNC_0(VAR_2->cpu, VAR_1, &VAR_2->work);
  return;
 }

 FUNC_1(&VAR_2->delay_work, VAR_0 + VAR_3);
}
