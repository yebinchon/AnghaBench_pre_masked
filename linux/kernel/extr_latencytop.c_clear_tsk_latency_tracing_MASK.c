
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ latency_record_count; int latency_record; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct task_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0, VAR_2);
 FUNC_0(&VAR_1->latency_record, 0, sizeof(VAR_1->latency_record));
 VAR_1->latency_record_count = 0;
 FUNC_2(&VAR_0, VAR_2);
}
