
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_gate_list {int cycle_time; int base_time; } ;
typedef int s32 ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct sched_gate_list *VAR_0, ktime_t VAR_1)
{
 ktime_t VAR_2;
 s32 VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0->base_time);
 FUNC_0(VAR_2, VAR_0->cycle_time, &VAR_3);

 return VAR_3;
}
