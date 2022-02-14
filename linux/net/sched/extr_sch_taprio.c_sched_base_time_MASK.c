
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_gate_list {int base_time; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static ktime_t FUNC_1(const struct sched_gate_list *VAR_1)
{
 if (!VAR_1)
  return VAR_0;

 return FUNC_0(VAR_1->base_time);
}
