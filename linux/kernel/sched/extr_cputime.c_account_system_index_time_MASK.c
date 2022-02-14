
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int stime; } ;
typedef enum cpu_usage_stat { ____Placeholder_cpu_usage_stat } cpu_usage_stat ;


 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int,int ) ;

void FUNC_3(struct task_struct *VAR_0,
          u64 VAR_1, enum cpu_usage_stat VAR_2)
{

 VAR_0->stime += VAR_1;
 FUNC_0(VAR_0, VAR_1);


 FUNC_2(VAR_0, VAR_2, VAR_1);


 FUNC_1(VAR_0);
}
