
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {int numcpus; struct per_pid* all_data; } ;
struct per_pidcomm {int Y; char* comm; int total_time; struct per_pidcomm* next; int start_time; struct cpu_sample* samples; int end_time; int display; } ;
struct per_pid {int pid; struct per_pid* next; struct per_pidcomm* all; } ;
struct cpu_sample {scalar_t__ type; struct cpu_sample* next; int backtrace; int end_time; int start_time; int cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*,char*,int,double) ;
 int FUNC_1 (int,int ,int ,int ,int ) ;
 int FUNC_2 (int,int ,int ,char*) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct timechart *VAR_5)
{
 struct per_pid *VAR_6;
 struct per_pidcomm *VAR_7;
 struct cpu_sample *VAR_8;
 int VAR_9 = 0;

 VAR_9 = 2 * VAR_5->numcpus + 2;

 VAR_6 = VAR_5->all_data;
 while (VAR_6) {
  VAR_7 = VAR_6->all;
  while (VAR_7) {
   if (!VAR_7->display) {
    VAR_7->Y = 0;
    VAR_7 = VAR_7->next;
    continue;
   }

   FUNC_2(VAR_9, VAR_7->start_time, VAR_7->end_time, "process");
   VAR_8 = VAR_7->samples;
   while (VAR_8) {
    if (VAR_8->type == VAR_3)
     FUNC_3(VAR_9, VAR_8->cpu,
          VAR_8->start_time,
          VAR_8->end_time,
          VAR_8->backtrace);
    if (VAR_8->type == VAR_2)
     FUNC_1(VAR_9, VAR_8->cpu,
          VAR_8->start_time,
          VAR_8->end_time,
          VAR_8->backtrace);
    if (VAR_8->type == VAR_4)
     FUNC_5(VAR_9, VAR_8->cpu,
          VAR_8->start_time,
          VAR_8->end_time,
          VAR_8->backtrace);
    VAR_8 = VAR_8->next;
   }

   if (VAR_7->comm) {
    char VAR_10[256];
    if (VAR_7->total_time > 5000000000)
     FUNC_0(VAR_10, "%s:%i (%2.2fs)", VAR_7->comm, VAR_6->pid, VAR_7->total_time / (double)VAR_1);
    else
     FUNC_0(VAR_10, "%s:%i (%3.1fms)", VAR_7->comm, VAR_6->pid, VAR_7->total_time / (double)VAR_0);

    FUNC_4(VAR_9, VAR_7->start_time, VAR_10);
   }
   VAR_7->Y = VAR_9;
   VAR_9++;
   VAR_7 = VAR_7->next;
  }
  VAR_6 = VAR_6->next;
 }
}
