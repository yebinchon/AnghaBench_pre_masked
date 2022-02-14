
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_gate_list {int base_time; int cycle_time_extension; scalar_t__ cycle_time; } ;
struct sched_entry {scalar_t__ interval; } ;
typedef scalar_t__ s32 ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (struct sched_gate_list*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static ktime_t FUNC_5(struct sched_gate_list *VAR_0,
         struct sched_gate_list *VAR_1,
         struct sched_entry *VAR_2,
         ktime_t VAR_3)
{
 s32 VAR_4 = FUNC_0(VAR_0, VAR_3);
 ktime_t VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_0->cycle_time - VAR_4);
 VAR_5 = FUNC_2(VAR_3, VAR_2->interval);
 VAR_6 = FUNC_1(VAR_7, VAR_0->cycle_time_extension);

 if (FUNC_4(VAR_5, VAR_7))
  return VAR_5;
 else if (VAR_1 && VAR_1 != VAR_0 &&
   FUNC_3(VAR_1->base_time, VAR_7) &&
   FUNC_4(VAR_1->base_time, VAR_6))
  return VAR_1->base_time;
 else
  return VAR_7;
}
