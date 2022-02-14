
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {struct per_pid* all_data; } ;
struct per_pidcomm {struct per_pidcomm* next; int comm; struct cpu_sample* samples; } ;
struct per_pid {struct per_pid* next; int pid; struct per_pidcomm* all; } ;
struct cpu_sample {scalar_t__ type; struct cpu_sample* next; int backtrace; int end_time; int start_time; int cpu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct timechart *VAR_1)
{
 struct per_pid *VAR_2;
 struct per_pidcomm *VAR_3;
 struct cpu_sample *VAR_4;
 VAR_2 = VAR_1->all_data;
 while (VAR_2) {
  VAR_3 = VAR_2->all;
  while (VAR_3) {
   VAR_4 = VAR_3->samples;
   while (VAR_4) {
    if (VAR_4->type == VAR_0) {
     FUNC_0(VAR_4->cpu,
          VAR_4->start_time,
          VAR_4->end_time,
          VAR_2->pid,
          VAR_3->comm,
          VAR_4->backtrace);
    }

    VAR_4 = VAR_4->next;
   }
   VAR_3 = VAR_3->next;
  }
  VAR_2 = VAR_2->next;
 }
}
