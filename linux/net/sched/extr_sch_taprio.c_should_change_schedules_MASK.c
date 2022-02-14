
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_gate_list {int cycle_time_extension; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sched_gate_list const*) ;

__attribute__((used)) static bool FUNC_3(const struct sched_gate_list *VAR_0,
        const struct sched_gate_list *VAR_1,
        ktime_t VAR_2)
{
 ktime_t VAR_3, VAR_4;

 if (!VAR_0)
  return 0;

 VAR_3 = FUNC_2(VAR_0);




 if (FUNC_1(VAR_3, VAR_2) <= 0)
  return 1;






 VAR_4 = FUNC_0(VAR_2, VAR_1->cycle_time_extension);





 if (FUNC_1(VAR_3, VAR_4) <= 0)
  return 1;

 return 0;
}
